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
