/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// monitor_main.c - kurul-senaryo monitoru (sartname 5.2/1 sigortasi)
// ============================================
// UART0 @115200 satir-tabanli komut kabugu. Amac: final gunu kurulun
// verecegi senaryolara dakikalar icinde uyum - herhangi bir cevre birimi
// yazmacini canli programla/oku, bellek dok, YZ cikarimi kostur.
//   r ADDR        : 32-bit oku
//   w ADDR VAL    : 32-bit yaz + geri-okuma
//   d ADDR N      : N word dok (en cok 64)
//   a             : AI cikarimi (irq17 + mcycle)
//   ?             : yardim
// ADDR/VAL hex ('0x' istege bagli). uart_getc bayrak-temizleyen surumdur.
#include "../drivers/blogic_mcu.h"

#define CTRL_START          (1U << 0)
#define CTRL_CLEAR_DONE     (1U << 1)
#define STATUS_RESULT_SHIFT 4U
#define STATUS_RESULT_MASK  0xFU
#define AI_SRAM_BASE        0x00030000U
#define AI_RESULT_OFF       0x00005A58U
static const char *CLASS_NAMES[4] = {"silence", "unknown", "yes", "no"};

static volatile uint32_t g_isr_fired = 0U, g_isr_status = 0U;
__attribute__((interrupt)) void ai_isr(void) {
    g_isr_status = AI_ACC->STATUS;
    AI_ACC->CTRL = CTRL_CLEAR_DONE;
    (void)AI_ACC->STATUS;
    g_isr_fired++;
}

static void putu(uint32_t v) {
    char b[10]; uint32_t n = 0U;
    if (!v) { uart_putc(UART0, '0'); return; }
    while (v) { b[n++] = (char)('0' + v % 10U); v /= 10U; }
    while (n--) uart_putc(UART0, b[n]);
}
static void puth(uint32_t v) {
    uart_puts(UART0, "0x");
    for (int i = 28; i >= 0; i -= 4)
        uart_putc(UART0, "0123456789ABCDEF"[(v >> i) & 0xFU]);
}
static inline uint32_t rd32(uint32_t a) { return *(volatile uint32_t *)a; }
static inline void wr32(uint32_t a, uint32_t v) { *(volatile uint32_t *)a = v; }

static inline uint32_t rdcycle(void) {
    uint32_t c;
    __asm__ volatile(".option push\n.option arch, +zicsr\ncsrr %0, 0xB00\n.option pop" : "=r"(c));
    return c;
}

/* satir oku (echo'lu), 79 karakter siniri */
static uint32_t getline_echo(char *buf, uint32_t max) {
    uint32_t n = 0U;
    for (;;) {
        char c = uart_getc(UART0);
        if (c == '\r' || c == '\n') { uart_putc(UART0, '\n'); buf[n] = 0; return n; }
        if ((c == 8 || c == 127) && n) { n--; uart_puts(UART0, "\b \b"); continue; }
        if (n + 1U < max && c >= ' ') { buf[n++] = c; uart_putc(UART0, c); }
    }
}
/* bosluklari atla, hex ayristir; *ok=0 -> sayi yok */
static uint32_t hexval(const char **p, uint32_t *ok) {
    const char *s = *p; uint32_t v = 0U, gor = 0U;
    while (*s == ' ') s++;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) s += 2;
    for (;; s++) {
        char c = *s;
        uint32_t d;
        if      (c >= '0' && c <= '9') d = (uint32_t)(c - '0');
        else if (c >= 'a' && c <= 'f') d = (uint32_t)(c - 'a' + 10);
        else if (c >= 'A' && c <= 'F') d = (uint32_t)(c - 'A' + 10);
        else break;
        v = (v << 4) | d; gor = 1U;
    }
    *p = s; *ok = gor; return v;
}

static void yardim(void) {
    uart_puts(UART0, "[MON] r ADDR | w ADDR VAL | d ADDR N | a (AI) | ?\n");
}

static void ai_kostur(void) {
    AI_ACC->DATA_ADDR = AI_SRAM_BASE;
    AI_ACC->OUT_ADDR  = AI_SRAM_BASE + AI_RESULT_OFF;
    g_isr_fired = 0U;
    uint32_t t0 = rdcycle();
    AI_ACC->CTRL = CTRL_START;
    uint32_t tmo = 2000000U;
    while (!g_isr_fired && tmo--) { __asm__ volatile("nop"); }
    uint32_t t1 = rdcycle();
    if (!g_isr_fired) { uart_puts(UART0, "[MON] AI: ISR gelmedi\n"); return; }
    uint32_t am = (g_isr_status >> STATUS_RESULT_SHIFT) & STATUS_RESULT_MASK;
    uart_puts(UART0, "[MON] AI sinif=");
    uart_puts(UART0, (am < 4U) ? CLASS_NAMES[am] : "?");
    uart_puts(UART0, " cycle="); putu(t1 - t0); uart_putc(UART0, '\n');
}

int main(void) {
    UART0->CPB = 434;   /* 50 MHz / 115200 */
    __asm__ volatile(".option push\n.option arch, +zicsr\n"
                     "csrw 0x320, x0\nli t0, 131072\ncsrs mie, t0\ncsrsi mstatus, 8\n"
                     ".option pop" ::: "t0");
    uart_puts(UART0, "\n[MON] BLogic MCU kurul-senaryo monitoru hazir\n");
    yardim();
    char satir[80];
    for (;;) {
        uart_puts(UART0, "> ");
        getline_echo(satir, sizeof satir);
        const char *p = satir + 1; uint32_t ok, a, v, n;
        switch (satir[0]) {
        case 'r':
            a = hexval(&p, &ok);
            if (!ok) { yardim(); break; }
            uart_puts(UART0, "[MON] "); puth(a); uart_puts(UART0, " = ");
            puth(rd32(a)); uart_putc(UART0, '\n');
            break;
        case 'w':
            a = hexval(&p, &ok); v = ok ? hexval(&p, &ok) : 0U;
            if (!ok) { yardim(); break; }
            wr32(a, v);
            uart_puts(UART0, "[MON] yazildi; geri-okuma "); puth(a);
            uart_puts(UART0, " = "); puth(rd32(a)); uart_putc(UART0, '\n');
            break;
        case 'd':
            a = hexval(&p, &ok); n = ok ? hexval(&p, &ok) : 0U;
            if (!ok) { yardim(); break; }
            if (n > 64U) n = 64U;
            for (uint32_t i = 0U; i < n; i++) {
                if ((i & 3U) == 0U) { puth(a + 4U * i); uart_puts(UART0, ": "); }
                puth(rd32(a + 4U * i));
                uart_putc(UART0, ((i & 3U) == 3U || i + 1U == n) ? '\n' : ' ');
            }
            break;
        case 'a': ai_kostur(); break;
        default:  yardim(); break;
        }
    }
    return 0;
}
