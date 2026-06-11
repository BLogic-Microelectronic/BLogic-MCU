#!/usr/bin/env python3
# ============================================================
# apply_ai_perf_fix.py - soc-perf derleme duzeltmesi (A9 fix)
#
# SAHA BULGUSU: riscv32-unknown-elf toolchain'inde newlib basliklari
# yok; quant_params.h'taki '#include <stdint.h>' gcc wrapper'inin
# include_next adiminda patliyor (mevcut firmware'ler blogic_mcu.h'in
# kendi typedef'leriyle derleniyor - aykiri include buydu).
# Ayrica blogic_mcu.h int64_t tanimlamiyor (requant ara carpimi
# icin gerekli) - stdint duzelse bile siradaki hata o olurdu.
#
# Duzeltmeler:
#   1) quant_params.h: stdint include'u cift korumali blokla
#      degistirilir (__riscv'de: BLOGIC_MCU_H yoksa yalin typedef;
#      host'ta: <stdint.h>). Yeniden tanim riski sifir.
#   2) extract_weights.py uretici sablonu ayni icerikle guncellenir
#      (header yeniden uretilse de duzeltme KALICI).
#   3) ai_sw_reference.c: 'typedef long long int64_t;' eklenir.
#   4) v2: mcycle CSR asm'leri '.option arch, +zicsr' ile sarilir
#      (binutils>=2.38: rv32imc artik Zicsr'i ima etmiyor) ve
#      test-all zincirine soc-perf eklenir.
# Kullanim (repo kokunde): python3 apply_ai_perf_fix.py
# Davranis: all-or-nothing + idempotent.
# ============================================================
import os, sys
ROOT = os.path.dirname(os.path.abspath(__file__))

QP = "sw/ai_model/golden_vectors/quant_params.h"
EW = "sw/ai_model/extract_weights.py"
FW = "sw/tests/ai_sw_reference.c"

GUARD_C = ("#ifdef __riscv\n"
           "/* yalin metal: toolchain'de newlib basligi yok; ilp32 */\n"
           "# ifndef BLOGIC_MCU_H\n"
           "typedef signed int int32_t;\n"
           "# endif\n"
           "#else\n"
           "# include <stdint.h>\n"
           "#endif")

SUBS = [
    (QP,
     "#include <stdint.h>",
     GUARD_C,
     "ifdef __riscv"),
    (EW,
     'f.write("#ifndef QUANT_PARAMS_H\\n#define QUANT_PARAMS_H\\n'
     '#include <stdint.h>\\n\\n")',
     'f.write("#ifndef QUANT_PARAMS_H\\n#define QUANT_PARAMS_H\\n"\n'
     '            + ' + repr(GUARD_C.replace("\n", "\\n") + "\\n\\n")
     .replace("\\\\n", "\\n") + ')',
     "ifdef __riscv"),
    (FW,
     'static inline void mcycle_enable(void) {\n'
     '    __asm__ volatile("csrw 0x320, x0");          /* mcountinhibit = 0 */\n'
     '}\n'
     'static inline uint32_t rdcycle(void) {\n'
     '    uint32_t v;\n'
     '    __asm__ volatile("csrr %0, 0xB00" : "=r"(v));  /* mcycle */\n'
     '    return v;\n'
     '}',
     'static inline void mcycle_enable(void) {\n'
     '    __asm__ volatile(".option push\\n\\t"\n'
     '                     ".option arch, +zicsr\\n\\t"\n'
     '                     "csrw 0x320, x0\\n\\t"      /* mcountinhibit=0 */\n'
     '                     ".option pop");\n'
     '}\n'
     'static inline uint32_t rdcycle(void) {\n'
     '    uint32_t v;\n'
     '    __asm__ volatile(".option push\\n\\t"\n'
     '                     ".option arch, +zicsr\\n\\t"\n'
     '                     "csrr %0, 0xB00\\n\\t"       /* mcycle */\n'
     '                     ".option pop" : "=r"(v));\n'
     '    return v;\n'
     '}',
     "+zicsr"),
    ("Makefile",
     '\ts=PASS; $(MAKE) soc-ai     || { s=FAIL; overall=1; }; \\',
     '\ts=PASS; $(MAKE) soc-ai     || { s=FAIL; overall=1; }; \\\n'
     '\tp=PASS; $(MAKE) soc-perf   || { p=FAIL; overall=1; }; \\',
     "$(MAKE) soc-perf"),
    ("Makefile",
     '\techo "  soc-ai     (SoC AI C testi)       : $$s"; \\',
     '\techo "  soc-ai     (SoC AI C testi)       : $$s"; \\\n'
     '\techo "  soc-perf   (HW vs SW hizlanma)    : $$p"; \\',
     "HW vs SW hizlanma"),
    (FW,
     '#include "../ai_model/golden_vectors/quant_params.h"',
     '#include "../ai_model/golden_vectors/quant_params.h"\n'
     '\n'
     '#ifdef __riscv\n'
     '/* blogic_mcu.h 64-bit tip tanimlamaz; requant ara carpimi icin */\n'
     'typedef long long int64_t;\n'
     '#endif',
     "typedef long long int64_t"),
]


def rw(path):
    return open(os.path.join(ROOT, path), encoding="utf-8", newline="")


def main():
    actions, errors, out = [], [], {}
    for path, old, new, marker in SUBS:
        full = os.path.join(ROOT, path)
        if not os.path.isfile(full):
            errors.append("DOSYA YOK: " + path)
            continue
        src = out.get(path) or rw(path).read()
        if marker in src:
            actions.append("[SKIP] %-44s zaten uygulanmis" % path)
            continue
        if src.count(old) != 1:
            errors.append("ANCHOR HATASI: %s icinde %dx: %r"
                          % (path, src.count(old), old[:50]))
            continue
        out[path] = src.replace(old, new)
        actions.append("[EDIT] %-44s %s" % (path, marker))
    if errors:
        print("HATALAR (dosya YAZILMADI):")
        for e in errors:
            print("  [HATA] " + e)
        return 1
    for p, c in out.items():
        open(os.path.join(ROOT, p), "w", encoding="utf-8",
             newline="").write(c)
    for a in actions:
        print("  " + a)
    print(" Sonraki adim: make soc-perf")
    return 0


if __name__ == "__main__":
    sys.exit(main())
