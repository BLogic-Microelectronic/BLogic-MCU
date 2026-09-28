/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// demo_main.c - K11 demo firmware v2 (kart)
// ============================================
// Akis: QSPI boot (fw@0 + veri@0x8000 + YZ@0x10000) -> switch'lerden UART
// baud secimi -> OLED acilis -> acilista otomatik HW cikarim (irq17 + canli
// mcycle) -> UART menu: h/v/r/?. Sonuc uc yerde: UART satiri, LED3-6 (sinif
// biti) ve kart ustu 128x32 OLED (sinif + HW cevrim + baud).
//
// v2 (7 Eylul 2026): TEKNOFEST demo test harness'i (demo_harness.py 1.0.2)
// iki AYRI fiziksel seri port kullanir: "core UART" (sonuc satiri) ve
// "stream UART" (1960 baytlik vektor). Bu firmware'de:
//   core UART   = UART0 (FT232 USB kopru, COM7)  : RESULT satiri + [DEMO] loglari
//   stream UART = UART1 (Pmod JA: ja[0]=RXD, ja[1]=TXD, 3.3 V USB-TTL)
// Stream cercevesi (team_icd.json, harness FrameBuilder ile birebir):
//   "BLG1" (4) + uzunluk[2 LE]=1960 + payload[1960 int8] + CRC16-CCITT[2 LE]
//   (poly 0x1021, init 0xFFFF, yansimasiz; yalniz payload uzerinde)
// Sonuc satiri (core UART, harness varsayilan regex'i): "RESULT: <sinif>\n"
// ve hemen ardindan panel/kart_sweep icin "[DEMO] class = ... HW cycle = ..."
//
// Saglamlik (harness F senaryolari): stream alicisi bayt-bayt durum makinesi;
// preamble uyusmazligi / yanlis uzunluk / CRC hatasi -> tampondaki ilk sonraki
// "BLG1" adayina kaydirarak yeniden hizalanir (kesik ve fazla baytli
// cerceveler); cerceve ortasinda 100 ms sessizlik -> yarim cerceve atilir;
// art arda cerceveler icin UART1 baytlari her bekleme dongusunde 256 baytlik
// halkaya alinir (UART1'in RDR'si tek bayt, FIFO yok: 115200'de 87 us).
//
// UART baud (GPIO->IDR[1:0] = sw1:sw0, rtl/fpga_top.sv):
//   sw0 yukari (tek)  -> 9600  (CPB 5208)
//   sw1 yukari (tek)  -> 115200 (CPB 434)
//   ikisi asagi       -> 115200 (varsayilan)
//   ikisi yukari      -> GECERSIZ: son gecerli ayar korunur, LED7 yanar,
//                        OLED 4. satir "SW0+SW1 ERROR" yazar
// Secim acilista ve ana dongude (UART bosken) okunur; degisince yeni hizda
// banner basilir - host terminalinin de yeni hiza gecmesi gerekir.
// Stream UART (UART1) hizi: sw2 asagi 115200, sw2 yukari 230400 (ICD ile ayni).
//
// OLED (SSD1306, 4-hat SPI, GPIO->ODR[15:10] bit-bang; guc anahtarlari
// fpga_top'ta evrilir: 1 = besleme acik): Digilent OledInit sirasi -
// VDD -> DisplayOff -> reset darbesi -> charge pump/pre-charge -> VBAT (100 ms)
// -> kontrast/yonelim -> DisplayOn. 4 sayfa x 128 sutun, 5x7 yazi tipi
// (oled_font.h), 21 karakter/satir.
// Desenler: ISR+mie kurulumu ai_irq_test.c'den, mcycle ai_sw_reference.c'den.
#include "../drivers/blogic_mcu.h"
#include "oled_font.h"

/* Komut SRAM 8 KB: -O2 ile .text 8,6 KB (sigmiyor), -Os ile 4,4 KB. Tum derleme
   yollari (make flash-bin, demo-harness-sim, panel) ayni sonucu alsin diye
   secim dosyada. Zamanlama payi 230400'de 2170 cevrim/bayt; sim bunu dogrular. */
