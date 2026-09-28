/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

// ============================================
// Ostim BLogic Mikroelektronik
// uart_baud_sweep.c - cok-baud UART testi
// ============================================
#include "../drivers/blogic_mcu.h"

#ifndef SWEEP_CPB0
#define SWEEP_CPB0 434      /* 115200 baud @ 50 MHz */
#endif
#ifndef SWEEP_CPB1
#define SWEEP_CPB1 50       /* ~1 Mbps   @ 50 MHz */
#endif
#ifndef SWEEP_CPB2
#define SWEEP_CPB2 5208     /* 9600 baud @ 50 MHz */
#endif

// fazlar arasi kisa bekleme, hat bos kalsin
static void idle_gap(void)
{
    for (volatile int i = 0; i < 500; ++i) {
        __asm__ volatile("nop");
    }
}

static void run_phase(unsigned int cpb)
{
    UART0->CPB = cpb;
    uart_puts(UART0, "BAUD-OK\n");
    idle_gap();
}

int main(void)
{
    run_phase(SWEEP_CPB0);   // 115200
    run_phase(SWEEP_CPB1);   // ~1 Mbps
    run_phase(SWEEP_CPB2);   // 9600

    // sim kapanmasin diye sonsuz dongu
    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
