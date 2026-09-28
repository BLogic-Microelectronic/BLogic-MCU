/*
 * SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
 * SPDX-License-Identifier: GPL-3.0-only
 * Licensed under the GNU General Public License version 3 only.
 * See the LICENSE file in the repository root for the full license text.
 */

/* ============================================
   Ostim BLogic Mikroelektronik
   link_flash.ld - QSPI flash-boot icin linker betigi
   ============================================
   link.ld'den TEK farki: .rodata da INST_RAM'e konur.

   Neden: flash-boot'ta bootrom yalnizca flash 0x0'dan
   INST_RAM'e (0x10000) kopyalar. DATA_RAM (0x20000)
   bitstream'in BRAM init'inden gelir; data_mem.hex
   gomulu degilse orasi SIFIRDIR ve tum string sabitleri
   bos gorunur - UART hicbir sey basmaz.

   .rodata'yi .text'in arkasina koyunca acilis imaji tek
   parca olur ve bootrom'un tek kopyalamasi yeter.

   .data / .bss DATA_RAM'de kalir (calisma zamani yazilir).
   Bu betikle linklenen firmware'de .data BOS olmalidir -
   aksi halde ilk degerleri karta ulasmaz.
   ============================================ */

OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
    INST_RAM (rx)  : ORIGIN = 0x00010000, LENGTH = 8K
    DATA_RAM (rwx) : ORIGIN = 0x00020000, LENGTH = 8K
}

SECTIONS
{
    .text : {
        *(.text.init)    /* en basta olmali */
        *(.text*)
    } > INST_RAM

    /* salt okunur veriler - flash-boot icin INST_RAM'de */
    .rodata : ALIGN(4) {
        *(.rodata*)
        /* GCC kucuk salt-okunur nesneleri .srodata'ya koyar (gp-goreli).
           Toplanmazsa yuklenmez ve degisken indisli okuma 0 dondurur. */
        *(.srodata*)
    } > INST_RAM

    /* baslangic degeri olan globaller */
    .data : {
        _data_start = .;
        *(.data*)
        *(.sdata*)
        _data_end = .;
    } > DATA_RAM

    /* sifirlanmasi gereken degiskenler */
    .bss : {
        _bss_start = .;
        *(.bss*)
        *(.sbss*)
        *(COMMON)
        _bss_end = .;
    } > DATA_RAM

    /* stack en ustten asagi buyur */
    _stack_top = ORIGIN(DATA_RAM) + LENGTH(DATA_RAM);
}
