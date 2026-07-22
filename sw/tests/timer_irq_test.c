// ============================================
// Ostim BLogic Mikroelektronik
// timer_irq_test.c  -  Timer cevre birimi testi
// sayma / auto-reload / prescale / up-down mod / irq16 ISR akisi
// ============================================
#include "../drivers/blogic_mcu.h"

// bayraklari yalniz ISR yazar
static volatile uint32_t g_tim_fired = 0U;
static volatile uint32_t g_tim_evn   = 0U;

static void uart_putu(UART_TypeDef *u, uint32_t v) {
    char b[12];
    int  n = 0;
    if (v == 0U) { uart_putc(u, '0'); return; }
    while (v != 0U) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) uart_putc(u, b[n]);
}

// irq16 ISR. level irq (EVN != 0), mret oncesi EVC ile kaynak dusurulmeli.
__attribute__((interrupt)) void timer_isr(void) {
    g_tim_evn  = TIMER->EVN;
    TIMER->ENA = 0U;          // yeni event uretimini durdur
    TIMER->EVC = 1U;          // level irq kaynagini dusur
    (void)TIMER->EVN;         // readback: yazmayi mret oncesi oturt
    g_tim_fired++;
}

// EVN >= hedef olana kadar bekle; 0 = timeout
static uint32_t wait_evn(uint32_t hedef) {
    uint32_t timeout = 200000U;
    while ((TIMER->EVN < hedef) && (timeout != 0U)) { timeout--; }
    return timeout;
}

int main(void) {
    UART0->CPB = 434;
    uint32_t ok = 1U;

    uart_puts(UART0, "\n[TIMER] BLogic MCU - timer testi\n");

    // ---- Faz 1: yukari mod, PRE=0, ARE=9 -> reload x2 + readback'ler ----
    TIMER->ENA = 0U;
    TIMER->PRE = 0U;
    TIMER->ARE = 9U;
    TIMER->MOD = 1U;    // yukari
    TIMER->CNT = 0xDEADBEEFU;   // RO: yazma yok sayilmali (decoder default kolu)
    TIMER->CLR = 1U;
    TIMER->ENA = 1U;
    if (wait_evn(2U) == 0U) { uart_puts(UART0, "[TIMER] FAIL: faz1 timeout\n"); ok = 0U; }
    else                    { uart_puts(UART0, "[TIMER] faz1: up mod, 2x reload - tamam\n"); }
    (void)TIMER->CNT;                       // RO sayac okuma yolu
    if (TIMER->PRE != 0U)  { uart_puts(UART0, "[TIMER] FAIL: PRE readback\n"); ok = 0U; }
    if (TIMER->ARE != 9U)  { uart_puts(UART0, "[TIMER] FAIL: ARE readback\n"); ok = 0U; }
    if (TIMER->MOD != 1U)  { uart_puts(UART0, "[TIMER] FAIL: MOD readback\n"); ok = 0U; }
    if (TIMER->ENA != 1U)  { uart_puts(UART0, "[TIMER] FAIL: ENA readback\n"); ok = 0U; }
    if (TIMER->CLR != 0U)  { uart_puts(UART0, "[TIMER] FAIL: CLR 0 okunmali\n"); ok = 0U; }
    if (TIMER->EVC != 0U)  { uart_puts(UART0, "[TIMER] FAIL: EVC 0 okunmali\n"); ok = 0U; }
    TIMER->ENA = 0U;
    TIMER->EVC = 1U;                        // event clear yolu
    if (TIMER->EVN != 0U)  { uart_puts(UART0, "[TIMER] FAIL: EVC sonrasi EVN != 0\n"); ok = 0U; }

    // ---- Faz 2: prescale PRE=4 (5 cevrimde 1 tik) ----
    TIMER->PRE = 4U;
    TIMER->ARE = 3U;
    TIMER->CLR = 1U;
    TIMER->ENA = 1U;
    if (wait_evn(1U) == 0U) { uart_puts(UART0, "[TIMER] FAIL: faz2 timeout\n"); ok = 0U; }
    else                    { uart_puts(UART0, "[TIMER] faz2: prescale=4 - tamam\n"); }
    TIMER->ENA = 0U;
    TIMER->EVC = 1U;

    // ---- Faz 3: asagi mod (0 -> FFFFFFFF -> ARE'de reload) ----
    TIMER->PRE = 0U;
    TIMER->MOD = 0U;    // asagi
    TIMER->ARE = 0xFFFFFFFFU;
    TIMER->CLR = 1U;
    TIMER->ENA = 1U;
    if (wait_evn(1U) == 0U) { uart_puts(UART0, "[TIMER] FAIL: faz3 timeout\n"); ok = 0U; }
    else                    { uart_puts(UART0, "[TIMER] faz3: down mod wrap - tamam\n"); }
    TIMER->ENA = 0U;
    TIMER->EVC = 1U;
    TIMER->MOD = 1U;

    // ---- Faz 4: irq16 kesme akisi ----
    // mie[16] + mstatus.MIE; binutils>=2.38 icin zicsr sarmasi sart
    __asm__ volatile(
        ".option push\n"
        ".option arch, +zicsr\n"
        "li   t0, 65536\n"           /* 1 << 16 */
        "csrs mie, t0\n"
        "csrsi mstatus, 8\n"         /* MIE */
        ".option pop\n"
        ::: "t0");
    TIMER->PRE = 0U;
    TIMER->ARE = 19U;
    TIMER->CLR = 1U;
    TIMER->ENA = 1U;
    uint32_t timeout = 2000000U;
    while ((g_tim_fired == 0U) && (timeout != 0U)) {
        timeout--;
        __asm__ volatile("nop");
    }
    if (g_tim_fired == 0U) {
        uart_puts(UART0, "[TIMER] FAIL: faz4 timeout - ISR hic calismadi\n");
        ok = 0U;
    } else {
        uart_puts(UART0, "[TIMER] faz4: ISR calisma sayisi = ");
        uart_putu(UART0, g_tim_fired);
        uart_puts(UART0, ", ISR'de EVN = ");
        uart_putu(UART0, g_tim_evn);
        uart_puts(UART0, "\n");
        if (g_tim_fired != 1U) { uart_puts(UART0, "[TIMER] FAIL: birden fazla ISR (EVC yolu?)\n"); ok = 0U; }
        if (g_tim_evn == 0U)   { uart_puts(UART0, "[TIMER] FAIL: ISR'de EVN 0 okundu\n");          ok = 0U; }
        if (TIMER->EVN != 0U)  { uart_puts(UART0, "[TIMER] FAIL: kesme sonrasi EVN != 0\n");       ok = 0U; }
    }

    if (ok != 0U) {
        uart_puts(UART0, "[TIMER] PASS\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");  // golden
    } else {
        uart_puts(UART0, "[TIMER] FAIL\n");  // golden yok -> FAIL
    }
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
