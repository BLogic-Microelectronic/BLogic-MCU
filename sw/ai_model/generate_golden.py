# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# generate_golden.py  -  TFLite golden vektor uretimi
# ============================================
import os
import sys
import numpy as np

try:
    from tensorflow.lite.python.interpreter import Interpreter
except ImportError:
    try:
        from tflite_runtime.interpreter import Interpreter
    except ImportError:
        sys.exit("Neither tensorflow nor tflite-runtime is installed.")

MODEL  = "sw/ai_model/micro_speech_quantized.tflite"
OUTDIR = "sw/ai_model/golden_vectors"

# sinif sirasi (labels_softmax ciktisi)
CLASS_NAMES = ['silence', 'unknown', 'yes', 'no']

if not os.path.exists(MODEL):
    sys.exit(f"Model not found: {MODEL}")
os.makedirs(OUTDIR, exist_ok=True)

interp = Interpreter(MODEL, experimental_preserve_all_tensors=True)
interp.allocate_tensors()


# tensor index'leri
input_idx  = interp.get_input_details()[0]['index']
output_idx = interp.get_output_details()[0]['index']    # labels_softmax

relu_idx, add1_idx = None, None
for t in interp.get_tensor_details():
    if t['name'] == 'Relu':
        relu_idx = t['index']
    elif t['name'] == 'add_1':
        add1_idx = t['index']

if relu_idx is None or add1_idx is None:
    sys.exit(f"Intermediate tensor not found (Relu={relu_idx}, add_1={add1_idx})")

print(f"Tensor indices: input={input_idx}, Relu={relu_idx}, "
      f"add_1={add1_idx}, output={output_idx}\n")


# tek input icin model kosutur
def run_inference(inp_int8):
    interp.set_tensor(input_idx, inp_int8.reshape(1, 1960).astype(np.int8))
    interp.invoke()
    softmax = interp.get_tensor(output_idx).flatten().astype(np.int8)
    conv_out = interp.get_tensor(relu_idx).astype(np.int8)        # [1,25,20,8]
    fc_out   = interp.get_tensor(add1_idx).flatten().astype(np.int8)  # [4]
    argmax   = int(np.argmax(softmax))
    return argmax, conv_out.flatten(), fc_out, softmax


# 4 sinifa denk dusen input ara (rastgele + fallback)
print("=== Class search (random input) ===")
np.random.seed(2026)
found = {}   # sinif -> (input, conv_out, fc_out, softmax)
trial = 0
MAX_TRIALS = 8000

while len(found) < 4 and trial < MAX_TRIALS:
    trial += 1
    inp = np.random.randint(-128, 128, size=1960, dtype=np.int8)
    argmax, conv_out, fc_out, softmax = run_inference(inp)
    name = CLASS_NAMES[argmax]
    if name not in found:
        found[name] = (inp, conv_out, fc_out, softmax)
        print(f"  trial {trial:5d}: '{name}' found  argmax={argmax}  "
              f"softmax={list(int(x) for x in softmax)}")


# bulamadigimiz siniflar icin elle desenler
if len(found) < 4:
    print("\n=== Fallback patterns for missing classes ===")
    fallbacks = [
        ("low_energy",    np.random.randint(-128, -110, size=1960, dtype=np.int8)),
        ("mid_energy",    np.random.randint(-30, 30, size=1960, dtype=np.int8)),
        ("high_energy",   np.random.randint(80, 127, size=1960, dtype=np.int8)),
        ("all_-128",      np.full(1960, -128, dtype=np.int8)),
        ("all_0",         np.zeros(1960, dtype=np.int8)),
        ("all_127",       np.full(1960, 127, dtype=np.int8)),
        ("alternating",   np.tile([-128, 127], 980).astype(np.int8)),
    ]
    for label, inp in fallbacks:
        if len(found) >= 4:
            break
        argmax, conv_out, fc_out, softmax = run_inference(inp)
        name = CLASS_NAMES[argmax]
        if name not in found:
            found[name] = (inp, conv_out, fc_out, softmax)
            print(f"  pattern '{label}': '{name}' found  argmax={argmax}  "
                  f"softmax={list(int(x) for x in softmax)}")


