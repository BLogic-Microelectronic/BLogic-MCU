/*
 * sw/tests/ai_irq_test.c
 * ================================================================
 * A10: AI hizlandirici KESME (ISR) akisi testi - sartname istemi:
 * "cikarim tamamlaninca SoC cekirdegi kesme ile bilgilendirilir;
 *  cekirdek ISR yurutup sonucu UART'tan yazar."
 *
 * Donanim yolu : ai_accelerator.irq_o = status_done (LEVEL)
 *                -> soc_top irq_vector[17] -> CV32E40P irq_i[17]
 * Yazilim yolu : crt0.S vektor tablosu slot 17 -> ai_isr (bu dosya)
 *
 * Akis:
 *   1) UART0 baud (CPB=434)
 *   2) Banner; DATA_ADDR/OUT_ADDR CSR yaz
 *   3) mie[17] + mstatus.MIE ac (zicsr sarmali asm)
 *   4) CTRL.START yaz; cihaz POLL EDILMEZ
 *   5) ISR: STATUS oku -> argmax'i UART'a yaz -> CTRL_CLEAR_DONE
 *      (level irq kaynakta dusurulur) -> bayrak
 *   6) main yalniz ISR bayragini bekler (timeout korumali)
 *   7) Dogrulamalar: ISR tam 1 kez, argmax==2 (yes), DONE temiz
 *   8) PASS ise golden string -> sim erken biter, result=PASS;
 *      FAIL'de golden BASILMAZ -> result=FAIL (maskeleme yok)
 *
 * Sim sonrasi: grep "\[AI-IRQ\]\|\[ISR\]" logs/sim/ai_irq_test/uart.log
 * ================================================================
 */
#include "../drivers/blogic_mcu.h"

/* AI SRAM yerlesimi (ai_accelerator.sv sabitleriyle ayni) */
#define AI_SRAM_BASE        0x00030000U
#define AI_INPUT_OFF        0x00000000U
#define AI_RESULT_OFF       0x00005A58U

/* AI accelerator CSR bit alanlari */
#define CTRL_START          (1U << 0)
#define CTRL_CLEAR_DONE     (1U << 1)
#define STATUS_DONE         (1U << 1)
#define STATUS_RESULT_SHIFT 4U
#define STATUS_RESULT_MASK  0xFU

#define EXPECTED_ARGMAX     2U   /* "yes" */

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

/* ISR <-> main haberlesmesi: bayraklari YALNIZ ISR yazar */
static volatile uint32_t g_isr_fired  = 0U;
static volatile uint32_t g_isr_status = 0U;

static void uart_putu(UART_TypeDef *u, uint32_t v) {
    char b[12];
    int  n = 0;
    if (v == 0U) { uart_putc(u, '0'); return; }
    while (v != 0U) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) uart_putc(u, b[n]);
}

static void uart_puth(UART_TypeDef *u, uint32_t v) {
    uart_puts(u, "0x");
    for (int i = 28; i >= 0; i -= 4) {
        uart_putc(u, "0123456789ABCDEF"[(v >> i) & 0xFU]);
    }
}

/* ----------------------------------------------------------------
 * irq17 ISR - crt0 vektor tablosundan dallanilir.
 * irq_o LEVEL oldugu icin mret'ten ONCE kaynak temizlenmek zorunda;
 * trap suresince mstatus.MIE donanimca kapali, ic ice girme olmaz.
 * ---------------------------------------------------------------- */
__attribute__((interrupt)) void ai_isr(void) {
    uint32_t st = AI_ACC->STATUS;
    g_isr_status = st;

    /* Sartname: sonuc ISR icinde UART'tan yazilir */
    uart_puts(UART0, "[ISR] ai_irq alindi, STATUS=");
    uart_puth(UART0, st);
    uart_puts(UART0, " argmax=");
    uart_putu(UART0, (st >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK);
    uart_puts(UART0, "\n");

    AI_ACC->CTRL = CTRL_CLEAR_DONE;   /* level irq kaynagini dusur */
    (void)AI_ACC->STATUS;             /* readback: posted yazmayi mret oncesi CSR'a oturt */
    g_isr_fired++;
}

int main(void) {
    UART0->CPB = 434;

    uart_puts(UART0, "\n[AI-IRQ] BLogic MCU - Micro Speech (kesme/ISR akisi)\n");
    uart_puts(UART0, "[AI-IRQ] Senaryo: yes_real; DONE -> irq17 -> ISR -> UART\n");

    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;

    /* mie[17] + mstatus.MIE: binutils>=2.38 icin zicsr sarmasi sart */
    __asm__ volatile(
        ".option push\n"
        ".option arch, +zicsr\n"
        "li   t0, 131072\n"          /* 1 << 17 */
        "csrs mie, t0\n"
        "csrsi mstatus, 8\n"         /* MIE */
        ".option pop\n"
        ::: "t0");

    uart_puts(UART0, "[AI-IRQ] CTRL.START yazildi, cekirdek ISR bekliyor\n");
    AI_ACC->CTRL = CTRL_START;

    /* Cihaz degil, ISR bayragi bekleniyor (kesme kaniti budur) */
    uint32_t timeout = 2000000U;
    while ((g_isr_fired == 0U) && (timeout != 0U)) {
        timeout--;
        __asm__ volatile("nop");
    }

    uint32_t ok = 1U;
    if (g_isr_fired == 0U) {
        uart_puts(UART0, "[AI-IRQ] FAIL: timeout - ISR hic calismadi\n");
        ok = 0U;
    } else {
        uint32_t argmax = (g_isr_status >> STATUS_RESULT_SHIFT)
                          & STATUS_RESULT_MASK;
        uart_puts(UART0, "[AI-IRQ] ISR calisma sayisi = ");
        uart_putu(UART0, g_isr_fired);
        uart_puts(UART0, "\n");
        if (g_isr_fired != 1U) {
            uart_puts(UART0, "[AI-IRQ] FAIL: birden fazla ISR (clear yolu?)\n");
            ok = 0U;
        }
        if (argmax != EXPECTED_ARGMAX) {
            uart_puts(UART0, "[AI-IRQ] FAIL: argmax beklenen degil\n");
            ok = 0U;
        } else {
            uart_puts(UART0, "[AI-IRQ] argmax = 2 (");
            uart_puts(UART0, CLASS_NAMES[argmax]);
            uart_puts(UART0, ") - dogru\n");
        }
        uint32_t st_now = AI_ACC->STATUS;
        if ((st_now & STATUS_DONE) != 0U) {
            uart_puts(UART0, "[AI-IRQ] FAIL: DONE temizlenmemis\n");
            ok = 0U;
        } else {
            uart_puts(UART0, "[AI-IRQ] DONE temizlendi, STATUS=");
            uart_puth(UART0, st_now);
            uart_puts(UART0, "\n");
        }
    }

    if (ok != 0U) {
        uart_puts(UART0, "[AI-IRQ] PASS\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");  /* golden */
    } else {
        uart_puts(UART0, "[AI-IRQ] FAIL\n");  /* golden yok -> result=FAIL */
    }
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
