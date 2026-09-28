/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
 * Ostim BLogic Mikroelektronik
 * ai_sw_reference.c - HW vs SW hizlanma olcumu
 * ============================================ */
#include "../drivers/blogic_mcu.h"
#include "../ai_model/golden_vectors/quant_params.h"

#ifdef __riscv
/* requant ara carpimi 64-bit gerektiriyor */
typedef long long int64_t;
#endif

#define AI_SRAM_BASE        0x00030000U
#define AI_INPUT_OFF        0x00000000U
#define AI_CONVOUT_OFF      0x000007A8U
#define AI_CONVW_OFF        0x000017A8U
#define AI_CONVB_OFF        0x00001BA8U
#define AI_FCW_OFF          0x00001BC8U
#define AI_FCB_OFF          0x00005A48U
#define AI_RESULT_OFF       0x00005A58U
#define AI_SW_SCRATCH_OFF   0x00006000U  /* SW conv_out karalamasi */

#define CTRL_START          (1U << 0)
#define CTRL_CLEAR_DONE     (1U << 1)
#define STATUS_DONE         (1U << 1)
#define STATUS_RESULT_SHIFT 4U
#define STATUS_RESULT_MASK  0xFU

#define EXPECTED_ARGMAX     2U   /* yes_real -> "yes" */

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

/* ondalik sayi yazici (putc/puts zaten header'da) */
static void uart_putu(UART_TypeDef *u, uint32_t v) {
    char b[10];
    uint32_t n = 0U;
    if (v == 0U) { uart_putc(u, '0'); return; }
    while (v) { b[n++] = (char)('0' + (v % 10U)); v /= 10U; }
    while (n--) uart_putc(u, b[n]);
}

static inline void mcycle_enable(void) {
    __asm__ volatile(".option push\n\t"
                     ".option arch, +zicsr\n\t"
                     "csrw 0x320, x0\n\t"      /* mcountinhibit=0 */
                     ".option pop");
}
static inline uint32_t rdcycle(void) {
    uint32_t v;
    __asm__ volatile(".option push\n\t"
                     ".option arch, +zicsr\n\t"
                     "csrr %0, 0xB00\n\t"       /* mcycle */
                     ".option pop" : "=r"(v));
    return v;
}

/* RTL ile birebir requant: (acc*M + half) >> sh, +zp, doyur */
static inline int8_t tflite_requant(int32_t acc, int32_t M, int32_t sh,
                                    int32_t zp, int relu) {
    int64_t p = (int64_t)acc * (int64_t)M + ((int64_t)1 << (sh - 1));
    int32_t b = (int32_t)(p >> sh) + zp;
    int32_t lo = relu ? zp : -128;
    if (b > 127) b = 127;
    if (b < lo)  b = lo;
    return (int8_t)b;
}

