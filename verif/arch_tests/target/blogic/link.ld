OUTPUT_ARCH("riscv")
ENTRY(_start)
MEMORY
{
    INST_RAM (rx)  : ORIGIN = 0x00010000, LENGTH = 256K
    DATA_RAM (rwx) : ORIGIN = 0x00080000, LENGTH = 256K
}
SECTIONS
{
    .text.init ORIGIN(INST_RAM) : { *(.text.init) } > INST_RAM
    .text : { *(.text .text.*) } > INST_RAM
    .rodata : { *(.rodata .rodata.*) } > DATA_RAM
    .data : { *(.data .data.*) *(.sdata .sdata.*) } > DATA_RAM
    .bss (NOLOAD) : { *(.bss .bss.*) *(.sbss .sbss.*) } > DATA_RAM
    .tohost (NOLOAD) : { *(.tohost) } > DATA_RAM
    _stack_top = ORIGIN(DATA_RAM) + LENGTH(DATA_RAM);
}
