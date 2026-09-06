// ============================================
// Ostim BLogic Mikroelektronik
// demo_main.c - K11 demo firmware v1 (kart)
// ============================================
// Akis: QSPI boot (fw@0 + veri@0x8000 + YZ@0x10000) -> switch'lerden UART
// baud secimi -> OLED acilis -> acilista otomatik HW cikarim (irq17 + canli
// mcycle) -> UART menu: h/v/r/?. Sonuc uc yerde: UART satiri, LED3-6 (sinif
// biti) ve kart ustu 128x32 OLED (sinif + HW cevrim + baud).
//
// UART baud (GPIO->IDR[1:0] = sw1:sw0, rtl/fpga_top.sv):
//   sw0 yukari (tek)  -> 9600  (CPB 5208)
//   sw1 yukari (tek)  -> 115200 (CPB 434)
//   ikisi asagi       -> 115200 (varsayilan)
//   ikisi yukari      -> GECERSIZ: son gecerli ayar korunur, LED7 yanar,
//                        OLED 4. satir "SW0+SW1 ERROR" yazar
// Secim acilista ve ana dongude (UART bosken) okunur; degisince yeni hizda
// banner basilir - host terminalinin de yeni hiza gecmesi gerekir.
//
// OLED (SSD1306, 4-hat SPI, GPIO->ODR[15:10] bit-bang; guc anahtarlari
// fpga_top'ta evrilir: 1 = besleme acik): Digilent OledInit sirasi -
// VDD -> DisplayOff -> reset darbesi -> charge pump/pre-charge -> VBAT (100 ms)
// -> kontrast/yonelim -> DisplayOn. 4 sayfa x 128 sutun, 5x7 yazi tipi
// (oled_font.h), 21 karakter/satir.
// Desenler: ISR+mie kurulumu ai_irq_test.c'den, mcycle ai_sw_reference.c'den.
#include "../drivers/blogic_mcu.h"
#include "oled_font.h"

#define AI_SRAM_BASE        0x00030000U
#define AI_INPUT_OFF        0x00000000U
#define AI_RESULT_OFF       0x00005A58U
#define AI_INPUT_BYTES      1960U          /* 49x40 ozellik cercevesi */

#define CTRL_START          (1U << 0)
#define CTRL_CLEAR_DONE     (1U << 1)
#define STATUS_RESULT_SHIFT 4U
#define STATUS_RESULT_MASK  0xFU

/* soc-perf 11 Agu, xPack GCC 13.2.0 -O2 (kok README tablosu) */
#define SW_BASELINE_CYC     9684726U

/* UART clock-per-bit @ 50 MHz */
#define CPB_115200          434U
#define CPB_9600            5208U

/* GPIO cikis haritasi (rtl/fpga_top.sv):
   [3:0] sinif LED'i (LED3..LED6), [4] LED7 = switch uyarisi,
   [15:8] Pmod JB aynasi, [10] OLED VDD, [11] VBAT, [12] RES, [13] DC,
   [14] SCLK, [15] SDIN. ODR tek yazmac: golge kopya ile RMW. */
#define GPO_LED_MASK        0x0000000FU
#define GPO_LED_WARN        (1U << 4)
#define GPO_OLED_VDD        (1U << 10)
#define GPO_OLED_VBAT       (1U << 11)
#define GPO_OLED_RES        (1U << 12)
#define GPO_OLED_DC         (1U << 13)
#define GPO_OLED_SCLK       (1U << 14)
#define GPO_OLED_SDIN       (1U << 15)

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

static volatile uint32_t g_isr_fired  = 0U;
static volatile uint32_t g_isr_status = 0U;
static uint32_t g_odr = 0U;              /* GPIO->ODR golgesi - YALNIZ ana baglamdan yazilir (ISR ODR'a dokunmaz) */
static uint32_t g_cpb = CPB_115200;      /* gecerli UART hizi */

