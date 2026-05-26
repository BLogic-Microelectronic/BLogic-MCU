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

_start:
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