#pragma GCC optimize ("Os")

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
#define CPB_230400          217U
/* Stream UART1 hizi: sw2 asagi = 115200, sw2 yukari = 230400 (ICD ile ayni
   olmali). UART bolucusu 8'in katlarina yuvarlar (prescale = CPB[18:3]):
   434->432 (+0.5 %), 217->216 (+0.5 %); 1 Mbps icin 50->48 (+4.2 %) riskli,
   o yuzden 230400 secildi. Sim -DDEMO_STREAM_CPB=48 ile sabitlenir. */
#define SW_STREAM_FAST      (1U << 2)

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

/* Stream cercevesi */
#define STRM_PAYLOAD        AI_INPUT_BYTES
#define STRM_HDR            6U                          /* "BLG1" + len16 */
#define STRM_FRAME          (STRM_HDR + STRM_PAYLOAD + 2U) /* 1968 */
#define STRM_RING           256U                        /* 2^n */
#define STRM_IDLE_CYC       (100U * 50000U)             /* 100 ms sessizlik = yarim cerceve at (host 256 B parca araligi << 100 ms << harness 0.3 s) */

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};
static const char  STRM_PRE[4]    = {'B', 'L', 'G', '1'};

static volatile uint32_t g_isr_fired  = 0U;
static volatile uint32_t g_isr_status = 0U;
static uint32_t g_odr = 0U;              /* GPIO->ODR golgesi - YALNIZ ana baglamdan yazilir (ISR ODR'a dokunmaz) */
static uint32_t g_cpb = CPB_115200;      /* gecerli UART0 hizi */
static uint32_t g_scpb = CPB_115200;     /* gecerli UART1 (stream) hizi */
static uint16_t g_crc_tab[256];          /* CRC16-CCITT tablosu (acilista uretilir) */

/* stream alicisi durumu */
static uint8_t  g_ring[STRM_RING];       /* UART1'den alinan ham baytlar (poll) */
static uint32_t g_ring_w = 0U, g_ring_r = 0U;
static uint8_t  g_stg[STRM_FRAME];       /* cerceve tamponu: preamble+len+payload+crc */
static uint32_t g_stg_n = 0U;            /* tampondaki bayt sayisi */
static uint32_t g_last  = 0U;            /* son bayt mcycle (idle zaman asimi) */
static uint8_t  g_pay[STRM_PAYLOAD];     /* kabul edilen son payload (islenmeyi bekler) */
static volatile uint32_t g_ready = 0U;   /* 1 = g_pay islenmeyi bekliyor */
static uint32_t g_pumping = 0U;          /* strm_pump yeniden girisi kilidi */
static uint32_t g_st_ok = 0U, g_st_bad = 0U, g_st_idle = 0U, g_st_ovf = 0U, g_st_lost = 0U;
static uint32_t g_st_rx = 0U, g_st_len = 0U, g_st_crc = 0U;   /* tani: alinan bayt, uzunluk/CRC hatasi */

__attribute__((interrupt)) void ai_isr(void) {
    g_isr_status = AI_ACC->STATUS;
    AI_ACC->CTRL = CTRL_CLEAR_DONE;   /* level irq kaynagini dusur */
    (void)AI_ACC->STATUS;             /* readback: mret oncesi oturt */
    g_isr_fired++;
}

/* ---------------- kucuk yardimcilar ---------------- */
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

/* UART1 (stream) RX: RDR tek bayt, FIFO yok -> her bekleme dongusunde cagrilir,
   bayti halkaya alir. Islem (ayristirma) strm_pump'ta. */
static inline void strm_poll(void) {
    if (UART1->CFG & UART_CFG_RX_READY) {
        uint8_t b = (uint8_t)(UART1->RDR & 0xFFU);
        UART1->CFG = 0U;                                   /* rx_done temizle - sart */
        uint32_t nw = (g_ring_w + 1U) & (STRM_RING - 1U);
        g_st_rx++;
        if (nw != g_ring_r) { g_ring[g_ring_w] = b; g_ring_w = nw; }
        else g_st_ovf++;                                   /* halka dolu: bayt kayip */
    }
}

static void strm_pump(void);          /* asagida: halkayi ayristir (yalniz g_ready kurar) */

