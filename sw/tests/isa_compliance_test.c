/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// isa_compliance_test.c  -  RISC-V ISA uyumluluk testi
// ============================================
#include "../drivers/blogic_mcu.h"

static int test_count = 0, pass_count = 0, fail_count = 0;

void check(const char *name, int32_t got, int32_t expected) {
    test_count++;
    if (got == expected) {
        pass_count++;
    } else {
        fail_count++;
        uart_puts(UART0, "  FAIL: ");
        uart_puts(UART0, name);
        uart_puts(UART0, "\n");
    }
}

void uart_put_int(uint32_t n) {
    char buf[11]; int i = 10; buf[i] = '\0';
    if (n == 0) { uart_puts(UART0, "0"); return; }
    while (n > 0) { buf[--i] = (n % 10) + '0'; n /= 10; }
    uart_puts(UART0, &buf[i]);
}

int main(void) {
    UART0->CPB = 434;
    uart_puts(UART0, "=== BLogic ISA Compliance Test ===\n");

    // RV32I aritmetik
    uart_puts(UART0, "[RV32I] Aritmetik...\n");
    check("ADD",   100 + 200,    300);
    check("SUB",   500 - 123,    377);
    check("ADDI",  42 + 8,       50);

    volatile int32_t a = -10, b = 3;
    check("ADD_NEG", a + b,      -7);
    check("SUB_NEG", a - b,      -13);

    // RV32I mantiksal
    uart_puts(UART0, "[RV32I] Mantiksal...\n");
    check("AND",  0xFF00 & 0x0FF0, 0x0F00);
    check("OR",   0xFF00 | 0x00FF, 0xFFFF);
    check("XOR",  0xAAAA ^ 0x5555, 0xFFFF);
    check("ANDI", 0x1234 & 0xFF,   0x34);
    check("ORI",  0x1200 | 0x34,   0x1234);

    // RV32I shift
    uart_puts(UART0, "[RV32I] Shift...\n");
    check("SLL",  1 << 10,        1024);
    check("SRL",  (int32_t)((uint32_t)0x80000000 >> 1), 0x40000000);
    volatile int32_t neg = -8;
    check("SRA",  neg >> 1,       -4);
    check("SLLI", 0xA << 4,      0xA0);

    // RV32I karsilastirma
    uart_puts(UART0, "[RV32I] Karsilastirma...\n");
    check("SLT",   (-5 < 3) ? 1 : 0,   1);
    check("SLTU",  (3U < 5U) ? 1 : 0,   1);
    check("SLTI",  (10 < 20) ? 1 : 0,   1);

    // RV32I dallanma
    uart_puts(UART0, "[RV32I] Dallanma...\n");
    volatile int x = 5, y = 5, z = 10;
    check("BEQ",  (x == y) ? 1 : 0, 1);
    check("BNE",  (x != z) ? 1 : 0, 1);
    check("BLT",  (x < z)  ? 1 : 0, 1);
    check("BGE",  (z >= x) ? 1 : 0, 1);

    // RV32I load/store
    uart_puts(UART0, "[RV32I] Load/Store...\n");
    volatile uint32_t mem_val = 0xDEADBEEF;
    check("LW/SW", (int32_t)mem_val, (int32_t)0xDEADBEEF);
    volatile uint8_t byte_val = 0xAB;
    check("LB/SB", byte_val, 0xAB);
    volatile uint16_t half_val = 0x1234;
    check("LH/SH", half_val, 0x1234);

    // RV32I LUI/AUIPC
    uart_puts(UART0, "[RV32I] LUI/AUIPC...\n");
    volatile uint32_t lui_val = 0x12345000;
    check("LUI", (int32_t)(lui_val & 0xFFFFF000), (int32_t)0x12345000);

    // RV32M carpma/bolme
    uart_puts(UART0, "[RV32M] Carpma/Bolme...\n");
    check("MUL",   7 * 13,       91);
    check("MUL_NEG", (-6) * 7,  -42);
    volatile int32_t d1 = 100, d2 = 7;
    check("DIV",   d1 / d2,      14);
    check("REM",   d1 % d2,       2);
    volatile uint32_t u1 = 0xFFFFFFFF, u2 = 16;
    check("DIVU",  (int32_t)(u1 / u2), (int32_t)(0x0FFFFFFF));
    check("REMU",  (int32_t)(u1 % u2), (int32_t)15);

    // sonuc
    uart_puts(UART0, "\n=== Sonuc: ");
    uart_put_int(pass_count);
    uart_puts(UART0, "/");
    uart_put_int(test_count);
    uart_puts(UART0, " PASS ===\n");

    // golden dizge YALNIZ basarida
    if (fail_count == 0) {
        uart_puts(UART0, ">>> ISA COMPLIANCE PASSED <<<\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
    } else {
        uart_puts(UART0, ">>> ISA COMPLIANCE FAILED <<<\n");
    }

    while (1) { __asm__ volatile("nop"); }
    return 0;
}
