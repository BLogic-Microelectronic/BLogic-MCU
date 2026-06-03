# ============================================================
# BLogic MCU — HTIF (Host-Target Interface) sembolleri
# ============================================================
# riscv-arch-test ve riscv-tests her ikisi de programi durdurmak
# icin `tohost` adli memory-mapped 32-bit'e yazar (PASS=1, FAIL=N).
# TB bu adresi izleyerek simulasyonu sonlandirir.
# ============================================================

.section .tohost, "aw", @progbits
.align 6
.globl tohost
tohost:    .word 0
           .word 0           # 64-bit hizalamayi bos birak
.globl fromhost
fromhost:  .word 0
           .word 0