/* UART0 (core) cikis: TX bitene kadar beklerken stream'i dinle VE ayristir
   (halka yalniz dolarsa RESULT sonrasi ~7.5 ms'lik yazma penceresinde tasar) */
static void tx0(char c) {
    UART0->TDR = (uint32_t)c;
    UART0->CFG = UART_CFG_TX_START | UART_CFG_RX_READY;    /* rx_done'a DOKUNMA */
    while (!(UART0->CFG & UART_CFG_TX_DONE)) strm_pump();
    UART0->CFG = UART_CFG_RX_READY;
}
static void puts0(const char *s) { while (*s) tx0(*s++); }
static void putu0(uint32_t v) {
    char b[10]; uint32_t n = 0U;
    if (v == 0U) { tx0('0'); return; }
    while (v) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) tx0(b[n]);
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
static void delay_ms(uint32_t ms) {         /* mcycle tabanli, 50 MHz */
    uint32_t t0 = rdcycle(), n = ms * 50000U;
    while ((rdcycle() - t0) < n) strm_pump();
}

static inline void gpo_write(uint32_t v) { g_odr = v; GPIO->ODR = v; }
static inline void gpo_set(uint32_t m)   { gpo_write(g_odr | m); }
static inline void gpo_clr(uint32_t m)   { gpo_write(g_odr & ~m); }
static inline void gpo_leds(uint32_t v)  { gpo_write((g_odr & ~GPO_LED_MASK) | (v & GPO_LED_MASK)); }

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
        strm_poll();                         /* 3 AXI yazmasi ~60 cevrim; UART1 RDR tek bayt */
    }
    strm_pump();                             /* halkayi bosalt (yalniz g_ready kurar) */
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
/* OLED 4. satir: "U0 115200 U1 230400" (<= 21 karakter) */
static void oled_baud_line(uint32_t sw) {
    char b[24]; uint32_t n;
    if (sw == 3U) { oled_line(3U, "UART: SW0+SW1 ERROR"); return; }
    n = str_cpy(b, "U0 ");
    n += utoa_dec(b + n, (g_cpb == CPB_9600) ? 9600U : 115200U);
    n += str_cpy(b + n, " U1 ");
    utoa_dec(b + n, (g_scpb == CPB_230400) ? 230400U : 115200U);
    oled_line(3U, b);
}
/* sw2 -> stream UART1 hizi (sim'de sabit) */
static uint32_t stream_cpb_from_sw(void) {
#ifdef DEMO_STREAM_CPB
    return DEMO_STREAM_CPB;
#else
    return (GPIO->IDR & SW_STREAM_FAST) ? CPB_230400 : CPB_115200;
#endif
}
static void stream_apply(uint32_t banner) {
    uint32_t cpb = stream_cpb_from_sw();
    if (cpb == g_scpb) return;
    g_scpb = cpb;
    UART1->CPB = cpb;
    if (banner) {
        puts0("[DEMO] stream UART1 baud = ");
        putu0((cpb == CPB_230400) ? 230400U : 115200U);
        puts0((cpb == CPB_230400) ? " (sw2 up)\n" : " (sw2 down)\n");
        oled_baud_line(sw_read());
    }
}
/* sw okunur; gecerliyse hiz uygulanir (degistiyse banner), gecersizse LED7 */
static void baud_apply(uint32_t sw, uint32_t banner) {
    uint32_t cpb = cpb_from_sw(sw);
    if (cpb == 0U) {
        gpo_set(GPO_LED_WARN);
        oled_baud_line(sw);
        puts0("[DEMO] WARNING: sw0 and sw1 both up - baud unchanged\n");
        return;
    }
    gpo_clr(GPO_LED_WARN);
    if (cpb != g_cpb) {
        delay_ms(2U);                    /* son karakter hatta bitsin */
        UART0->CPB = cpb;
        g_cpb = cpb;
        if (banner) {
            puts0("\n[DEMO] UART baud = ");
            putu0((cpb == CPB_9600) ? 9600U : 115200U);
            puts0((sw == 1U) ? " (sw0)\n" : (sw == 2U) ? " (sw1)\n" : " (default)\n");
        }
    }
    oled_baud_line(sw);
}

