/* BLogic MCU - Linker Script
 * Memory map'e göre bölümlerin yerleşimi.
 *
 * FIX: .rodata DATA_RAM'e taşındı.
 * Sebep: Data portu Instruction SRAM'e erişemiyor,
 * string sabitleri Data SRAM'de olmalı.
 */

OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
    INST_RAM (rx)  : ORIGIN = 0x00010000, LENGTH = 8K
    DATA_RAM (rwx) : ORIGIN = 0x00020000, LENGTH = 8K
}

SECTIONS
{
    /* === KOD BÖLÜMÜ (Instruction SRAM) === */
    .text : {
        *(.text.init)    /* crt0.S başlangıç kodu - en başta olmalı */
        *(.text*)        /* Diğer tüm fonksiyonlar */
    } > INST_RAM

    /* === VERİ BÖLÜMLERİ (Data SRAM) === */

    /* Salt okunur veriler (string sabitleri vb.) */
    .rodata : {
        *(.rodata*)
    } > DATA_RAM

    /* Başlangıç değeri olan global değişkenler */
    .data : {
        _data_start = .;
        *(.data*)
        _data_end = .;
    } > DATA_RAM

    /* Sıfırlanması gereken değişkenler (C standardı gereği 0 olmalı) */
    .bss : {
        _bss_start = .;
        *(.bss*)
        *(COMMON)
        _bss_end = .;
    } > DATA_RAM

    /* Stack: Data SRAM'in en üstünden aşağı doğru büyür */
    _stack_top = ORIGIN(DATA_RAM) + LENGTH(DATA_RAM);
}

