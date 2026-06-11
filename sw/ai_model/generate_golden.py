"""
generate_golden.py — Adim 1.5b: TFLite interpreter ile gercek golden vektorler.

Eski random script'in (artik silindi/uzerine yazilacak) yerine, gercek
micro_speech_quantized.tflite modelini calistirip:
  - 4 farkli sinifa (silence, unknown, yes, no) denk dusen INT8 input
    vektorlerini rastgele aramayla bulur
  - Her sinif icin: input, ara conv_out (Relu), final fc_out (add_1)
    tensorlerini yakalar
  - Bu degerleri RTL'in $readmemh ile yukleyebilecegi .hex formatinda
    'sw/ai_model/golden_vectors/' altina yazar

Calistirma (repo kokunden, venv aktif):
    python3 generate_golden.py

Cikti:
    input_<sinif>.hex      490 satir  (1960 byte)
    conv_out_<sinif>.hex  1000 satir  (4000 byte, HWC [25,20,8])
    output_<sinif>.hex       1 satir  (4 byte, fc_out [4])

Layout dogrulamasi (RTL ile TFLite ayni mi):
    Input    : TFLite [1,1960] flat <-> RTL input_mem[ir*40+ic]    (ayni)
    Conv_out : TFLite Relu [1,25,20,8] C-flatten <-> RTL [r*160+c*8+f]  (ayni)
    Fc_out   : TFLite add_1 [1,4] <-> RTL fc_out_mem[0..3]              (ayni)
"""
import os
import sys
import numpy as np

try:
    from tensorflow.lite.python.interpreter import Interpreter
except ImportError:
    try:
        from tflite_runtime.interpreter import Interpreter
    except ImportError:
        sys.exit("tensorflow veya tflite-runtime kurulu degil.")

MODEL  = "sw/ai_model/micro_speech_quantized.tflite"
OUTDIR = "sw/ai_model/golden_vectors"

# TFLite Micro Speech standart sinif sirasi (labels_softmax tensor ciktisi)
CLASS_NAMES = ['silence', 'unknown', 'yes', 'no']

if not os.path.exists(MODEL):
    sys.exit(f"Model bulunamadi: {MODEL}")
os.makedirs(OUTDIR, exist_ok=True)

interp = Interpreter(MODEL, experimental_preserve_all_tensors=True)
interp.allocate_tensors()


# ============================================================
# Tensor index'lerini topla
# ============================================================
input_idx  = interp.get_input_details()[0]['index']
output_idx = interp.get_output_details()[0]['index']    # labels_softmax

relu_idx, add1_idx = None, None
for t in interp.get_tensor_details():
    if t['name'] == 'Relu':
        relu_idx = t['index']
    elif t['name'] == 'add_1':
        add1_idx = t['index']

if relu_idx is None or add1_idx is None:
    sys.exit(f"Ara tensor bulunamadi (Relu={relu_idx}, add_1={add1_idx})")

print(f"Tensor index'leri: input={input_idx}, Relu={relu_idx}, "
      f"add_1={add1_idx}, output={output_idx}\n")


# ============================================================
# Tek bir input icin model kosutur, sonuc topla
# ============================================================
def run_inference(inp_int8):
    """Geri donus: (argmax, conv_out_int8 [4000], fc_out_int8 [4], softmax_int8 [4])"""
    interp.set_tensor(input_idx, inp_int8.reshape(1, 1960).astype(np.int8))
    interp.invoke()
    softmax = interp.get_tensor(output_idx).flatten().astype(np.int8)
    conv_out = interp.get_tensor(relu_idx).astype(np.int8)        # [1,25,20,8]
    fc_out   = interp.get_tensor(add1_idx).flatten().astype(np.int8)  # [4]
    argmax   = int(np.argmax(softmax))
    return argmax, conv_out.flatten(), fc_out, softmax


# ============================================================
# 4 farkli sinifa denk dusen input ariyor — rastgele + fallback
# ============================================================
print("=== Sinif tarama (rastgele input) ===")
np.random.seed(2026)
found = {}   # class_name -> (input, conv_out, fc_out, softmax)
trial = 0
MAX_TRIALS = 8000

while len(found) < 4 and trial < MAX_TRIALS:
    trial += 1
    inp = np.random.randint(-128, 128, size=1960, dtype=np.int8)
    argmax, conv_out, fc_out, softmax = run_inference(inp)
    name = CLASS_NAMES[argmax]
    if name not in found:
        found[name] = (inp, conv_out, fc_out, softmax)
        print(f"  trial {trial:5d}: '{name}' bulundu  argmax={argmax}  "
              f"softmax={list(int(x) for x in softmax)}")


