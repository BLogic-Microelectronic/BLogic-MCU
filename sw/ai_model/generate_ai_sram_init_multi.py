# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# generate_ai_sram_init_multi.py  -  COK SENARYOLU AI SRAM preload hex'i
# ============================================
# generate_ai_sram_init.py tek senaryo gomuyordu (TEST_SCENARIO sabit).
# Bu surum DORT sinifin girdi vektorunu tek imaja koyar; firmware her
# turdan once secileni 0x0'a kopyalayip hizlandiriciyi calistirir.
#
# Bellek butcesi (AI SRAM 30,720 B):
#   kullanilan (agirlik + scratch + sonuc)  23,132 B  -> 0x0000..0x5A5B
#   bos                                      7,588 B  -> 0x5A5C..0x77FF
#   3 ek vektor x 1,960 B                    5,880 B  -> sigar, 1,708 B artar
import os
import sys

GOLDEN_DIR = "sw/ai_model/golden_vectors"
# DIKKAT: AYRI DOSYA. Eskiden bu betik ai_sram_init.hex'in USTUNE yaziyordu ve
# 0x0'daki 'yes_real' girdisini 'silence' ile degistiriyordu. Sonucu: make soc-ai,
# soc-ai-irq ve soc-perf regresyonlarinin ucu birden FAIL veriyordu (6 Agustos'ta
# ister denetiminde yakalandi). ai_sram_init.hex REGRESYONUN altin dosyasidir ve
# 'yes_real' icermelidir; cok senaryolu demo imaji bundan boyle ayri dosyada.
OUT_FILE   = os.path.join(GOLDEN_DIR, "ai_sram_init_multi.hex")

# AI SRAM offsetleri (byte) - ai_accelerator.sv ile ayni
INPUT_OFF      = 0x0000   # 1960 byte  <- calisan girdi, firmware buraya kopyalar
CONV_OUT_OFF   = 0x07A8   # 4000 byte  (accelerator yazar)
CONV_W_OFF     = 0x17A8   #  640 byte
CONV_BIAS_OFF  = 0x1BA8   #   32 byte
FC_W_OFF       = 0x1BC8   # 16000 byte
FC_BIAS_OFF    = 0x5A48   #   16 byte
# RESULT         0x5A58      4 byte  (accelerator yazar)

# Ek senaryo yuvalari - 0x5A5C'den sonraki bos alan, 4'e hizali
SLOT1_OFF = 0x5A60
SLOT2_OFF = 0x6208
SLOT3_OFF = 0x69B0

AI_SRAM_BYTES = 30720
AI_SRAM_WORDS = AI_SRAM_BYTES // 4   # 7680

ARGMAX = {"silence": 0, "unknown": 1, "yes": 2, "no": 3,
          "yes_real": 2, "no_real": 3}

# 0x0'daki taban senaryo + uc ek yuva.
# Firmware sirasi bu listeyle AYNI olmali (ai_multi_class_test.c).
SCENARIOS = [
    ("silence", INPUT_OFF),
    ("unknown", SLOT1_OFF),
    ("yes",     SLOT2_OFF),
    ("no",      SLOT3_OFF),
]

words = [0] * AI_SRAM_WORDS


def load_hex(path):
    if not os.path.exists(path):
        sys.exit(f"Bulunamadi: {path}\nOnce 'extract_weights.py' ve 'generate_golden.py' kosulmus olmali.")
    with open(path) as f:
        return [int(line.strip(), 16) for line in f if line.strip()]


def place(label, byte_off, hex_path):
    if byte_off % 4 != 0:
        sys.exit(f"{label}: ofset 0x{byte_off:04X} 4'e bolunmuyor")
    word_off = byte_off // 4
    src = load_hex(hex_path)
    end_word = word_off + len(src)
    if end_word > AI_SRAM_WORDS:
        sys.exit(f"{label}: AI SRAM'e sigmiyor ({end_word} > {AI_SRAM_WORDS})")
    for i, w in enumerate(src):
        words[word_off + i] = w
    print(f"  {label:16s} @0x{byte_off:04X}  word {word_off:4d}..{end_word-1:4d}  "
          f"{len(src)*4:6d} B   <- {os.path.basename(hex_path)}")
    return len(src)


print(f"AI SRAM preload ({AI_SRAM_BYTES} B = {AI_SRAM_WORDS} word), COK SENARYOLU")
print()
print("Agirliklar:")
place("conv_w",    CONV_W_OFF,    os.path.join(GOLDEN_DIR, "weights_conv.hex"))
place("conv_bias", CONV_BIAS_OFF, os.path.join(GOLDEN_DIR, "bias_conv.hex"))
place("fc_w",      FC_W_OFF,      os.path.join(GOLDEN_DIR, "weights_fc.hex"))
place("fc_bias",   FC_BIAS_OFF,   os.path.join(GOLDEN_DIR, "bias_fc.hex"))

print()
print("Senaryo girdileri:")
vec_words = None
for name, off in SCENARIOS:
    n = place(f"input[{name}]", off, os.path.join(GOLDEN_DIR, f"input_{name}.hex"))
    if vec_words is None:
        vec_words = n
    elif n != vec_words:
        sys.exit(f"HATA: {name} vektoru {n} word, digerleri {vec_words} word. "
                 f"Yuva araliklari sabit, boyutlar esit olmali.")

# Cakisma kontrolu: her senaryo yuvasi vektor boyu kadar yer kaplar
vec_bytes = vec_words * 4
sinirlar = sorted((off, off + vec_bytes, name) for name, off in SCENARIOS)
for (a0, a1, an), (b0, b1, bn) in zip(sinirlar, sinirlar[1:]):
    if a1 > b0:
        sys.exit(f"HATA: {an} (0x{a0:04X}-0x{a1:04X}) ile {bn} (0x{b0:04X}) cakisiyor")
# Taban senaryo conv_out'a tasmasin
if INPUT_OFF + vec_bytes > CONV_OUT_OFF:
    sys.exit(f"HATA: girdi vektoru ({vec_bytes} B) conv_out alanina tasiyor")

son = sinirlar[-1][1]
print()
print(f"  vektor boyu     : {vec_bytes} B ({vec_words} word)")
print(f"  son kullanilan  : 0x{son:04X} ({son} B)")
print(f"  kalan bos       : {AI_SRAM_BYTES - son} B")

with open(OUT_FILE, 'w') as f:
    for w in words:
        f.write(f"{w:08X}\n")

print()
print(f"Yazildi: {OUT_FILE}  ({os.path.getsize(OUT_FILE)} B, {AI_SRAM_WORDS} satir)")
print()
print("Firmware bu tabloyu bekliyor (ai_multi_class_test.c ile ayni sira):")
for i, (name, off) in enumerate(SCENARIOS):
    print(f"  {i}: 0x{off:04X}  {name:10s} -> beklenen argmax={ARGMAX[name]}")