# hala eksik varsa ilk bulunani kopyala
missing = [n for n in CLASS_NAMES if n not in found]
if missing:
    print(f"\nWARNING: These classes were not found: {missing}")
    print("        The first data found is copied for these classes; the TB can still")
    print("        check numerical accuracy, but the label will not be meaningful.")
    first_key = next(iter(found))
    for n in missing:
        found[n] = found[first_key]
        print(f"          {n} <- {first_key} (copy)")


# hex yazma
def save_int8_hex(data, path):
    flat = np.asarray(data, dtype=np.int8).flatten()
    pad = (4 - len(flat) % 4) % 4
    if pad:
        flat = np.concatenate([flat, np.zeros(pad, dtype=np.int8)])
    with open(path, 'w') as f:
        for i in range(0, len(flat), 4):
            w = (int(flat[i  ]) & 0xFF)         \
              | ((int(flat[i+1]) & 0xFF) <<  8) \
              | ((int(flat[i+2]) & 0xFF) << 16) \
              | ((int(flat[i+3]) & 0xFF) << 24)
            f.write(f"{w:08X}\n")


print("\n=== Writing hex files ===")
for name in CLASS_NAMES:
    inp, conv_out, fc_out, softmax = found[name]
    save_int8_hex(inp,      os.path.join(OUTDIR, f"input_{name}.hex"))
    save_int8_hex(conv_out, os.path.join(OUTDIR, f"conv_out_{name}.hex"))
    save_int8_hex(fc_out,   os.path.join(OUTDIR, f"output_{name}.hex"))
    print(f"  {name:8s}: fc_out=[{fc_out[0]:4d}, {fc_out[1]:4d}, "
          f"{fc_out[2]:4d}, {fc_out[3]:4d}]  argmax={int(np.argmax(softmax))} "
          f"({CLASS_NAMES[int(np.argmax(softmax))]})")


# golden_summary.txt (rapor; TB okumaz)
with open(os.path.join(OUTDIR, "golden_summary.txt"), "w") as f:
    f.write("BLogic MCU: AI Accelerator Golden Vector Report (real TFLite requantization)\n")
    f.write("Source: micro_speech_quantized.tflite (extract_weights.py + generate_golden.py)\n")
    f.write("Class order: [" + ", ".join(CLASS_NAMES) + "]\n")
    f.write("=" * 60 + "\n")
    f.write(f"{'Scenario':>10s} | {'FC_out':>24s} | argmax | {'Class':>8s}\n")
    for _name in CLASS_NAMES:
        _inp, _co, _fc, _sm = found[_name]
        _am = int(np.argmax(_sm))
        _fs = "[" + ", ".join(str(int(_v)) for _v in _fc) + "]"
        f.write(f"{_name:>10s} | {_fs:>24s} | {_am:6d} | {CLASS_NAMES[_am]:>8s}\n")
print("golden_summary.txt written.")

print("\n=== Line count check ===")
expected_lines = {
    "input_silence.hex":     490, "input_unknown.hex":     490,
    "input_yes.hex":         490, "input_no.hex":          490,
    "conv_out_silence.hex": 1000, "conv_out_unknown.hex": 1000,
    "conv_out_yes.hex":     1000, "conv_out_no.hex":      1000,
    "output_silence.hex":      1, "output_unknown.hex":      1,
    "output_yes.hex":          1, "output_no.hex":           1,
}
all_ok = True
for fn, exp in expected_lines.items():
    p = os.path.join(OUTDIR, fn)
    if not os.path.isfile(p):
        print(f"  {fn:25s} FILE MISSING")
        all_ok = False
        continue
    with open(p) as f:
        n = sum(1 for _ in f)
    tag = "OK" if n == exp else f"EXPECTED {exp}"
    if n != exp:
        all_ok = False
    print(f"  {fn:25s} {n:>5d} lines   [{tag}]")

if all_ok:
    print("\n[RESULT] All golden files are ready. Now run the standalone TB:")
    print("        cd obj_dir_ai && ./ai_accel_tb_sim")
    print("        (or, if a rebuild is needed: make -f Makefile.verilator clean verilate)")
else:
    print("\n[WARNING] Some files are missing or have the wrong size.")
