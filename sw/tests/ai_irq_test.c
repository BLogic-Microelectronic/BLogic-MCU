/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// ai_irq_test.c  -  AI hizlandirici kesme/ISR testi
// ============================================
#include "../drivers/blogic_mcu.h"

// AI SRAM yerlesimi (ai_accelerator.sv ile ayni)
#define AI_SRAM_BASE        0x00030000U
#define AI_INPUT_OFF        0x00000000U
#define AI_RESULT_OFF       0x00005A58U

// AI accelerator CSR bit alanlari
#define CTRL_START          (1U << 0)
#define CTRL_CLEAR_DONE     (1U << 1)
#define STATUS_DONE         (1U << 1)
#define STATUS_RESULT_SHIFT 4U
#define STATUS_RESULT_MASK  0xFU

#define EXPECTED_ARGMAX     2U   // "yes"

static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

// bayraklari yalniz ISR yazar
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

// irq17 ISR. level irq, mret oncesi kaynak temizlenmeli.
__attribute__((interrupt)) void ai_isr(void) {
    uint32_t st = AI_ACC->STATUS;
    g_isr_status = st;

    // sonuc ISR icinde UART'a yazilir
    uart_puts(UART0, "[ISR] ai_irq received, STATUS=");
    uart_puth(UART0, st);
    uart_puts(UART0, " argmax=");
    uart_putu(UART0, (st >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK);
    uart_puts(UART0, "\n");

    AI_ACC->CTRL = CTRL_CLEAR_DONE;   // level irq kaynagini dusur
    (void)AI_ACC->STATUS;             // readback: yazmayi mret oncesi oturt
    g_isr_fired++;
}

int main(void) {
    UART0->CPB = 434;

    uart_puts(UART0, "\n[AI-IRQ] BLogic MCU - Micro Speech (interrupt/ISR flow)\n");
    uart_puts(UART0, "[AI-IRQ] Input: yes_real; DONE -> irq17 -> ISR -> UART\n");

    AI_ACC->DATA_ADDR = AI_SRAM_BASE + AI_INPUT_OFF;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;
    (void)AI_ACC->CTRL;        // CTRL okuma kolu (0 okunur)
    (void)AI_ACC->DATA_ADDR;   // DATA_ADDR readback kolu

    // mie[17] + mstatus.MIE; binutils>=2.38 icin zicsr sarmasi sart
    __asm__ volatile(
        ".option push\n"
        ".option arch, +zicsr\n"
        "li   t0, 131072\n"          /* 1 << 17 */
        "csrs mie, t0\n"
        "csrsi mstatus, 8\n"         /* MIE */
        ".option pop\n"
        ::: "t0");

    uart_puts(UART0, "[AI-IRQ] CTRL.START written, core waits for the ISR\n");
    AI_ACC->CTRL = CTRL_START;

    // Bekleme hali: cekirdek wfi ile uyur, irq17 uyandirir. Cihaz degil,
    // ISR bayragi bekleniyor. Yaris korumasi: bayrak kontrolu ile wfi arasinda
    // ISR calisip kaynagi temizlerse wfi sonsuza uyur. Bu yuzden kontrol ve wfi
    // mstatus.MIE=0 iken yapilir; wfi, mie[17] acik ve kesme bekliyorken
    // MIE'den bagimsiz uyanir (priv spec 3.3.3), sonra MIE kisa acilip ISR alinir.
    // Kesme hic gelmezse cekirdek uyur ve TB'nin MAX_CYCLES butcesi testi
    // FAIL'e dusurur (golden yazilmaz).
    uint32_t timeout = 2000000U;   // wfi uyanma sayisi siniri (sahte uyanmalara karsi)
    __asm__ volatile(".option push\n.option arch, +zicsr\ncsrci mstatus, 8\n.option pop\n");
    while ((g_isr_fired == 0U) && (timeout != 0U)) {
        timeout--;
        __asm__ volatile("wfi");
        __asm__ volatile(".option push\n.option arch, +zicsr\n"
                         "csrsi mstatus, 8\nnop\ncsrci mstatus, 8\n.option pop\n");
    }
    __asm__ volatile(".option push\n.option arch, +zicsr\ncsrsi mstatus, 8\n.option pop\n");

    uint32_t ok = 1U;
    if (g_isr_fired == 0U) {
        uart_puts(UART0, "[AI-IRQ] FAIL: timeout, the ISR never ran\n");
        ok = 0U;
    } else {
        uint32_t argmax = (g_isr_status >> STATUS_RESULT_SHIFT)
                          & STATUS_RESULT_MASK;
        uart_puts(UART0, "[AI-IRQ] ISR call count = ");
        uart_putu(UART0, g_isr_fired);
        uart_puts(UART0, "\n");
        if (g_isr_fired != 1U) {
            uart_puts(UART0, "[AI-IRQ] FAIL: more than one ISR call (clear path?)\n");
            ok = 0U;
        }
        if (argmax != EXPECTED_ARGMAX) {
            uart_puts(UART0, "[AI-IRQ] FAIL: argmax is not the expected class\n");
            ok = 0U;
        } else {
            uart_puts(UART0, "[AI-IRQ] argmax = 2 (");
            uart_puts(UART0, CLASS_NAMES[argmax]);
            uart_puts(UART0, ") - correct\n");
        }
        uint32_t st_now = AI_ACC->STATUS;
        if ((st_now & STATUS_DONE) != 0U) {
            uart_puts(UART0, "[AI-IRQ] FAIL: DONE was not cleared\n");
            ok = 0U;
        } else {
            uart_puts(UART0, "[AI-IRQ] DONE cleared, STATUS=");
            uart_puth(UART0, st_now);
            uart_puts(UART0, "\n");
        }
    }

    if (ok != 0U) {
        uart_puts(UART0, "[AI-IRQ] PASS\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");  // golden
    } else {
        uart_puts(UART0, "[AI-IRQ] FAIL\n");  // golden yok -> FAIL
    }
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
