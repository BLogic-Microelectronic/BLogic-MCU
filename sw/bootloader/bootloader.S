# ============================================
# Ostim BLogic Mikroelektronik
# bootloader.S  -  QSPI boot ROM bootloader
# ============================================
# Iki asama:
#   1) firmware : flash 0x0000_0000 -> Instr SRAM 0x0001_0000   ( 8 KB)
#   2) YZ agirl.: flash 0x0001_0000 -> AI SRAM    0x0003_0000   (30 KB)
#
# Okuma 256 baytlik burst ile yapilir (CCR data_len = 0xFF).
# Gerekce: 4 baytlik okumada komut+adres yuku (32 SCLK) veri kadar (32 SCLK)
# yer tutar. 256 bayt burst'te ayni yuk 512 veri bitine yayilir:
#   4 bayt  -> 64,0 SCLK/word
#   256 bayt-> 32,5 SCLK/word   (~2x; burst yalnizca komut+adres
#                                yukunu amorti eder, veri suresi ayni)
# 5 MHz SCLK'te: firmware 13 ms + 23 KB agirlik 38 ms = ~51 ms.
# Daha hizli gerekirse x4 veri fazi (CCR mod bitleri) 4x daha kazandirir.
# RX FIFO 64 word derindir; 256 bayt = 64 word, tam oturur.
#
# ASIC'te AI SRAM makrodur, reset sonrasi icerigi tanimsizdir; agirliklar
# yalnizca bu yoldan gelir. FPGA'da bitstream $readmemh ile onceden yukler,
# bu asama uzerine ayni icerigi yazar (kartta dogrulanabilir).

    .section .text.boot
    .globl   _start

    .equ QSPI_BASE,  0x40000500
    .equ QSPI_CCR,   0x00
    .equ QSPI_ADR,   0x04
    .equ QSPI_DR,    0x08
    .equ QSPI_STA,   0x0C

    .equ CCR_BURST,  0x08FF0103   # presc=4, data_len=255 (256B), READ 0x03, 3B adres
    .equ CCR_WORD,   0x08030103   # presc=4, data_len=3   (4B)  - warm-up icin

    .equ FW_SRC,     0x00000000
    .equ FW_DST,     0x00010000
    .equ FW_WORDS,   2048         # 8 KB

    # Veri bolgesi: crossbar data-AR ISRAM'i okumaz (soc_axi_interconnect.sv:284),
    # .rodata/.data DSRAM'e bu kopyayla gider. gen_flash_image.py'deki
    # DATA_FLASH_OFF/DATA_MAX ile ayni kalmali.
    .equ DATA_SRC,   0x00008000   # flash veri bolgesi
    .equ DATA_DST,   0x00020000   # DATA_RAM
    .equ DATA_WORDS, 2048         # 8 KB - DSRAM'in tamami (64'un kati)

    .equ AI_SRC,     0x00010000   # flash sektor siniri (firmware'den bagimsiz)
    .equ AI_DST,     0x00030000
    .equ AI_WORDS,   5888         # 23 KB - AI SRAM'in fiilen kullanilan bolgesi
                                  # (girdi 0x000, agirliklar, conv_out 0x7A8,
                                  #  sonuc 0x5A58 -> son kullanilan bayt 23132).
                                  # 64'un kati olmali (burst = 64 word).

_start:
    li      t0, QSPI_BASE

    # FPGA'da config sonrasi ilk CCLK kenarlari kayiyor, dummy okumayla yutuyoruz
    li      t2, 0
    sw      t2, QSPI_ADR(t0)
    li      t4, CCR_WORD
    sw      t4, QSPI_CCR(t0)
dummy_wait:
    lw      t4, QSPI_STA(t0)
    andi    t4, t4, 1
    beqz    t4, dummy_wait
    lw      t4, QSPI_DR(t0)       # sonuc atiliyor

    # --- Asama 1: firmware ---
    li      t1, FW_DST
    li      t2, FW_SRC
    li      t3, FW_WORDS
    jal     ra, copy_burst

    # --- Asama 1.5: veri bolgesi (.rodata/.data) -> DSRAM ---
    li      t1, DATA_DST
    li      t2, DATA_SRC
    li      t3, DATA_WORDS
    jal     ra, copy_burst

    # --- Asama 2: YZ agirliklari ---
    li      t1, AI_DST
    li      t2, AI_SRC
    li      t3, AI_WORDS
    jal     ra, copy_burst

    # binutils>=2.38: fence.i ayri uzanti (zifencei) ister
    .option push
    .option arch, +zifencei
    fence.i
    .option pop
    li      t0, FW_DST
    jr      t0

# ------------------------------------------------------------------
# copy_burst: t1=hedef, t2=flash ofset, t3=word sayisi (64'un kati)
# ------------------------------------------------------------------
copy_burst:
    li      t0, QSPI_BASE
blk_loop:
    beqz    t3, blk_done

    sw      t2, QSPI_ADR(t0)      # flash adresi
    li      t4, CCR_BURST
    sw      t4, QSPI_CCR(t0)      # transaction baslar (256 bayt)
blk_wait:
    lw      t4, QSPI_STA(t0)
    andi    t4, t4, 1             # done
    beqz    t4, blk_wait

    li      t6, 64                # FIFO'dan 64 word cek
pop_loop:
    lw      t4, QSPI_DR(t0)
    sw      t4, 0(t1)
    addi    t1, t1, 4
    addi    t6, t6, -1
    bnez    t6, pop_loop

    addi    t2, t2, 256
    addi    t3, t3, -64
    j       blk_loop
blk_done:
    ret

hang:
    j       hang
