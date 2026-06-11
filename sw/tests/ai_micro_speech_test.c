/*
 * sw/tests/ai_micro_speech_test.c
 * ================================================================
 * Adim 2.2: AI hizlandirici SoC seviyesi self-checking testi (polling).
 *
 * AI SRAM (`i_ai_sram` INIT_FILE="ai_sram_init.hex") onceden yuklenmis:
 *   - INPUT  @ 0x30000  = "yes_real" senaryosu: gercek 1 sn WAV
 *     kaynakli onislenmis oznitelik (EK-3; generate_ai_sram_init.py)
 *   - CONV_W/BIAS, FC_W/BIAS dogru offsetlerde
 *   Beklenen argmax = 2 (yes)
 *
 * Akis:
 *   1) UART_0 baud (CPB=434 = clk/baud, EK-2; prescale=434>>3=54 -> 115200 @ 50MHz)
 *   2) Banner + STATUS sanity check
 *   3) DATA_ADDR/OUT_ADDR CSR yaz (default zaten dogru, MMIO yaz yolunu test)
 *   4) CTRL.START (bit 0)
 *   5) STATUS.DONE (bit 1) bekle, polling + timeout
 *   6) argmax = STATUS[7:4], sinif adini yaz
 *   7) AI_SRAM[OUT_ADDR] da ayrica oku (consistency check)
 *   8) Self-checking PASS/FAIL ([AI] PASS / [AI] FAIL) yaz
 *   9) "Hello World..." bas - TB golden_string match -> sim erken biter
 *  10) Sonsuz nop dongusu
 *
 * Sim sonrasi gerçek karar:
 *   grep "\[AI\]" logs/sim/ai_micro_speech_test/uart.log
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
#define STATUS_BUSY         (1U << 0)
#define STATUS_DONE         (1U << 1)
#define STATUS_RESULT_SHIFT 4U
#define STATUS_RESULT_MASK  0xFU

/* TFLite Micro Speech standart sinif sirasi (labels_softmax) */
#define EXPECTED_ARGMAX     2U   /* "yes" */

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};


/* --------------------------------------------------------------
 * Yardimcilar — bare-metal printf yerine elle hex/dec
 * -------------------------------------------------------------- */
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


/* --------------------------------------------------------------
 * main
 * -------------------------------------------------------------- */
int main(void) {
    /* 1) UART0 baud */
    UART0->CPB = 434;

    /* 2) Banner */
    uart_puts(UART0, "\n[AI] BLogic MCU - Micro Speech Test (polling)\n");
    uart_puts(UART0, "[AI] Senaryo: yes_real (gercek ses ozniteligi, beklenen argmax=2)\n");

    /* 2b) STATUS pre-start sanity (BUSY=0, DONE=0 beklenir) */
    uint32_t st0 = AI_ACC->STATUS;
    uart_puts(UART0, "[AI] STATUS pre-start = ");
    uart_puth(UART0, st0);
    uart_puts(UART0, "\n");

    /* 3) CSR'lar (default'lar zaten dogru ama MMIO yaz yolunu da test et) */
    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;
    uart_puts(UART0, "[DBG] OUT_ADDR CSR readback = ");
    uart_puth(UART0, AI_ACC->OUT_ADDR);
    uart_puts(UART0, "\n");

    /* 4) START */
    uart_puts(UART0, "[AI] CTRL.START yaziliyor...\n");
    /* Sentinel: AI master gercekten yaziyor mu? */
    volatile uint32_t *sentinel = (volatile uint32_t *)(AI_SRAM_BASE + AI_RESULT_OFF);
    *sentinel = 0xDEADBEEF;
    uart_puts(UART0, "[DBG] sentinel write 0xDEADBEEF -> 0x35A58\n");
    uart_puts(UART0, "[DBG] sentinel readback (before AI) = ");
    uart_puth(UART0, *sentinel);
    uart_puts(UART0, "\n");

    AI_ACC->CTRL = CTRL_START;

    /* 5) DONE'i polla (timeout korumali) */
    uint32_t st        = 0U;
    uint32_t timeout   = 500000U;
    uint32_t poll_iter = 0U;
    do {
        st = AI_ACC->STATUS;
        timeout--;
        poll_iter++;
    } while (((st & STATUS_DONE) == 0U) && (timeout != 0U));

    if (timeout == 0U) {
        uart_puts(UART0, "[AI] FAIL: TIMEOUT - DONE bit gelmedi\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
        while (1) { __asm__ volatile("nop"); }
    }

    /* 6) argmax */
    uint32_t argmax = (st >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK;

    uart_puts(UART0, "[AI] STATUS post-done = ");
    uart_puth(UART0, st);
    uart_puts(UART0, "  argmax=");
    uart_putu(UART0, argmax);
    uart_puts(UART0, " (");
    uart_puts(UART0, (argmax < 4U) ? CLASS_NAMES[argmax] : "INVALID");
    uart_puts(UART0, ")\n");

    uart_puts(UART0, "[AI] poll_iters=");
    uart_putu(UART0, poll_iter);
    uart_puts(UART0, "\n");

    /* 7) AI_SRAM'deki RESULT word'u da oku (consistency check) */
        /* AI master conv_out yazimi calisti mi? */
        volatile uint32_t *conv0 = (volatile uint32_t *)(AI_SRAM_BASE + 0x07A8);
        uart_puts(UART0, "[DBG] conv_out[0..3] = ");
        for (int i = 0; i < 4; i++) { uart_puth(UART0, conv0[i]); uart_puts(UART0, " "); }
        uart_puts(UART0, "\n");

        for (uint32_t off = 0x5A50; off <= 0x5A60; off += 4) {
            volatile uint32_t *p = (volatile uint32_t *)(AI_SRAM_BASE + off);
            uart_puts(UART0, "[DBG] mem[0x");
            uart_puth(UART0, AI_SRAM_BASE + off);
            uart_puts(UART0, "] = ");
            uart_puth(UART0, *p);
            uart_puts(UART0, "\n");
        }
    volatile uint32_t *result_ptr = (volatile uint32_t *)(AI_SRAM_BASE + AI_RESULT_OFF);
    uint32_t result_word = *result_ptr;
    uart_puts(UART0, "[AI] mem[OUT_ADDR] = ");
    uart_puth(UART0, result_word);
    uart_puts(UART0, "\n");

    /* 8) Self-checking karar */
    if ((argmax == EXPECTED_ARGMAX) && ((result_word & 0xFU) == EXPECTED_ARGMAX)) {
        uart_puts(UART0, "[AI] PASS\n");
    } else {
        uart_puts(UART0, "[AI] FAIL: beklenen=");
        uart_putu(UART0, EXPECTED_ARGMAX);
        uart_puts(UART0, ", STATUS argmax=");
        uart_putu(UART0, argmax);
        uart_puts(UART0, ", mem[OUT]&0xF=");
        uart_putu(UART0, result_word & 0xFU);
        uart_puts(UART0, "\n");
    }

    /* DONE bayragini temizle (siradaki inference'a hazirlik) */
    AI_ACC->CTRL = CTRL_CLEAR_DONE;

    /* 9) TB golden_string match -> sim 10M cycle timeout'a takilmasin */
    uart_puts(UART0, "Hello World from BLogic MCU!\n");

    /* 10) Sonsuz dongu */
    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
