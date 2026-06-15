# ============================================
# Ostim BLogic Mikroelektronik
# htif.S  -  HTIF host-target sembolleri
# ============================================

# tohost'a yazinca program durur, TB bu adresi izler.
.section .tohost, "aw", @progbits
.align 6
.globl tohost
tohost:    .word 0
           .word 0           # 64-bit hizalama
.globl fromhost
fromhost:  .word 0
           .word 0
