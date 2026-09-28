/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// qspi_hw_debug.c  -  QSPI okuma donanim teshisi
// ============================================
#include "../drivers/blogic_mcu.h"

static void put_hex32(uint32_t v) {
    uart_puts(UART0, "0x");
    for (int i = 28; i >= 0; i -= 4)
        uart_putc(UART0, "0123456789ABCDEF"[(v >> i) & 0xF]);
}

// bootrom ile ayni okuma: READ(0x03), 4 bayt, x1
static uint32_t qspi_rd_word(uint32_t addr) {
    QSPI->ADR = addr;
    QSPI->CCR = 0x08030103;
    int to = 200000;
    while ((QSPI->STA & (1u << 1)) && --to > 0) { }   // busy bekle
    return QSPI->DR;
}

int main(void) {
    UART0->CPB = 434;
    GPIO->ODR  = 0x00FF;                 // firmware basladi
    uart_puts(UART0, "\n=== QSPI HW DEBUG ===\n");

    // flash[0]'i 4 kez oku, ilk okuma soguk-CCLK
    for (int k = 0; k < 4; k++) {
        uart_puts(UART0, "r#");
        uart_putc(UART0, (char)('0' + k));
        uart_puts(UART0, "=");
        put_hex32(qspi_rd_word(0));
        uart_puts(UART0, "\n");
    }
    // ardisik adresler
    for (uint32_t a = 0; a < 16; a += 4) {
        uart_puts(UART0, "f[");
        put_hex32(a);
        uart_puts(UART0, "]=");
        put_hex32(qspi_rd_word(a));
        uart_puts(UART0, "\n");
    }
    uart_puts(UART0, "exp f[0]=0x00012117 f[4]=0x00010113\n");

    int ok = (qspi_rd_word(0) == 0x00012117);
    uart_puts(UART0, ok ? "QSPI READ: OK\n" : "QSPI READ: FAIL\n");

    int d = ok ? 250000 : 2500000;       // OK=hizli blink, FAIL=yavas blink
    while (1) {
        GPIO->ODR = 0x00FF;
        for (volatile int i = 0; i < d; i++) { __asm__ volatile("nop"); }
        GPIO->ODR = 0x0000;
        for (volatile int i = 0; i < d; i++) { __asm__ volatile("nop"); }
    }
    return 0;
}