__attribute__((interrupt)) void ai_isr(void) {
    g_isr_status = AI_ACC->STATUS;
    AI_ACC->CTRL = CTRL_CLEAR_DONE;   /* level irq kaynagini dusur */
    (void)AI_ACC->STATUS;             /* readback: mret oncesi oturt */
    g_isr_fired++;
}

/* ---------------- kucuk yardimcilar ---------------- */
static inline void gpo_write(uint32_t v) { g_odr = v; GPIO->ODR = v; }
static inline void gpo_set(uint32_t m)   { gpo_write(g_odr | m); }
static inline void gpo_clr(uint32_t m)   { gpo_write(g_odr & ~m); }
static inline void gpo_leds(uint32_t v)  { gpo_write((g_odr & ~GPO_LED_MASK) | (v & GPO_LED_MASK)); }

static void uart_putu(UART_TypeDef *u, uint32_t v) {
    char b[10]; uint32_t n = 0U;
    if (v == 0U) { uart_putc(u, '0'); return; }
    while (v) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) uart_putc(u, b[n]);
}

/* sayi -> metin (sonuna NUL), yazilan uzunluk doner */
static uint32_t utoa_dec(char *dst, uint32_t v) {
    char b[10]; uint32_t n = 0U, i;
    if (v == 0U) { dst[0] = '0'; dst[1] = '\0'; return 1U; }
    while (v) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    for (i = 0U; i < n; i++) dst[i] = b[n - 1U - i];
    dst[n] = '\0';
    return n;
}
static uint32_t str_cpy(char *dst, const char *s) {
    uint32_t n = 0U;
    while (s[n] != '\0') { dst[n] = s[n]; n++; }
    dst[n] = '\0';
    return n;
}

static inline void mcycle_enable(void) {
    __asm__ volatile(".option push\n.option arch, +zicsr\n"
                     "csrw 0x320, x0\n"      /* mcountinhibit=0 */
                     ".option pop\n" ::: );
}
static inline uint32_t rdcycle(void) {
    uint32_t c;
    __asm__ volatile(".option push\n.option arch, +zicsr\n"
                     "csrr %0, 0xB00\n"      /* mcycle */
                     ".option pop\n" : "=r"(c));
    return c;
}
static void delay_ms(uint32_t ms) {         /* mcycle tabanli, 50 MHz */
    uint32_t t0 = rdcycle(), n = ms * 50000U;
    while ((rdcycle() - t0) < n) { __asm__ volatile("nop"); }
}

/* ---------------- OLED: SSD1306, 4-hat SPI bit-bang ---------------- */
/* Mod 0: SCLK boşta 0, veri yukselen kenarda orneklenir, MSB once.
   Her bit uc ODR yazmasi (~30 cevrim) -> ~1,6 MHz, SSD1306 siniri 10 MHz. */
static void oled_byte(uint32_t b) {
    uint32_t i;
    for (i = 0U; i < 8U; i++) {
        uint32_t base = (b & 0x80U) ? (g_odr | GPO_OLED_SDIN) : (g_odr & ~GPO_OLED_SDIN);
        GPIO->ODR = base;                    /* SDIN kur, SCLK=0 */
        GPIO->ODR = base | GPO_OLED_SCLK;    /* yukselen kenar: ornekle */
        GPIO->ODR = base;                    /* dusen kenar */
        g_odr = base;
        b <<= 1;
    }
}
static void oled_cmd(uint32_t c)  { gpo_clr(GPO_OLED_DC); oled_byte(c & 0xFFU); }
static void oled_data(uint32_t d) { gpo_set(GPO_OLED_DC); oled_byte(d & 0xFFU); }