/* ---------------- YZ cikarimi ---------------- */
/* Sonuc: once harness satiri "RESULT: <sinif>" (regex_line varsayilani), sonra
   panel / kart_sweep satiri "[DEMO] class = ... HW cycle = ...". */
static void run_hw(void) {
    g_isr_fired = 0U;
    uint32_t t0 = rdcycle();
    AI_ACC->CTRL = CTRL_START;
    uint32_t timeout = 2000000U;
    /* cikarim ~9 ms: art arda cercevelerde stream baytlari bu arada gelir;
       yalniz dinlemek yetmez (halka 256 B), ayristir da (g_ready'yi kurar,
       islem ana donguye kalir) */
    while ((g_isr_fired == 0U) && (timeout != 0U)) { timeout--; strm_pump(); }
    uint32_t t1 = rdcycle();
    if (g_isr_fired == 0U) {
        puts0("RESULT: error\n");
        puts0("[DEMO] FAIL: no ISR\n"); oled_line(1U, "class = ? (no IRQ)"); return;
    }
    uint32_t argmax = (g_isr_status >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK;
    uint32_t hwcyc  = t1 - t0;
    const char *ad  = (argmax < 4U) ? CLASS_NAMES[argmax] : "unknown";
    puts0("RESULT: "); puts0(ad); tx0('\n');
    puts0("[DEMO] class = ");
    puts0(ad);
    puts0("  HW cycle = ");
    putu0(hwcyc);
    if (hwcyc != 0U) {
        uint32_t r10 = (SW_BASELINE_CYC * 10U) / hwcyc;   /* tek ondalik */
        puts0("  speedup ~");
        putu0(r10 / 10U); tx0('.');
        putu0(r10 % 10U); puts0("x (SW baseline 9,684,726)");
    }
    tx0('\n');
    gpo_leds(1U << argmax);           /* sinif -> LED biti (LED3..LED6) */
    {
        char b[24]; uint32_t n;
        n = str_cpy(b, "class = "); str_cpy(b + n, ad);
        oled_line(1U, b);
        n = str_cpy(b, "HW cycle = "); utoa_dec(b + n, hwcyc);
        oled_line(2U, b);
    }
}

/* ---------------- stream (UART1) cerceve ayristirici ---------------- */
/* CRC16-CCITT (poly 0x1021, init 0xFFFF, yansimasiz) - demo_harness.py
   crc16_ccitt ile birebir; tablo acilista uretilir (~10 cevrim/bayt). */
static void crc16_init(void) {
    uint32_t b, i, c;
    for (b = 0U; b < 256U; b++) {
        c = b << 8;
        for (i = 0U; i < 8U; i++) c = (c & 0x8000U) ? (((c << 1) ^ 0x1021U) & 0xFFFFU) : ((c << 1) & 0xFFFFU);
        g_crc_tab[b] = (uint16_t)c;
    }
}
static inline uint32_t crc16_step(uint32_t crc, uint32_t b) {
    return ((crc << 8) & 0xFFFFU) ^ (uint32_t)g_crc_tab[((crc >> 8) ^ b) & 0xFFU];
}
static void strm_reset(void) { g_stg_n = 0U; }

/* Tampon basindaki bayti at ve bir sonraki "BLG1" adayina (tam ya da kismi
   onek) kadar sola kaydir. Ic ice cagri yok, yigin buyumez (7 Eylul: ozyineli
   surum payload icindeki her 'B' baytinda bir kat daha derine iniyordu). */
static void strm_shift(void) {
    uint32_t n = g_stg_n, p, i, k, m;
    for (p = 1U; p < n; p++) {
        if ((p & 3U) == 0U) strm_poll();        /* RDR tek bayt: aday aramasinda da sik dinle */
        m = n - p; if (m > 4U) m = 4U;
        for (k = 0U; k < m; k++) if (g_stg[p + k] != (uint8_t)STRM_PRE[k]) break;
        if (k == m) break;                      /* p'den itibaren onek uyuyor */
    }
    if (p >= n) { g_stg_n = 0U; return; }
    for (i = 0U; i + p < n; i++) {
        g_stg[i] = g_stg[i + p];
        if ((i & 15U) == 0U) strm_poll();
    }
    g_stg_n = n - p;
}

/* UART1 RDR tek bayttir (FIFO yok): asagidaki her dongu en gec bir bayt
   suresinde (1 Mbps sim: 480 cevrim) strm_poll cagirir; yoksa bayt EZILIR
   (7 Eylul: CRC dongusu 256 baytta bir dinliyordu -> 13 cercevenin 10'u bozuk).
   Bir bayt ekle, sonra tampon basindan itibaren cerceveyi degerlendir:
   onek uyusmazligi / yanlis uzunluk / CRC hatasi -> kaydir ve tekrar dene
   (her kaydirma tamponu kisaltir, dongu sonlanir). CRC yalniz tam cerceve
   geldiginde hesaplanir (tablo, ~10 cevrim/bayt; arada hat dinlenir). */
static void strm_feed(uint8_t b) {
    if (g_stg_n >= STRM_FRAME) g_stg_n = 0U;              /* olmamali: guvenlik */
    g_stg[g_stg_n++] = b; g_last = rdcycle();
    for (;;) {
        uint32_t n = g_stg_n, m = (n < 4U) ? n : 4U, k, i, crc, rx, len;
        for (k = 0U; k < m; k++) if (g_stg[k] != (uint8_t)STRM_PRE[k]) break;
        if (k < m) { strm_shift(); continue; }            /* onek uyusmadi */
        if (n < STRM_HDR) return;                          /* daha bekle */
        len = (uint32_t)g_stg[4] | ((uint32_t)g_stg[5] << 8);
        if (len != STRM_PAYLOAD) { g_st_bad++; g_st_len++; strm_shift(); continue; }
        if (n < STRM_FRAME) return;                        /* payload + CRC bekle */
        crc = 0xFFFFU;
        for (i = 0U; i < STRM_PAYLOAD; i++) {
            crc = crc16_step(crc, g_stg[STRM_HDR + i]);
            if ((i & 15U) == 0U) strm_poll();       /* 16 bayt x ~15 cevrim < bir bayt suresi */
        }
        rx = (uint32_t)g_stg[STRM_FRAME - 2U] | ((uint32_t)g_stg[STRM_FRAME - 1U] << 8);
        if (rx == crc) {
            if (g_ready) g_st_lost++;                     /* onceki islenmeden yenisi geldi */
            for (i = 0U; i < STRM_PAYLOAD; i++) {
                g_pay[i] = g_stg[STRM_HDR + i];
                if ((i & 15U) == 0U) strm_poll();
            }
            g_ready = 1U; g_st_ok++;
            g_stg_n = 0U;
            return;
        }
        g_st_bad++; g_st_crc++; strm_shift();              /* CRC hatasi */
    }
}

/* Halkadaki baytlari ayristir; yarim cerceve 15 ms sessiz kalirsa atilir */
static void strm_pump(void) {
    if (g_pumping) return;
    g_pumping = 1U;
    strm_poll();
    while (g_ring_r != g_ring_w) {
        uint8_t b = g_ring[g_ring_r];
        g_ring_r = (g_ring_r + 1U) & (STRM_RING - 1U);
        strm_feed(b);
        strm_poll();
    }
    if (g_stg_n != 0U && (rdcycle() - g_last) > STRM_IDLE_CYC) { g_st_idle++; strm_reset(); }
    g_pumping = 0U;
}

/* Hazir payload'i YZ SRAM'e kopyala, cikarimi kostur (yalniz ana baglamdan) */
static void strm_process(void) {
    volatile uint8_t *dst = (volatile uint8_t *)(AI_SRAM_BASE + AI_INPUT_OFF);
    uint32_t i;
    g_ready = 0U;
    for (i = 0U; i < STRM_PAYLOAD; i++) {
        dst[i] = g_pay[i];                    /* YZ SRAM yazmasi AXI uzerinden yavas: sik dinle */
        if ((i & 3U) == 0U) strm_poll();
    }
    run_hw();
}

/* BLG1 alimi (UART0 = panel / send_vector.py, degismedi):
   'B''L''G''1' + uzunluk[4 LE] + veri + toplam-saglama[4 LE].
   rx_byte deseni ai_uart_load_test.c ile birebir (CFG=0 sart). */
#define RX_TMO_CYC 600000000U            /* 12 s @ 50 MHz */
static uint32_t rx_byte(uint32_t *out) {
    uint32_t t0 = rdcycle();
    while ((UART0->CFG & UART_CFG_RX_READY) == 0U) {
        strm_poll();
        if ((rdcycle() - t0) > RX_TMO_CYC) return 0U;
    }
    *out       = UART0->RDR & 0xFFU;
    UART0->CFG = 0U;
    return 1U;
}
static uint32_t rx_u32(uint32_t *out) {
    uint32_t v = 0U, b;
    for (uint32_t i = 0U; i < 4U; i++) {
        if (!rx_byte(&b)) return 0U;
        v |= (b << (8U * i));
    }
    *out = v; return 1U;
}

static void load_vector_uart(void) {
    puts0("[DEMO] waiting for BLG1 frame (send_vector.py)...\n");
    static const char MAGIC[4] = {'B','L','G','1'};
    uint32_t got = 0U, b, len = 0U, sum = 0U, chk = 0U;
    while (got < 4U) {
        if (!rx_byte(&b)) { puts0("[DEMO] RX timeout (magic)\n"); return; }
        got = ((char)b == MAGIC[got]) ? got + 1U : (((char)b == MAGIC[0]) ? 1U : 0U);
    }
    if (!rx_u32(&len)) { puts0("[DEMO] RX timeout (length)\n"); return; }
    if (len == 0U || len > AI_INPUT_BYTES) { puts0("[DEMO] invalid length\n"); return; }
    volatile uint8_t *dst = (volatile uint8_t *)(AI_SRAM_BASE + AI_INPUT_OFF);
    for (uint32_t i = 0U; i < len; i++) {
        if (!rx_byte(&b)) { puts0("[DEMO] RX timeout (data)\n"); return; }
        dst[i] = (uint8_t)b; sum += b;
    }
    if (!rx_u32(&chk)) { puts0("[DEMO] RX timeout (checksum)\n"); return; }
    if (chk != sum) { puts0("[DEMO] CHECKSUM ERROR - inference skipped\n"); return; }
    puts0("[DEMO] input verified ("); putu0(len);
    puts0(" bytes), inference:\n");
    run_hw();
}

/* Acilis satiri onek TASIMAZ: harness boot_banner_regex ("BLogic MCU") ve
   '?' tetigi (boot_trigger_core_hex 3F) bu satiri bekler. */
/* UART1 TX: TDR yazisi gondermeyi baslatir (tx_start = wr_tdr_hit); tx_done
   bayragi strm_poll'un CFG=0 yazmasiyla silindigi icin bekleme sure tabanli
   (11 bit-suresi), bu arada halka bosaltilir. */
static void tx1_byte(uint32_t b) {
    uint32_t t0 = rdcycle(), n = g_scpb * 11U + 8U;
    UART1->TDR = b & 0xFFU;
    while ((rdcycle() - t0) < n) strm_pump();
}
/* 'l': YZ SRAM'deki girdi vektorunu (acilista flash'tan yuklenen golden
   vektor ya da son gonderilen) harness cercevesi olarak UART1 TX'ten yolla;
   JA1<->JA2 jumper ile RX'e doner, normal yol RESULT basar. */
static void loopback_test(void) {
    const volatile uint8_t *src = (const volatile uint8_t *)(AI_SRAM_BASE + AI_INPUT_OFF);
    uint32_t i, crc = 0xFFFFU;
    puts0("[DEMO] UART1 loopback self-test: sending one frame on JA2 (TXD), expecting it on JA1 (RXD)\n");
    for (i = 0U; i < 4U; i++) tx1_byte((uint32_t)STRM_PRE[i]);
    tx1_byte(STRM_PAYLOAD & 0xFFU); tx1_byte(STRM_PAYLOAD >> 8);
    for (i = 0U; i < STRM_PAYLOAD; i++) {
        uint32_t b = src[i];
        crc = crc16_step(crc, b);
        tx1_byte(b);
    }
    tx1_byte(crc & 0xFFU); tx1_byte(crc >> 8);
    delay_ms(5U);                                   /* son bayt gelsin, ayristirilsin */
    if (g_ready) puts0("[DEMO] loopback frame received (CRC OK) - inference follows\n");
    else         puts0("[DEMO] loopback FAILED: no valid frame back on UART1 RX (jumper JA1-JA2? sw2/baud?)\n");
}

static void banner(void) {
    puts0("\nBLogic MCU - Micro Speech live demo (QSPI boot, demo firmware v2)\n");
}
static void menu(void) {
    puts0("[DEMO] h=HW inference  v=new input via BLG1 (send_vector.py)  r=report  l=UART1 loopback test  ?=menu\n");
    puts0("[DEMO] baud: sw0=9600 sw1=115200 (both down=115200); sw2 up = stream UART1 230400\n");
    puts0("[DEMO] stream UART1 (Pmod JA) frames BLG1+len16+1960 int8+CRC16, answered on UART0 with a result line\n");
}
/* 'r': ilk satir onek tasimaz - harness peripheral_interleave hook'u
   (interleave_core_hex 72, interleave_expect_regex "SW baseline") */
static void report(void) {
    puts0("REPORT: SW baseline 9,684,726 cycles (xPack 13.2.0 -O2,"
          " soc-perf); live HW measurement above. Details: README.\n");
    puts0("[DEMO] stream frames ok="); putu0(g_st_ok);
    puts0(" bad="); putu0(g_st_bad);
    puts0(" idle-dropped="); putu0(g_st_idle);
    puts0(" ring-overflow="); putu0(g_st_ovf);
    puts0(" unprocessed="); putu0(g_st_lost);
    puts0(" rx-bytes="); putu0(g_st_rx); puts0(" bad-len="); putu0(g_st_len); puts0(" bad-crc="); putu0(g_st_crc); tx0('\n');
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

    /* stream UART1: hiz sw2'den (sim'de sabit), DMA kapali (bayt-bayt RDR) */
    crc16_init();
    g_scpb = stream_cpb_from_sw();
    UART1->CPB = g_scpb;
    UART1->CFG = 0U;
    strm_reset();

    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;
    (void)AI_ACC->CTRL; (void)AI_ACC->DATA_ADDR;   /* readback kollari */

    __asm__ volatile(".option push\n.option arch, +zicsr\n"
                     "li t0, 131072\ncsrs mie, t0\ncsrsi mstatus, 8\n"
                     ".option pop\n" ::: "t0");

    oled_init();                      /* ~105 ms; UART banner'dan once */
    oled_baud_line(sw_last);

    banner();
    puts0("[DEMO] UART baud = ");
    putu0((g_cpb == CPB_9600) ? 9600U : 115200U);
    puts0((sw_last == 1U) ? " (sw0)\n" : (sw_last == 2U) ? " (sw1)\n"
        : (sw_last == 3U) ? " (sw0+sw1 INVALID, default)\n" : " (default)\n");
    puts0("[DEMO] stream UART1 baud = ");
    putu0((g_scpb == CPB_230400) ? 230400U : 115200U);
    puts0((g_scpb == CPB_230400) ? " (sw2 up)\n" : " (sw2 down)\n");
    puts0("[DEMO] Boot inference (golden input loaded from flash):\n");
    run_hw();
    menu();

    while (1) {
        strm_pump();                          /* UART1 baytlari -> cerceve */
        if (g_ready) { strm_process(); continue; }
        if (UART0->CFG & UART_CFG_RX_READY) {
            char c = (char)(UART0->RDR & 0xFFU);
            UART0->CFG = 0U;          /* rx_done temizle - sart */
            if      (c == 'h') run_hw();
            else if (c == 'v') load_vector_uart();
            else if (c == 'r') report();
            else if (c == 'l') loopback_test();
            else if (c == '?') { banner(); menu(); }
        } else {
            uint32_t sw = sw_read();
            if (sw != sw_last) {
                delay_ms(20U);        /* switch sicramasi */
                sw = sw_read();
                if (sw != sw_last) { sw_last = sw; baud_apply(sw, 1U); }
            }
            if (g_stg_n == 0U) stream_apply(1U);   /* sw2: yalniz cerceve arasinda */
        }
    }
    return 0;
}
