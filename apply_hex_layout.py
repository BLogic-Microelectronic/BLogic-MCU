#!/usr/bin/env python3
# ============================================================
# apply_ai_irq_fix.py - A10 fix v2: trap dispatch + weak reloc
#
# Saha bulgulari (uart.log + objdump):
#  1) irq take'i base+0'a iniyor (slot 17'ye degil) -> her
#     mstatus.MIE enable aninda pending level irq firmware'i
#     _real_start'a dusurup restart firtinasi yaratiyor (19x).
#  2) crt0 icinde ".weak ai_isr" + ".set ai_isr,_trap_hang"
#     ayni dosyada tanimli oldugu icin gas "j ai_isr" jump'larini
#     assembly aninda SABIT offset olarak cozmus (0x03c0006f),
#     relokasyon yok -> linker guclu C ai_isr'i secse bile
#     jump'lar _trap_hang'e cakili.
# COZUM (moddan bagimsiz):
#  - slot 0 -> _trap_entry: mcause MSB=0 (exception) -> _real_start
#    (zero-ROM boot trap semantigi korunur); cause==irq17 -> ai_isr;
#    baska irq -> _trap_hang. Stack KULLANILMAZ (boot aninda sp
#    tanimsiz), tek gecici reg mscratch ile cevrilir.
#  - slot 17 -> j ai_isr kalir (gercek vectored mod icin).
#  - ".set" satiri SILINIR: ai_isr artik TANIMSIZ zayif sembol ->
#    gas relokasyon basar, linker guclu C fonksiyonunu baglar.
#    ISR'siz testlerde weak-undef=0; MIE hic acilmadigi icin o
#    yola asla girilmez.
#  - ai_irq_test.c: CLEAR_DONE sonrasi STATUS readback -> posted
#    yazma mret'ten once CSR'a oturur, level re-take yarisi kapanir.
# Kullanim: python3 apply_ai_irq_fix.py  (apply_ai_irq.py SONRASI)
# Dogrulama: make soc-ai-irq && make soc-ai && make boot
# ============================================================
import os, sys
ROOT = os.path.dirname(os.path.abspath(__file__))
CRT0, TESTC = "sw/common/crt0.S", "sw/tests/ai_irq_test.c"

OLD_TBL = '''.option push
.option norvc
_start:
    j   _real_start            # slot 0    : exception girisi (boot dahil)
    .rept 16
    j   _trap_hang             # slot 1-16 : kullanilmiyor
    .endr
    j   ai_isr                 # slot 17   : ai_irq (irq_vector[17])
    .rept 14
    j   _trap_hang             # slot 18-31: kullanilmiyor
    .endr

_trap_hang:
    j   _trap_hang

# ISR tanimlamayan testler icin zayif varsayilan; ai_irq_test.c'deki
# gercek ai_isr guclu sembol olarak bunu ezer.
.weak ai_isr
.set  ai_isr, _trap_hang
.option pop'''

NEW_TBL = '''.option push
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
.option pop'''

OLD_CLR = "    AI_ACC->CTRL = CTRL_CLEAR_DONE;   /* level irq kaynagini dusur */"
NEW_CLR = ("    AI_ACC->CTRL = CTRL_CLEAR_DONE;   /* level irq kaynagini dusur */\n"
           "    (void)AI_ACC->STATUS;             /* readback: posted yazmayi "
           "mret oncesi CSR'a oturt */")

SUBS = [
    (CRT0, OLD_TBL, NEW_TBL, "_trap_entry"),
    (TESTC, OLD_CLR, NEW_CLR, "readback"),
]


def main():
    actions, errors, out = [], [], {}
    for path, old, new, marker in SUBS:
        full = os.path.join(ROOT, path)
        src = open(full, encoding="utf-8", newline="").read()
        if marker in src:
            actions.append("[SKIP] %-24s zaten: %s" % (path, marker))
            continue
        if src.count(old) != 1:
            errors.append("ANCHOR %s icinde %dx" % (path, src.count(old)))
            continue
        out[path] = src.replace(old, new)
        actions.append("[EDIT] %-24s %s" % (path, marker))
    if errors:
        print("HATALAR (hicbir sey YAZILMADI):")
        for e in errors:
            print("  [HATA] " + e)
        return 1
    for p, c in out.items():
        open(os.path.join(ROOT, p), "w", encoding="utf-8",
             newline="").write(c)
    for a in actions:
        print("  " + a)
    print(" Dogrulama: make soc-ai-irq && make soc-ai && make boot")
    return 0


if __name__ == "__main__":
    sys.exit(main())
