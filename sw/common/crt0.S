# ============================================
# Ostim BLogic Mikroelektronik
# crt0.S  -  C calisma zamani baslangici
# ============================================
#
# .text.init linker script'te en basa konur, _start 0x0 olur.

.section .text.init, "ax"
.global _start

# Vektor tablosu: exception'lar slot 0, irq i -> slot i. mtvec'e yazmiyoruz.
.option push
.option norvc
_start:
    j   _trap_entry            # slot 0    : tum exception'lar + (direct modda) irq'lar
    .rept 16
    j   _trap_hang             # slot 1-16 : kullanilmiyor
    .endr
    j   ai_isr                 # slot 17   : ai_irq (vectored mod yolu)
    .rept 14
    j   _trap_hang             # slot 18-31: kullanilmiyor
    .endr

# Trap dispatch. Stack yok (boot trap'inde sp kurulu olmayabilir), t0'i mscratch'te tutuyoruz.
_trap_entry:
.option push
.option arch, +zicsr
    csrw mscratch, t0          # t0'i sakla
    csrr t0, mcause
    bgez t0, _te_exc           # MSB=0: exception
    slli t0, t0, 1             # MSB'yi at
    srli t0, t0, 1
    addi t0, t0, -17
    bnez t0, _te_other_irq
    csrr t0, mscratch          # t0'i geri al
    j    ai_isr
_te_exc:
    csrr t0, mscratch
    j    _real_start
_te_other_irq:
    j    _trap_hang
.option pop

_trap_hang:
    j   _trap_hang

# ai_isr tanimsizsa zayif sembol kalir, linker C tarafindaki guclu sembole baglar.
.weak ai_isr
.option pop

_real_start:
    # sp'yi stack tepesine al (linker'dan gelir)
    la sp, _stack_top

    # .bss'i sifirla
    la t0, _bss_start
    la t1, _bss_end

bss_clear:
    bge t0, t1, bss_done
    sw zero, 0(t0)
    addi t0, t0, 4
    j bss_clear

bss_done:
    call main

    # main donerse burada kal
hang:
    j hang