/* Satir yaz: page 0..3 (8 piksel), en fazla 21 karakter, kalan sutunlar silinir */
static void oled_line(uint32_t page, const char *s) {
    uint32_t col = 0U, k;
    oled_cmd(0xB0U | (page & 3U));          /* sayfa adresi */
    oled_cmd(0x00U);                        /* sutun 0 (alt nibble) */
    oled_cmd(0x10U);                        /* sutun 0 (ust nibble) */
    while (*s != '\0' && col + 6U <= 128U) {
        uint32_t ch = (uint32_t)(unsigned char)*s++;
        const uint8_t *gl = OLED_FONT[(ch >= 0x20U && ch <= 0x7EU) ? (ch - 0x20U) : ('?' - 0x20U)];
        for (k = 0U; k < 5U; k++) oled_data(gl[k]);
        oled_data(0x00U);                   /* karakter araligi */
        col += 6U;
    }
    while (col < 128U) { oled_data(0x00U); col++; }
}
static void oled_clear(void) {
    uint32_t p;
    for (p = 0U; p < 4U; p++) oled_line(p, "");
}

/* Digilent OledInit sirasi (UG-2832HSWEG04 / SSD1306). */
static void oled_init(void) {
    gpo_clr(GPO_OLED_VDD | GPO_OLED_VBAT | GPO_OLED_RES | GPO_OLED_DC |
            GPO_OLED_SCLK | GPO_OLED_SDIN);       /* her sey kapali, resette */
    gpo_set(GPO_OLED_VDD);  delay_ms(1U);         /* VDD (mantik) acik */
    gpo_clr(GPO_OLED_RES);  delay_ms(1U);
    gpo_set(GPO_OLED_RES);  delay_ms(1U);         /* reset darbesi (>= 3 us) */
    oled_cmd(0xAEU);                              /* display off (reset sonrasi) */
    oled_cmd(0x8DU); oled_cmd(0x14U);             /* charge pump acik */
    oled_cmd(0xD9U); oled_cmd(0xF1U);             /* pre-charge */
    gpo_set(GPO_OLED_VBAT); delay_ms(100U);       /* VBAT (panel) acik */
    oled_cmd(0x81U); oled_cmd(0x8FU);             /* kontrast (panel veri sayfasi degeri; MUX 64 ile 0x0F sonuk kalir) */
    /* Yonelim/COM yapisi: Digilent'in Genesys 2 OLED demosu (Genesys-2-OLED,
       init_sequence.coe) ile BIREBIR: A0 / C0 / DA 00. Kartta kanitli birlesim;
       PmodOLED kutuphanesinin A1 / C8 / DA 20 uclusu 180 derece dondurulmus
       esdegerdir, burada kullanilmaz. */
    oled_cmd(0xA0U);                              /* segment remap: normal */
    oled_cmd(0xC0U);                              /* COM tarama: normal */
    oled_cmd(0xDAU); oled_cmd(0x00U);             /* COM pin yapisi: ardisik, L/R remap yok */
    oled_cmd(0xAFU);                              /* display on */
    oled_clear();
    oled_line(0U, "BLogic MCU  TEKNOFEST");
}

/* ---------------- UART baud secimi (switch) ---------------- */
static uint32_t sw_read(void) { return GPIO->IDR & 0x3U; }   /* [1]=sw1 [0]=sw0 */
static uint32_t cpb_from_sw(uint32_t sw) {
    if (sw == 1U) return CPB_9600;      /* yalniz sw0 */
    if (sw == 2U) return CPB_115200;    /* yalniz sw1 */
    if (sw == 0U) return CPB_115200;    /* ikisi asagi: varsayilan */
    return 0U;                          /* ikisi yukari: gecersiz */
}
static void oled_baud_line(uint32_t sw) {
    char b[24]; uint32_t n;
    if (sw == 3U) { oled_line(3U, "UART: SW0+SW1 ERROR"); return; }
    n = str_cpy(b, "UART: ");
    n += utoa_dec(b + n, (g_cpb == CPB_9600) ? 9600U : 115200U);
    str_cpy(b + n, (sw == 1U) ? " [sw0]" : (sw == 2U) ? " [sw1]" : " [def]");
    oled_line(3U, b);
}
/* sw okunur; gecerliyse hiz uygulanir (degistiyse banner), gecersizse LED7 */
static void baud_apply(uint32_t sw, uint32_t banner) {
    uint32_t cpb = cpb_from_sw(sw);
    if (cpb == 0U) {
        gpo_set(GPO_LED_WARN);
        oled_baud_line(sw);
        uart_puts(UART0, "[DEMO] WARNING: sw0 and sw1 both up - baud unchanged\n");
        return;
    }
    gpo_clr(GPO_LED_WARN);
    if (cpb != g_cpb) {
        delay_ms(2U);                    /* son karakter hatta bitsin */
        UART0->CPB = cpb;
        g_cpb = cpb;
        if (banner) {
            uart_puts(UART0, "\n[DEMO] UART baud = ");
            uart_putu(UART0, (cpb == CPB_9600) ? 9600U : 115200U);
            uart_puts(UART0, (sw == 1U) ? " (sw0)\n" : (sw == 2U) ? " (sw1)\n" : " (default)\n");
        }
    }
    oled_baud_line(sw);
}