# Fallback: rastgele bulamadiklarimiz icin elle desenler dene
if len(found) < 4:
    print("\n=== Eksik siniflar icin fallback desenler ===")
    fallbacks = [
        ("dusuk_enerji",  np.random.randint(-128, -110, size=1960, dtype=np.int8)),
        ("orta_enerji",   np.random.randint(-30, 30, size=1960, dtype=np.int8)),
        ("yuksek_enerji", np.random.randint(80, 127, size=1960, dtype=np.int8)),
        ("hep_-128",      np.full(1960, -128, dtype=np.int8)),
        ("hep_0",         np.zeros(1960, dtype=np.int8)),
        ("hep_127",       np.full(1960, 127, dtype=np.int8)),
        ("alternan",      np.tile([-128, 127], 980).astype(np.int8)),
    ]
    for label, inp in fallbacks:
        if len(found) >= 4:
            break
        argmax, conv_out, fc_out, softmax = run_inference(inp)
        name = CLASS_NAMES[argmax]
        if name not in found:
            found[name] = (inp, conv_out, fc_out, softmax)
            print(f"  desen '{label}': '{name}' bulundu  argmax={argmax}  "
                  f"softmax={list(int(x) for x in softmax)}")


# Hala eksik varsa, ilk bulunani kopyala (TB her senaryo dosyasi bekliyor)
missing = [n for n in CLASS_NAMES if n not in found]
if missing:
    print(f"\nUYARI: Su siniflar bulunamadi: {missing}")
    print("        Bu siniflar icin ilk bulunan veriyi kopyaliyoruz; TB sayisal")
    print("        dogrulugu yine de test edebilir, sadece etiket anlamli olmaz.")
    first_key = next(iter(found))
    for n in missing:
        found[n] = found[first_key]
        print(f"          {n} <- {first_key} (kopya)")


# ============================================================
# Hex yazma
# ============================================================
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


print("\n=== Hex dosyalarini yaz ===")
for name in CLASS_NAMES:
    inp, conv_out, fc_out, softmax = found[name]
    save_int8_hex(inp,      os.path.join(OUTDIR, f"input_{name}.hex"))
    save_int8_hex(conv_out, os.path.join(OUTDIR, f"conv_out_{name}.hex"))
    save_int8_hex(fc_out,   os.path.join(OUTDIR, f"output_{name}.hex"))
    print(f"  {name:8s}: fc_out=[{fc_out[0]:4d}, {fc_out[1]:4d}, "
          f"{fc_out[2]:4d}, {fc_out[3]:4d}]  argmax={int(np.argmax(softmax))} "
          f"({CLASS_NAMES[int(np.argmax(softmax))]})")


# ============================================================
# Dogrulama
# ============================================================
# ============================================================
# golden_summary.txt (rapor; TB tarafindan okunmaz)
# ============================================================
with open(os.path.join(OUTDIR, "golden_summary.txt"), "w") as f:
    f.write("BLogic MCU -- YZ Hizlandirici Golden Vektor Raporu (gercek TFLite requant)\n")
    f.write("Kaynak: micro_speech_quantized.tflite (extract_weights.py + generate_golden.py)\n")
    f.write("Sinif sirasi: [" + ", ".join(CLASS_NAMES) + "]\n")
    f.write("=" * 60 + "\n")
    f.write(f"{'Senaryo':>10s} | {'FC_out':>24s} | argmax | {'Sinif':>8s}\n")
    for _name in CLASS_NAMES:
        _inp, _co, _fc, _sm = found[_name]
        _am = int(np.argmax(_sm))
        _fs = "[" + ", ".join(str(int(_v)) for _v in _fc) + "]"
        f.write(f"{_name:>10s} | {_fs:>24s} | {_am:6d} | {CLASS_NAMES[_am]:>8s}\n")
print("golden_summary.txt yazildi.")

print("\n=== Satir sayisi dogrulamasi ===")
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
        print(f"  {fn:25s} DOSYA YOK")
        all_ok = False
        continue
    with open(p) as f:
        n = sum(1 for _ in f)
    tag = "OK" if n == exp else f"BEKLENEN {exp}"
    if n != exp:
        all_ok = False
    print(f"  {fn:25s} {n:>5d} satir   [{tag}]")

if all_ok:
    print("\n[SONUC] Tum golden dosyalari hazir. Simdi standalone TB:")
    print("        cd obj_dir_ai && ./ai_accel_tb_sim")
    print("        (veya yeniden derlemek gerekirse: make -f Makefile.verilator clean verilate)")
else:
    print("\n[UYARI] Bazi dosyalar eksik veya yanlis boyutta.")
