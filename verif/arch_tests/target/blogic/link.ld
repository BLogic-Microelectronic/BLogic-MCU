OUTPUT_ARCH("riscv")
ENTRY(rvtest_entry_point)
MEMORY {
    INST_RAM (rx)  : ORIGIN = 0x00010000, LENGTH = 64K
    DATA_RAM (rwx) : ORIGIN = 0x00020000, LENGTH = 64K
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
