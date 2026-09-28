/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   link.ld  -  RISC-V test bellek yerlesimi
   ============================================ */
OUTPUT_ARCH("riscv")
ENTRY(rvtest_entry_point)
MEMORY {
    INST_RAM (rx)  : ORIGIN = 0x00010000, LENGTH = 960K  /* fetch penceresi; veri ile cakisma yok (Harvard-ayrik) */
    DATA_RAM (rwx) : ORIGIN = 0x00400000, LENGTH = 64K
}
SECTIONS {
    . = ORIGIN(INST_RAM);
    .text.init : { KEEP(*(.text.init)) } > INST_RAM
    .text      : { *(.text .text.*) } > INST_RAM

    . = ORIGIN(DATA_RAM);
    .rodata    : { *(.rodata .rodata.*) *(.srodata .srodata.*) } > DATA_RAM
    .data      : { *(.data .data.*) *(.sdata .sdata.*) } > DATA_RAM
    .bss (NOLOAD) : { *(.bss .bss.*) *(.sbss .sbss.*) *(COMMON) } > DATA_RAM
    .tohost ALIGN(64) : { *(.tohost) } > DATA_RAM
    _stack_top = ORIGIN(DATA_RAM) + LENGTH(DATA_RAM);
}
