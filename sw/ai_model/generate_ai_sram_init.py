"""
generate_ai_sram_init.py — Adim 2.1: AI SRAM icin tek bir preload hex'i.

Standalone TB $readmemh ile her bolgeyi ayri ayri yukluyordu; SoC sim
ise i_ai_sram'in INIT_FILE parametresine TEK bir hex bekliyor (30720
byte = 7680 word). Bu script:
  - weights_conv, bias_conv, weights_fc, bias_fc'yi dogru offsetlere yerlestirir
  - Bir test senaryosunun input'unu da INPUT bolgesine onceden koyar
  - Gerisini sifir birakir
  -> sw/ai_model/golden_vectors/ai_sram_init.hex (7680 satir, RTL beklentisiyle birebir)

Calistirma (repo kokunden, venv aktif):
    python3 sw/ai_model/generate_ai_sram_init.py

Test senaryosu degistirmek icin TEST_SCENARIO sabitini guncelle
(yes / no / silence / unknown). Beklenen argmax:
    yes=2, no=3, unknown=1, silence=0

soc_top.sv i_ai_sram'in INIT_FILE'ini bu yeni hex'e cevirmek icin:
    sed -i '/\\.SRAM_BYTES(30720)/s|"data_mem.hex"|"ai_sram_init.hex"|' \\
        rtl/soc_top.sv
"""
import os
import sys

# --- Konfigurasyon -----------------------------------------------
TEST_SCENARIO = "yes"   # SoC'nin onyukleyecegi test inputu

GOLDEN_DIR = "sw/ai_model/golden_vectors"
OUT_FILE   = os.path.join(GOLDEN_DIR, "ai_sram_init.hex")

# AI SRAM offsetleri (byte) — ai_accelerator.sv'deki sabitlerle birebir
INPUT_OFF      = 0x0000   # 1960 byte
CONV_OUT_OFF   = 0x07A8   # 4000 byte (accelerator yazacak, sifir baslat)
CONV_W_OFF     = 0x17A8   #  640 byte
CONV_BIAS_OFF  = 0x1BA8   #   32 byte
FC_W_OFF       = 0x1BC8   # 16000 byte
FC_BIAS_OFF    = 0x5A48   #   16 byte
# RESULT         0x5A58       4 byte (accelerator yazacak)

AI_SRAM_BYTES = 30720
AI_SRAM_WORDS = AI_SRAM_BYTES // 4   # 7680

# Tum word'leri sifir baslat
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
    print(f"  {label:14s} @0x{byte_off:04X} (word {word_off:4d}..{end_word-1:4d}, {len(src)*4} byte)  <- {os.path.basename(hex_path)}")


print(f"AI SRAM preload ({AI_SRAM_BYTES} byte = {AI_SRAM_WORDS} word):")
print(f"  Test senaryosu  : {TEST_SCENARIO}")
print()

place("input",     INPUT_OFF,     os.path.join(GOLDEN_DIR, f"input_{TEST_SCENARIO}.hex"))
place("conv_w",    CONV_W_OFF,    os.path.join(GOLDEN_DIR, "weights_conv.hex"))
place("conv_bias", CONV_BIAS_OFF, os.path.join(GOLDEN_DIR, "bias_conv.hex"))
place("fc_w",      FC_W_OFF,      os.path.join(GOLDEN_DIR, "weights_fc.hex"))
place("fc_bias",   FC_BIAS_OFF,   os.path.join(GOLDEN_DIR, "bias_fc.hex"))


# Yaz
with open(OUT_FILE, 'w') as f:
    for w in words:
        f.write(f"{w:08X}\n")

# Beklenen argmax
expected_argmax = {"silence": 0, "unknown": 1, "yes": 2, "no": 3}[TEST_SCENARIO]

print()
print(f"Yazildi: {OUT_FILE}")
print(f"  Boyut    : {os.path.getsize(OUT_FILE)} byte")
print(f"  Satir    : {AI_SRAM_WORDS}")
print(f"  Beklenen : argmax={expected_argmax} ({TEST_SCENARIO})")
