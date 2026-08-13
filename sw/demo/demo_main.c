// ============================================
// Ostim BLogic Mikroelektronik
// demo_main.c - K11 demo firmware v0 (kart)
// ============================================
// Akis: QSPI boot (fw@0 + veri@0x8000 + YZ@0x10000) -> acilista otomatik
// HW cikarim (irq17 + canli mcycle) -> UART menu: h/v/r/?
// LED (GPIO->ODR) = sinif biti. SW-canli kosum v1'de; v0 orani kayitli
// tabana gore verir ve kaynagini soyler.
// Desenler: ISR+mie kurulumu ai_irq_test.c'den, mcycle ai_sw_reference.c'den.
#include "../drivers/blogic_mcu.h"

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

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

static volatile uint32_t g_isr_fired  = 0U;
static volatile uint32_t g_isr_status = 0U;

__attribute__((interrupt)) void ai_isr(void) {
    g_isr_status = AI_ACC->STATUS;
    AI_ACC->CTRL = CTRL_CLEAR_DONE;   /* level irq kaynagini dusur */
    (void)AI_ACC->STATUS;             /* readback: mret oncesi oturt */
    g_isr_fired++;
}

static void uart_putu(UART_TypeDef *u, uint32_t v) {
    char b[10]; uint32_t n = 0U;
    if (v == 0U) { uart_putc(u, '0'); return; }
    while (v) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) uart_putc(u, b[n]);
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

static void run_hw(void) {
    g_isr_fired = 0U;
    uint32_t t0 = rdcycle();
    AI_ACC->CTRL = CTRL_START;
    uint32_t timeout = 2000000U;
    while ((g_isr_fired == 0U) && (timeout != 0U)) { timeout--; __asm__ volatile("nop"); }
    uint32_t t1 = rdcycle();
    if (g_isr_fired == 0U) { uart_puts(UART0, "[DEMO] FAIL: ISR gelmedi\n"); return; }
    uint32_t argmax = (g_isr_status >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK;
    uint32_t hwcyc  = t1 - t0;
    uart_puts(UART0, "[DEMO] sinif = ");
    uart_puts(UART0, (argmax < 4U) ? CLASS_NAMES[argmax] : "?");
    uart_puts(UART0, "  HW cycle = ");
    uart_putu(UART0, hwcyc);
    if (hwcyc != 0U) {
        uint32_t r10 = (SW_BASELINE_CYC * 10U) / hwcyc;   /* tek ondalik */
        uart_puts(UART0, "  hizlanma ~");
        uart_putu(UART0, r10 / 10U); uart_putc(UART0, '.');
        uart_putu(UART0, r10 % 10U); uart_puts(UART0, "x (SW taban 9.684.726)");
    }
    uart_putc(UART0, '\n');
    GPIO->ODR = (1U << argmax);       /* sinif -> LED biti */
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
    uart_puts(UART0, "[DEMO] BLG1 cercevesi bekleniyor (send_vector.py)...\n");
    static const char MAGIC[4] = {'B','L','G','1'};
    uint32_t got = 0U, b, len = 0U, sum = 0U, chk = 0U;
    while (got < 4U) {
        if (!rx_byte(&b, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (magic)\n"); return; }
        got = ((char)b == MAGIC[got]) ? got + 1U : (((char)b == MAGIC[0]) ? 1U : 0U);
    }
    if (!rx_u32(&len, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (uzunluk)\n"); return; }
    if (len == 0U || len > AI_INPUT_BYTES) { uart_puts(UART0, "[DEMO] gecersiz uzunluk\n"); return; }
    volatile uint8_t *dst = (volatile uint8_t *)(AI_SRAM_BASE + AI_INPUT_OFF);
    for (uint32_t i = 0U; i < len; i++) {
        if (!rx_byte(&b, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (veri)\n"); return; }
        dst[i] = (uint8_t)b; sum += b;
    }
    if (!rx_u32(&chk, RX_TMO)) { uart_puts(UART0, "[DEMO] RX timeout (saglama)\n"); return; }
    if (chk != sum) { uart_puts(UART0, "[DEMO] SAGLAMA HATASI - cikarim yapilmadi\n"); return; }
    uart_puts(UART0, "[DEMO] girdi dogrulandi ("); uart_putu(UART0, len);
    uart_puts(UART0, " bayt), cikarim:\n");
    run_hw();
}

static void menu(void) {
    uart_puts(UART0, "[DEMO] h=HW cikarim  v=BLG1 ile yeni girdi (send_vector.py)  r=rapor  ?=menu\n");
}

int main(void) {
    UART0->CPB = 434;                 /* 50 MHz / 115200 */
    mcycle_enable();

    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;
    (void)AI_ACC->CTRL; (void)AI_ACC->DATA_ADDR;   /* readback kollari */

    __asm__ volatile(".option push\n.option arch, +zicsr\n"
                     "li t0, 131072\ncsrs mie, t0\ncsrsi mstatus, 8\n"
                     ".option pop\n" ::: "t0");

    uart_puts(UART0, "\n[DEMO] BLogic MCU - Micro Speech canli demo (QSPI boot)\n");
    uart_puts(UART0, "[DEMO] Acilis cikarimi (flash'tan yuklenen golden girdi):\n");
    run_hw();
    menu();

    while (1) {
        char c = uart_getc(UART0);
        if      (c == 'h') run_hw();
        else if (c == 'v') load_vector_uart();
        else if (c == 'r') {
            uart_puts(UART0, "[DEMO] SW taban 9.684.726 cycle (xPack 13.2.0 -O2,"
                             " soc-perf); HW canli olcum ustte. Detay: README.\n");
        }
        else if (c == '?') menu();
    }
    return 0;
}
