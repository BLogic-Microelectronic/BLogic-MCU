# BLogic MCU - C Runtime Startup (crt0.S)
#
# İşlemci reset'ten çıktığında ilk burası çalışır.
# Görevleri:
#   1. Stack pointer'ı Data SRAM'in en üstüne ayarla
#   2. .bss bölgesini sıfırla (C standardı gereği)
#   3. main() fonksiyonuna atla
#
# .text.init section'ı linker script'te en başa yerleştirilir,
# böylece _start fonksiyonu 0x00000000 adresinde olur.

.section .text.init, "ax"
.global _start

# ------------------------------------------------------------
# Vektor tablosu (CV32E40P vectored mode; mtvec reset taban = 0x10000)
#  - Tum exception'lar taban+0'a gelir -> _real_start
#    (zero-ROM boot trap akisi degismeden korunur)
#  - Interrupt i, taban + 4*i'ye dallanir -> slot 17 = AI accelerator
#  - mtvec'e yazma yok: tablo dogrudan reset taban adresinde durur
#  - .option norvc: girisler 4 bayt kalmali (c.j slot araligini bozar)
# ------------------------------------------------------------
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

# ------------------------------------------------------------
# Yazilim trap dispatch'i (mtvec modundan bagimsiz calisir):
#   exception (mcause MSB=0) -> _real_start  (zero-ROM boot trap'i)
#   irq, cause id == 17      -> ai_isr       (AI accelerator)
#   diger irq'lar            -> _trap_hang
# Stack KULLANILMAZ: boot trap aninda sp henuz kurulmamis olabilir.
# Tek gecici register (t0) mscratch uzerinden saklanip geri alinir.
# ------------------------------------------------------------
_trap_entry:
.option push
.option arch, +zicsr
    csrw mscratch, t0          # kesilen baglamin t0'ini sakla
    csrr t0, mcause
    bgez t0, _te_exc           # MSB=0: exception -> restart yolu
    slli t0, t0, 1             # MSB'yi at (cause id kalir)
    srli t0, t0, 1
    addi t0, t0, -17
    bnez t0, _te_other_irq
    csrr t0, mscratch          # baglami geri al, sonra ISR'a tail-jump
    j    ai_isr                # (interrupt attr tam kayit + mret yapar)
_te_exc:
    csrr t0, mscratch
    j    _real_start
_te_other_irq:
    j    _trap_hang
.option pop

_trap_hang:
    j   _trap_hang

# ISR tanimlamayan testler icin: ai_isr TANIMSIZ zayif sembol kalir
# (".set" YOK -> gas relokasyon basar, linker guclu C ai_isr'i baglar;
#  MIE acilmayan testlerde bu yola hic girilmez).
.weak ai_isr
.option pop

_real_start:
    # --- Adım 1: Stack Pointer Ayarla ---
    # Stack, Data SRAM'in en üst adresinden aşağı doğru büyür.
    # _stack_top değeri linker script'ten geliyor (0x00010000 + 8K = 0x00012000)
    la sp, _stack_top

    # --- Adım 2: .bss Bölgesini Sıfırla ---
    # C standardına göre başlangıç değeri verilmemiş global değişkenler
    # sıfır olmalıdır. Bu döngü .bss bölgesinin tamamını 0 ile doldurur.
    la t0, _bss_start      # t0 = .bss başlangıç adresi
    la t1, _bss_end        # t1 = .bss bitiş adresi

bss_clear:
    bge t0, t1, bss_done   # t0 >= t1 ise temizlik bitti, atla
    sw zero, 0(t0)         # 4 byte sıfır yaz
    addi t0, t0, 4         # sonraki 4 byte'a ilerle
    j bss_clear            # döngüye devam

bss_done:
    # --- Adım 3: main() Fonksiyonuna Atla ---
    call main

    # main() dönerse sonsuz döngüde kal (işlemci durmasın)
hang:
    j hang
