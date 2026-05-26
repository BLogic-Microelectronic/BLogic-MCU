/* BLogic MCU - Linker Script
 * Memory map'e göre bölümlerin yerleşimi.
 * 
 * Boot akışı:
 *   1. İşlemci reset → boot_addr_i = 0x00020000 (Boot ROM)
 *   2. Bootloader QSPI'dan programı okur → INST SRAM'e yazar
 *   3. Jump → 0x00000000 (Instruction SRAM)
 *
 * Simülasyonda bootloader bypass edilip kod doğrudan
 * INST SRAM'e yükleneceği için ENTRY _start 0x00000000'dadır.
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
        *(.rodata*)      /* Salt okunur veriler (string sabitleri vb.) */
    } > INST_RAM

    /* === VERİ BÖLÜMLERİ (Data SRAM) === */

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