int main(void) {
    UART_TypeDef *U = UART0;
    UART0->CPB = 434U;                             /* 50 MHz / 115200 */

    const volatile int8_t  *inp =
        (const volatile int8_t *)(AI_SRAM_BASE + AI_INPUT_OFF);
    const volatile int8_t  *cw  =
        (const volatile int8_t *)(AI_SRAM_BASE + AI_CONVW_OFF);
    const volatile int32_t *cb  =
        (const volatile int32_t *)(AI_SRAM_BASE + AI_CONVB_OFF);
    const volatile int8_t  *fw  =
        (const volatile int8_t *)(AI_SRAM_BASE + AI_FCW_OFF);
    const volatile int32_t *fb  =
        (const volatile int32_t *)(AI_SRAM_BASE + AI_FCB_OFF);
    volatile int8_t        *sco =
        (volatile int8_t *)(AI_SRAM_BASE + AI_SW_SCRATCH_OFF);

    uart_puts(U, "\n[PERF] BLogic MCU - HW vs SW referans olcumu\n");
    uart_puts(U, "[PERF] Girdi: yes_real (gercek ses ozniteligi)\n");
    mcycle_enable();

    /* HW inference: START -> DONE */
    uint32_t t0 = rdcycle();
    AI_ACC->CTRL = CTRL_START;
    uint32_t st;
    do { st = AI_ACC->STATUS; } while ((st & STATUS_DONE) == 0U);
    uint32_t t1 = rdcycle();
    uint32_t hw_cyc = t1 - t0;
    uint32_t hw_arg = (st >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK;
    AI_ACC->CTRL = CTRL_CLEAR_DONE;

    uart_puts(U, "[PERF] HW argmax = ");
    uart_putu(U, hw_arg);
    uart_puts(U, " (");
    uart_puts(U, CLASS_NAMES[hw_arg & 3U]);
    uart_puts(U, "), cycle = ");
    uart_putu(U, hw_cyc);
    uart_puts(U, "\n");

    /* SW inference (RTL-birebir) */
    uint32_t t2 = rdcycle();
    for (int f = 0; f < 8; f++) {
        const volatile int8_t *wf = cw + f * 80;
        int32_t bias = cb[f];
        int32_t Mf   = M_CONV_Q31[f];
        int32_t shf  = SHIFT_CONV[f];
        for (int r = 0; r < 25; r++) {
            for (int c = 0; c < 20; c++) {
                int32_t acc = 0;
                for (int kh = 0; kh < 10; kh++) {
                    int ir = r * 2 + kh - 4;
                    if (ir < 0 || ir >= 49) continue;
                    const volatile int8_t *irow = inp + ir * 40;
                    const volatile int8_t *wrow = wf + kh * 8;
                    for (int kw = 0; kw < 8; kw++) {
                        int ic = c * 2 + kw - 3;
                        if (ic < 0 || ic >= 40) continue;
                        acc += ((int32_t)irow[ic] - (int32_t)INPUT_ZP)
                               * (int32_t)wrow[kw];
                    }
                }
                sco[(r * 20 + c) * 8 + f] =
                    tflite_requant(acc + bias, Mf, shf, CONV_OUT_ZP, 1);
            }
        }
    }
    int32_t fc[4];
    for (int o = 0; o < 4; o++) {
        int32_t acc = fb[o];
        const volatile int8_t *row = fw + o * 4000;
        for (int i = 0; i < 4000; i++) {
            acc += ((int32_t)sco[i] - (int32_t)CONV_OUT_ZP)
                   * (int32_t)row[i];
        }
        fc[o] = (int32_t)tflite_requant(acc, M_FC_Q31, SHIFT_FC,
                                        FC_OUT_ZP, 0);
    }
    uint32_t sw_arg = 0U;
    {
        int32_t best = fc[0];
        for (uint32_t i = 1U; i < 4U; i++) {
            if (fc[i] > best) { best = fc[i]; sw_arg = i; }
        }
    }
    uint32_t t3 = rdcycle();
    uint32_t sw_cyc = t3 - t2;

    uart_puts(U, "[PERF] SW argmax = ");
    uart_putu(U, sw_arg);
    uart_puts(U, " (");
    uart_puts(U, CLASS_NAMES[sw_arg & 3U]);
    uart_puts(U, "), cycle = ");
    uart_putu(U, sw_cyc);
    uart_puts(U, "\n");

    /* HW conv_out ile SW conv_out karsilastir (1000 word) */
    const volatile uint32_t *hco =
        (const volatile uint32_t *)(AI_SRAM_BASE + AI_CONVOUT_OFF);
    const volatile uint32_t *swo =
        (const volatile uint32_t *)(AI_SRAM_BASE + AI_SW_SCRATCH_OFF);
    uint32_t diff = 0U;
    for (uint32_t i = 0U; i < 1000U; i++) {
        if (hco[i] != swo[i]) diff++;
    }
    uart_puts(U, "[PERF] conv_out HW vs SW: ");
    uart_putu(U, 1000U - diff);
    uart_puts(U, "/1000 word esit\n");

    /* Tablo */
    uint32_t sp_x10 = (hw_cyc != 0U) ? (sw_cyc * 10U) / hw_cyc : 0U;
    uart_puts(U, "[PERF] speedup = ");
    uart_putu(U, sp_x10 / 10U);
    uart_putc(U, '.');
    uart_putu(U, sp_x10 % 10U);
    uart_puts(U, "x  (SW/HW cycle orani)\n");
    {
        const uint32_t fr[2] = {50000000U, 100000000U};
        const char *fn[2] = {"50", "100"};
        for (int k = 0; k < 2; k++) {
            uint32_t hinf = fr[k] / hw_cyc;
            uint32_t sinf = fr[k] / sw_cyc;
            uart_puts(U, "[PERF] @");
            uart_puts(U, fn[k]);
            uart_puts(U, " MHz: HW ");
            uart_putu(U, hinf);
            uart_puts(U, " inf/s = ");
            uart_putu(U, hinf * 1960U);
            uart_puts(U, " B/s | SW ");
            uart_putu(U, sinf);
            uart_puts(U, " inf/s = ");
            uart_putu(U, sinf * 1960U);
            uart_puts(U, " B/s\n");
        }
    }

    /* Self-check + golden */
    if (hw_arg == EXPECTED_ARGMAX && sw_arg == EXPECTED_ARGMAX
        && diff == 0U && sw_cyc > hw_cyc) {
        uart_puts(U, "[PERF] PASS - speedup > 1.0x, sonuclar birebir\n");
        uart_puts(U, "Hello World from BLogic MCU!\n");
    } else {
        uart_puts(U, "[PERF] FAIL: hw_arg=");
        uart_putu(U, hw_arg);
        uart_puts(U, " sw_arg=");
        uart_putu(U, sw_arg);
        uart_puts(U, " diff=");
        uart_putu(U, diff);
        uart_puts(U, "\n");
    }
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
