# ============================================================
# BLogic MCU - QSPI Boot ROM Bootloader (immutable code)
# Sartname 4.2.2 implementasyonu
# ============================================================
    .section .text.boot
    .globl   _start

_start:
    li      t0, 0x40000500      # QSPI base (0x4000_0500)
    li      t1, 0x00010000      # Instr SRAM (dest)
    li      t2, 0x00000000      # Flash src offset
    li      t3, 2048            # 2048 word = 8KB

copy_loop:
    beqz    t3, jump_to_app

    sw      t2, 4(t0)           # QSPI_ADR <- flash adresi

    # CCR: instr=0x03(READ), data_mode=01, dir=read, len=3(4B), prescaler=4
    li      t4, 0x08030103
    sw      t4, 0(t0)           # QSPI_CCR (transaction baslar)

wait_done:
    lw      t4, 12(t0)          # QSPI_STA
    andi    t4, t4, 1           # done bit
    beqz    t4, wait_done

    lw      t4, 8(t0)           # QSPI_DR (4 byte, RX FIFO pop)
    sw      t4, 0(t1)           # Instr SRAM'e yaz

    addi    t1, t1, 4
    addi    t2, t2, 4
    addi    t3, t3, -1
    j       copy_loop

jump_to_app:
    fence.i
    li      t0, 0x00010000
    jr      t0

hang:
    j       hang
