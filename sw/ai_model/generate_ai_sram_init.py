# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# generate_ai_sram_init.py  -  AI SRAM preload hex'i uretir
# ============================================
# Agirliklari ve test inputunu dogru offsetlere koyup tek hex yazar.
# TEST_SCENARIO ile senaryo secilir (yes/no/silence/unknown).
import os
import sys

TEST_SCENARIO = "yes_real"   # gercek ses ozniteligi (EK-3)

GOLDEN_DIR = "sw/ai_model/golden_vectors"
OUT_FILE   = os.path.join(GOLDEN_DIR, "ai_sram_init.hex")

# AI SRAM offsetleri (byte), ai_accelerator.sv ile ayni
INPUT_OFF      = 0x0000   # 1960 byte
CONV_OUT_OFF   = 0x07A8   # 4000 byte (accelerator yazacak)
CONV_W_OFF     = 0x17A8   #  640 byte
CONV_BIAS_OFF  = 0x1BA8   #   32 byte
FC_W_OFF       = 0x1BC8   # 16000 byte
FC_BIAS_OFF    = 0x5A48   #   16 byte
# RESULT         0x5A58       4 byte (accelerator yazacak)

AI_SRAM_BYTES = 30720
AI_SRAM_WORDS = AI_SRAM_BYTES // 4   # 7680

words = [0] * AI_SRAM_WORDS


def load_hex(path):
    if not os.path.exists(path):
        sys.exit(f"Not found: {path}\nRun 'extract_weights.py' and 'generate_golden.py' first.")
    with open(path) as f:
        return [int(line.strip(), 16) for line in f if line.strip()]


def place(label, byte_off, hex_path):
    if byte_off % 4 != 0:
        sys.exit(f"{label}: offset 0x{byte_off:04X} is not a multiple of 4")
    word_off = byte_off // 4
    src = load_hex(hex_path)
    end_word = word_off + len(src)
    if end_word > AI_SRAM_WORDS:
        sys.exit(f"{label}: does not fit in the AI SRAM ({end_word} > {AI_SRAM_WORDS})")
    for i, w in enumerate(src):
        words[word_off + i] = w
    print(f"  {label:14s} @0x{byte_off:04X} (word {word_off:4d}..{end_word-1:4d}, {len(src)*4} byte)  <- {os.path.basename(hex_path)}")


print(f"AI SRAM preload ({AI_SRAM_BYTES} byte = {AI_SRAM_WORDS} word):")
print(f"  Test scenario   : {TEST_SCENARIO}")
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
expected_argmax = {"silence": 0, "unknown": 1, "yes": 2, "no": 3,
                   "yes_real": 2, "no_real": 3}[TEST_SCENARIO]

print()
print(f"Written: {OUT_FILE}")
print(f"  Size     : {os.path.getsize(OUT_FILE)} byte")
print(f"  Lines    : {AI_SRAM_WORDS}")
print(f"  Expected : argmax={expected_argmax} ({TEST_SCENARIO})")
