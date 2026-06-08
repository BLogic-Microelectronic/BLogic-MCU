.section .text.start
.global _start
.global __data_load_start
.global __data_start
.global __data_end
.global __bss_start
.global __bss_end
.global __stack_top

_start:
    la sp, __stack_top

    la a0, __data_load_start
    la a1, __data_start
    la a2, __data_end
1:
    bgeu a1, a2, 2f
    lw t0, 0(a0)
    sw t0, 0(a1)
    addi a0, a0, 4
    addi a1, a1, 4
    j 1b

2:
    la a0, __bss_start
    la a1, __bss_end
3:
    bgeu a0, a1, 4f
    sw zero, 0(a0)
    addi a0, a0, 4
    j 3b

4:
    call main

5:
    j 5b