/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   bootloader.ld  -  bootrom yerlesim betigi
   ============================================ */
OUTPUT_FORMAT("elf32-littleriscv")
OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY {
    BOOTROM (rx) : ORIGIN = 0x00000000, LENGTH = 4K
}

SECTIONS {
    .text : {
        KEEP(*(.text.boot))
        *(.text*)
        *(.rodata*)
    } > BOOTROM
}
