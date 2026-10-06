/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// uart_add_test.c  -  UART toplama testi
// ============================================
#include "../drivers/blogic_mcu.h"

// sayiyi ASCII'ye cevirir
void uart_put_int(uint32_t num) {
    char buf[11];
    int i = 10;
    buf[i] = '\0';
    
    if (num == 0) {
        uart_puts(UART0, "0");
        return;
    }
    
    while (num > 0 && i > 0) {
        i--;
        buf[i] = (num % 10) + '0';
        num /= 10;
    }
    uart_puts(UART0, &buf[i]);
}

int main(void) {
    // UART0 115200 baud
    UART0->CPB = 434;
    
    // test verileri
    int sayi1 = 584;
    int sayi2 = 268;
    int toplam = sayi1 + sayi2;
    
    // sonuclari UART'a bas
    uart_puts(UART0, "[MCU] Starting the addition...\n");
    uart_puts(UART0, "Denklem: ");
    uart_put_int(sayi1);
    uart_puts(UART0, " + ");
    uart_put_int(sayi2);
    uart_puts(UART0, " = ");
    uart_put_int(toplam);
    uart_puts(UART0, "\n");
    
    // Kendi kendini kontrol: sonuc yanlissa golden dizge BASILMAZ
    if (toplam == (sayi1 + sayi2)) {
        uart_puts(UART0, "[ADD] PASS\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
    } else {
        uart_puts(UART0, "[ADD] FAIL: wrong sum\n");
    }

    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
