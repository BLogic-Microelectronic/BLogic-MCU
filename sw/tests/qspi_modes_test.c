/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// qspi_modes_test.c  -  QSPI mod uyum testi
// ============================================
#include "../drivers/blogic_mcu.h"

#ifndef QSPI_BASE
#define QSPI_BASE 0x40000500U
#endif
#define QSPI_FCR_REG (*(volatile uint32_t *)(QSPI_BASE + 0x10U))

static void puthex32(uint32_t v) {
    static const char hx[] = "0123456789abcdef";
    char b[9];
    for (int i = 7; i >= 0; i--) { b[i] = hx[v & 0xF]; v >>= 4; }
    b[8] = '\0';
    uart_puts(UART0, b);
}

static uint32_t qspi_rd_word(uint8_t instr, uint32_t mode,
                             uint32_t dummy, uint32_t addr) {
    QSPI->ADR = addr;
    QSPI->CCR = (uint32_t)instr | (mode << 8) | (0U << 10)
              | (dummy << 11) | (3U << 16);      // okuma, 4 bayt
    while (!(QSPI->STA & 1U)) { }                // done bekle
    QSPI->CCR = (1U << 31);                      // done temizle
    return QSPI->DR;
}

static int check(const char *name, uint32_t got, uint32_t exp) {
    uart_puts(UART0, (char *)name);
    if (got == exp) { uart_puts(UART0, " PASS\n"); return 0; }
    uart_puts(UART0, " FAIL exp="); puthex32(exp);
    uart_puts(UART0, " got=");      puthex32(got);
    uart_puts(UART0, "\n");
    return 1;
}

int main(void) {
#ifndef CPB_VAL
#define CPB_VAL 434
#endif
    UART0->CPB = CPB_VAL;
    int fail = 0;

    fail += check("T1 x1  READ  ", qspi_rd_word(0x03U, 1U, 0U, 0x000U), 0x03020100U);
    fail += check("T2 x2  DOR   ", qspi_rd_word(0x3BU, 2U, 8U, 0x010U), 0x13121110U);
    fail += check("T3 x4  QOR   ", qspi_rd_word(0x6BU, 3U, 8U, 0x020U), 0x23222120U);

    QSPI_FCR_REG = 0x4U;
    if ((QSPI_FCR_REG & 0x4U) == 0U) { uart_puts(UART0, "FAIL FCR[2] readback\n"); fail++; }
    fail += check("T4 4B  READ4B", qspi_rd_word(0x13U, 1U, 0U, 0x040U), 0x43424140U);
    // 16MB ustu adres: ust bayt telde gercekten tasiniyor mu
    fail += check("T5 4B  HI-ADDR", qspi_rd_word(0x13U, 1U, 0U, 0xA5000040U), 0x25242726U);
    QSPI_FCR_REG = 0x0U;
    // FCR[2] temizlenince 3-bayt mod geri geliyor mu
    fail += check("T6 3B  RESTORE", qspi_rd_word(0x03U, 1U, 0U, 0x030U), 0x33323130U);

    if (fail == 0) uart_puts(UART0, "QSPI MODES OK\n");
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
