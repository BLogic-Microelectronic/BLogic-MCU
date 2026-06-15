/* ============================================
   Ostim BLogic Mikroelektronik
   link.ld - SoC linker betigi (bellek yerlesimi)
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

    /* salt okunur veriler */
    .rodata : {
        *(.rodata*)
    } > DATA_RAM

    /* baslangic degeri olan globaller */
    .data : {
        _data_start = .;
        *(.data*)
        _data_end = .;
    } > DATA_RAM

    /* sifirlanmasi gereken degiskenler */
    .bss : {
        _bss_start = .;
        *(.bss*)
        *(COMMON)
        _bss_end = .;
    } > DATA_RAM

    /* stack en ustten asagi buyur */
    _stack_top = ORIGIN(DATA_RAM) + LENGTH(DATA_RAM);
}

