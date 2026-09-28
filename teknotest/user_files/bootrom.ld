/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   bootrom.ld  -  boot ROM linker betigi
   ============================================ */
OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
  BOOTROM (rx)  : ORIGIN = 0x00010000, LENGTH = 1K
  RAM     (rwx) : ORIGIN = 0x00020000, LENGTH = 8K
}

SECTIONS
{
  .text :
  {
    . = ALIGN(4);
    KEEP(*(.init))
    KEEP(*(.text.start))
    *(.text*)
    *(.rodata*)
    . = ALIGN(4);
  } > BOOTROM

  .data :
  {
    . = ALIGN(4);
    __data_start = .;
    *(.data*)
    . = ALIGN(4);
    __data_end = .;
  } > RAM AT > BOOTROM

  __data_load_start = LOADADDR(.data);

  .bss (NOLOAD) :
  {
    . = ALIGN(4);
    __bss_start = .;
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    __bss_end = .;
  } > RAM

  .stack (NOLOAD) :
  {
    . = ALIGN(16);
    __stack_top = ORIGIN(RAM) + LENGTH(RAM);
  } > RAM
}