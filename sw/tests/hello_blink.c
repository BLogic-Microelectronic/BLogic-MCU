/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   hello_blink.c - LED blink + UART boot testi
   ============================================ */
#include "../drivers/blogic_mcu.h"

int main(void) {
    UART0->CPB = 434;                 /* 50MHz / 115200 */

    while (1) {
        GPIO->ODR = 0x00FF;           /* LED[7:0] YAK */
        uart_puts(UART0, "Hello World from BLogic MCU!\n");
        for (volatile int i = 0; i < 1500000; i++) { __asm__ volatile("nop"); }

        GPIO->ODR = 0x0000;           /* LED[7:0] SONDUR */
        for (volatile int i = 0; i < 1500000; i++) { __asm__ volatile("nop"); }
    }
    return 0;
}