/* ---------------- YZ cikarimi ---------------- */
static void run_hw(void) {
    g_isr_fired = 0U;
    uint32_t t0 = rdcycle();
    AI_ACC->CTRL = CTRL_START;
    uint32_t timeout = 2000000U;
    while ((g_isr_fired == 0U) && (timeout != 0U)) { timeout--; __asm__ volatile("nop"); }
    uint32_t t1 = rdcycle();
    if (g_isr_fired == 0U) { uart_puts(UART0, "[DEMO] FAIL: no ISR\n"); oled_line(1U, "class = ? (no IRQ)"); return; }
    uint32_t argmax = (g_isr_status >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK;
    uint32_t hwcyc  = t1 - t0;
    const char *ad  = (argmax < 4U) ? CLASS_NAMES[argmax] : "?";
    uart_puts(UART0, "[DEMO] class = ");
    uart_puts(UART0, ad);
    uart_puts(UART0, "  HW cycle = ");
    uart_putu(UART0, hwcyc);
    if (hwcyc != 0U) {
        uint32_t r10 = (SW_BASELINE_CYC * 10U) / hwcyc;   /* tek ondalik */
        uart_puts(UART0, "  speedup ~");
        uart_putu(UART0, r10 / 10U); uart_putc(UART0, '.');
        uart_putu(UART0, r10 % 10U); uart_puts(UART0, "x (SW baseline 9,684,726)");
    }
    uart_putc(UART0, '\n');
    gpo_leds(1U << argmax);           /* sinif -> LED biti (LED3..LED6) */
    {
        char b[24]; uint32_t n;
        n = str_cpy(b, "class = "); str_cpy(b + n, ad);
        oled_line(1U, b);
        n = str_cpy(b, "HW cycle = "); utoa_dec(b + n, hwcyc);
        oled_line(2U, b);
    }
}

/* BLG1 alimi - send_vector.py ile ayni protokol:
   'B''L''G''1' + uzunluk[4 LE] + veri + toplam-saglama[4 LE].
   rx_byte deseni ai_uart_load_test.c ile birebir (CFG=0 sart). */
static uint32_t rx_byte(uint32_t *out, uint32_t timeout) {
    while ((UART0->CFG & UART_CFG_RX_READY) == 0U) {
        if (timeout-- == 0U) return 0U;
    }
    *out       = UART0->RDR & 0xFFU;
    UART0->CFG = 0U;
    return 1U;
}
static uint32_t rx_u32(uint32_t *out, uint32_t timeout) {
    uint32_t v = 0U, b;
    for (uint32_t i = 0U; i < 4U; i++) {
        if (!rx_byte(&b, timeout)) return 0U;
        v |= (b << (8U * i));
    }
    *out = v; return 1U;
}
#define RX_TMO 60000000U

static void load_vector_uart(void) {
    uart_puts(UART0, "[DEMO] waiting for BLG1 frame (send_vector.py)...\n");
    static const char MAGIC[4] = {'B','L','G','1'};
    uint32_t got = 0U, b, len = 0U, sum = 0U, chk = 0U;
    while (got < 4U) {
        if (!rx_byte(&b, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (magic)\n"); return; }
        got = ((char)b == MAGIC[got]) ? got + 1U : (((char)b == MAGIC[0]) ? 1U : 0U);
    }
    if (!rx_u32(&len, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (length)\n"); return; }
    if (len == 0U || len > AI_INPUT_BYTES) { uart_puts(UART0, "[DEMO] invalid length\n"); return; }
    volatile uint8_t *dst = (volatile uint8_t *)(AI_SRAM_BASE + AI_INPUT_OFF);
    for (uint32_t i = 0U; i < len; i++) {
        if (!rx_byte(&b, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (data)\n"); return; }
        dst[i] = (uint8_t)b; sum += b;
    }
    if (!rx_u32(&chk, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (checksum)\n"); return; }
    if (chk != sum) { uart_puts(UART0, "[DEMO] CHECKSUM ERROR - inference skipped\n"); return; }
    uart_puts(UART0, "[DEMO] input verified ("); uart_putu(UART0, len);
    uart_puts(UART0, " bytes), inference:\n");
    run_hw();
}

static void menu(void) {
    uart_puts(UART0, "[DEMO] h=HW inference  v=new input via BLG1 (send_vector.py)  r=report  ?=menu\n");
    uart_puts(UART0, "[DEMO] baud: sw0=9600 sw1=115200 (both down=115200); OLED: class/cycles/baud\n");
}

int main(void) {
    uint32_t sw_last;
    mcycle_enable();
    gpo_write(0U);                    /* LED'ler sonuk, OLED beslemeleri kapali */

    /* UART hizi: banner basilmadan ONCE switch'lerden secilir */
    sw_last = sw_read();
    g_cpb = CPB_115200;
    UART0->CPB = CPB_115200;
    if (cpb_from_sw(sw_last) == CPB_9600) { UART0->CPB = CPB_9600; g_cpb = CPB_9600; }
    if (cpb_from_sw(sw_last) == 0U) gpo_set(GPO_LED_WARN);

    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;
    (void)AI_ACC->CTRL; (void)AI_ACC->DATA_ADDR;   /* readback kollari */

    __asm__ volatile(".option push\n.option arch, +zicsr\n"
                     "li t0, 131072\ncsrs mie, t0\ncsrsi mstatus, 8\n"
                     ".option pop\n" ::: "t0");

    oled_init();                      /* ~105 ms; UART banner'dan once */
    oled_baud_line(sw_last);

    uart_puts(UART0, "\n[DEMO] BLogic MCU - Micro Speech live demo (QSPI boot)\n");
    uart_puts(UART0, "[DEMO] UART baud = ");
    uart_putu(UART0, (g_cpb == CPB_9600) ? 9600U : 115200U);
    uart_puts(UART0, (sw_last == 1U) ? " (sw0)\n" : (sw_last == 2U) ? " (sw1)\n"
                   : (sw_last == 3U) ? " (sw0+sw1 INVALID, default)\n" : " (default)\n");
    uart_puts(UART0, "[DEMO] Boot inference (golden input loaded from flash):\n");
    run_hw();
    menu();

    while (1) {
        if (UART0->CFG & UART_CFG_RX_READY) {
            char c = (char)(UART0->RDR & 0xFFU);
            UART0->CFG = 0U;          /* rx_done temizle - sart */
            if      (c == 'h') run_hw();
            else if (c == 'v') load_vector_uart();
            else if (c == 'r') {
                uart_puts(UART0, "[DEMO] SW baseline 9,684,726 cycles (xPack 13.2.0 -O2,"
                                 " soc-perf); live HW measurement above. Details: README.\n");
            }
            else if (c == '?') menu();
        } else {
            uint32_t sw = sw_read();
            if (sw != sw_last) {
                delay_ms(20U);        /* switch sicramasi */
                sw = sw_read();
                if (sw != sw_last) { sw_last = sw; baud_apply(sw, 1U); }
            }
        }
    }
    return 0;
}
