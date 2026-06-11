"""
extract_weights_v2.py — Adim 1.4: GERCEK weights + quantization params

micro_speech_quantized.tflite modelinden:
  - DepthwiseConv2D weights/bias       (per-channel quantization)
  - FullyConnected weights/bias        (per-tensor quantization)
  - Quantization multipliers (M_q31)   ve right-shift degerleri
cikartilir; RTL'in $readmemh ile yukleyebilecegi .hex formatinda
ve C kodunun #include edebilecegi .h header olarak yazilir.

Calistirma (repo kokunden):
    python3 sw/ai_model/extract_weights_v2.py

Cikti:
    sw/ai_model/golden_vectors/
        weights_conv.hex        # 160 word (640 byte), RTL [8,10,8,1] layout
        bias_conv.hex           # 8 INT32 word
        weights_fc.hex          # 4000 word (16000 byte)
        bias_fc.hex             # 4 INT32 word
        quant_params.h          # C header (M_conv[8], shift_conv[8], M_fc, shift_fc, zp'ler)
        quant_params.hex        # ayni veri hex olarak (RTL preload icin)
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
os.makedirs(OUTDIR, exist_ok=True)

if not os.path.exists(MODEL):
    sys.exit(f"Model bulunamadi: {MODEL}")

interp = Interpreter(MODEL)
interp.allocate_tensors()


# ============================================================
# Tensorleri isim ile bul
# ============================================================
def get_t(name):
    for t in interp.get_tensor_details():
        if t['name'] == name:
            return t
    raise KeyError(f"Tensor bulunamadi: {name}")


input_t     = get_t("Reshape_1")                          # int8, [1,1960]
conv_w_t    = get_t("first_weights/read")                 # int8, [1,10,8,8] per-channel
conv_b_t    = get_t("Conv2D_bias")                        # int32, [8] per-channel
conv_out_t  = get_t("Relu")                               # int8, [1,25,20,8]
fc_w_t      = get_t("final_fc_weights/read/transpose")    # int8, [4,4000] per-tensor
fc_b_t      = get_t("MatMul_bias")                        # int32, [4]
fc_out_t    = get_t("add_1")                              # int8, [1,4] — softmax girisi


# ============================================================
# Quantization parametrelerini topla
# ============================================================
def qp(t, idx=0):
    s = t['quantization_parameters']['scales']
    z = t['quantization_parameters']['zero_points']
    return float(s[idx]), int(z[idx])


input_scale,    input_zp    = qp(input_t)
conv_out_scale, conv_out_zp = qp(conv_out_t)
fc_w_scale,     fc_w_zp     = qp(fc_w_t)
fc_out_scale,   fc_out_zp   = qp(fc_out_t)

# Conv per-channel: 8 scale degeri
conv_w_scales = np.array(conv_w_t['quantization_parameters']['scales'], dtype=np.float64)
conv_w_zps    = np.array(conv_w_t['quantization_parameters']['zero_points'])  # hepsi 0 olmali


# ============================================================
# TFLite QuantizeMultiplier — M (float) → (M_q31, right_shift)
# Uygulama:  out = (acc * M_q31 + (1 << (right_shift-1))) >> right_shift
# ============================================================
def quantize_multiplier(M):
    if M == 0.0:
        return 0, 0
    sign = -1 if M < 0 else 1
    M_abs = abs(M)
    # frexp: M_abs = q * 2^exp, 0.5 <= q < 1.0
    q, exp_ = np.frexp(M_abs)
    q_fixed = int(round(q * (1 << 31)))
    if q_fixed == (1 << 31):
        q_fixed //= 2
        exp_ += 1
    q_fixed = min(q_fixed, (1 << 31) - 1)
    M_q31 = sign * q_fixed
    # M_abs = q_fixed/2^31 * 2^exp_  =>  M_abs = q_fixed >> (31 - exp_)
    # Yani uygulama: (acc * M_q31) >> (31 - exp_)
    right_shift = 31 - exp_
    return int(M_q31), int(right_shift)


# Per-channel conv (8 filtre icin)
M_conv_floats = (input_scale * conv_w_scales) / conv_out_scale
M_conv_q31 = []
shift_conv = []
for f in range(8):
    mq, rs = quantize_multiplier(M_conv_floats[f])
    M_conv_q31.append(mq)
    shift_conv.append(rs)

# Per-tensor fc
M_fc_float = (conv_out_scale * fc_w_scale) / fc_out_scale
M_fc_q31, shift_fc = quantize_multiplier(M_fc_float)


# ============================================================
# Weights ve bias degerlerini cek
# ============================================================
conv_w = interp.get_tensor(conv_w_t['index']).astype(np.int8)    # [1,10,8,8]
conv_b = interp.get_tensor(conv_b_t['index']).astype(np.int32)   # [8]
fc_w   = interp.get_tensor(fc_w_t['index']).astype(np.int8)      # [4,4000]
fc_b   = interp.get_tensor(fc_b_t['index']).astype(np.int32)     # [4]

# TFLite layout [1, 10, 8, 8] (in_c, kh, kw, depth_mult) →
# RTL layout   [8, 10, 8, 1] (filter,  kh, kw, in_c)
# transpose axis (3, 1, 2, 0): yeni axis 0 = eski axis 3 (depth_mult/filter)
conv_w_rtl = np.transpose(conv_w, (3, 1, 2, 0)).copy()           # [8,10,8,1]

print(f"conv_w original shape    : {conv_w.shape}  (TFLite: in_c, kh, kw, depth_mult)")
print(f"conv_w RTL-layout shape  : {conv_w_rtl.shape}  (RTL: filter, kh, kw, in_c)")
print(f"conv_w dtype             : {conv_w.dtype}")
print(f"conv_bias shape          : {conv_b.shape}, dtype: {conv_b.dtype}")
print(f"fc_w shape               : {fc_w.shape}, dtype: {fc_w.dtype}")
print(f"fc_bias shape            : {fc_b.shape}, dtype: {fc_b.dtype}")


# ============================================================
# .hex dosyalari (RTL $readmemh formati: her satir 32-bit hex word)
# ============================================================
def save_int8_hex(data, path):
    flat = data.flatten().astype(np.int8)
    pad = (4 - len(flat) % 4) % 4
    if pad:
        flat = np.concatenate([flat, np.zeros(pad, dtype=np.int8)])
    with open(path, 'w') as f:
        for i in range(0, len(flat), 4):
            w = (int(flat[i  ]) & 0xFF)        \
              | ((int(flat[i+1]) & 0xFF) << 8) \
              | ((int(flat[i+2]) & 0xFF) << 16)\
              | ((int(flat[i+3]) & 0xFF) << 24)
            f.write(f"{w:08X}\n")


def save_int32_hex(data, path):
    with open(path, 'w') as f:
        for v in data.flatten():
            f.write(f"{int(v) & 0xFFFFFFFF:08X}\n")


save_int8_hex (conv_w_rtl, os.path.join(OUTDIR, "weights_conv.hex"))
save_int32_hex(conv_b,     os.path.join(OUTDIR, "bias_conv.hex"))
save_int8_hex (fc_w,       os.path.join(OUTDIR, "weights_fc.hex"))
save_int32_hex(fc_b,       os.path.join(OUTDIR, "bias_fc.hex"))


# ============================================================
# quant_params.hex — RTL preload icin
# Sirayla: input_zp, conv_out_zp, fc_out_zp,
#          M_conv[0..7], shift_conv[0..7], M_fc, shift_fc
# Toplam 21 word
# ============================================================
with open(os.path.join(OUTDIR, "quant_params.hex"), 'w') as f:
    for v in [input_zp & 0xFFFFFFFF,
              conv_out_zp & 0xFFFFFFFF,
              fc_out_zp & 0xFFFFFFFF]:
        f.write(f"{v:08X}\n")
    for m in M_conv_q31:
        f.write(f"{m & 0xFFFFFFFF:08X}\n")
    for s in shift_conv:
        f.write(f"{s & 0xFFFFFFFF:08X}\n")
    f.write(f"{M_fc_q31 & 0xFFFFFFFF:08X}\n")
    f.write(f"{shift_fc & 0xFFFFFFFF:08X}\n")


# ============================================================
# quant_params.h — C kodu CSR'lara yazmak icin
# ============================================================
with open(os.path.join(OUTDIR, "quant_params.h"), 'w') as f:
    f.write("/* Otomatik uretildi — extract_weights_v2.py */\n")
    f.write("#ifndef QUANT_PARAMS_H\n#define QUANT_PARAMS_H\n"
            + "#ifdef __riscv\n/* yalin metal: toolchain'de newlib basligi yok; ilp32 */\n# ifndef BLOGIC_MCU_H\ntypedef signed int int32_t;\n# endif\n#else\n# include <stdint.h>\n#endif\n\n")
    f.write(f"#define INPUT_ZP    ({int(input_zp)})\n")
    f.write(f"#define CONV_OUT_ZP ({int(conv_out_zp)})\n")
    f.write(f"#define FC_OUT_ZP   ({int(fc_out_zp)})\n\n")
    f.write("static const int32_t M_CONV_Q31[8] = {\n    ")
    f.write(", ".join(f"(int32_t)0x{m & 0xFFFFFFFF:08X}" for m in M_conv_q31))
    f.write("\n};\n\n")
    f.write("static const int32_t SHIFT_CONV[8] = {\n    ")
    f.write(", ".join(str(s) for s in shift_conv))
    f.write("\n};\n\n")
    f.write(f"#define M_FC_Q31   ((int32_t)0x{M_fc_q31 & 0xFFFFFFFF:08X})\n")
    f.write(f"#define SHIFT_FC   ({shift_fc})\n\n")
    f.write("#endif\n")


# ============================================================
# Rapor yazdir
# ============================================================
print("\n" + "=" * 60)
print("KUANTIZASYON PARAMETRELERI")
print("=" * 60)
print(f"input_scale     = {input_scale:.6e}    input_zp     = {int(input_zp)}")
print(f"conv_out_scale  = {conv_out_scale:.6e}    conv_out_zp  = {int(conv_out_zp)}")
print(f"fc_w_scale      = {fc_w_scale:.6e}    fc_w_zp      = {fc_w_zp}")
print(f"fc_out_scale    = {fc_out_scale:.6e}    fc_out_zp    = {int(fc_out_zp)}")

print("\n--- Per-channel CONV requant ---")
print(f"{'f':>2} {'conv_w_scale':>14} {'M_float':>14} {'M_q31':>12} {'shift':>6}")
for f in range(8):
    print(f"{f:>2} {conv_w_scales[f]:>14.6e} {M_conv_floats[f]:>14.6e} "
          f"0x{M_conv_q31[f] & 0xFFFFFFFF:08X} {shift_conv[f]:>6}")

print("\n--- Per-tensor FC requant ---")
print(f"M_fc_float = {M_fc_float:.6e}")
print(f"M_fc_q31   = 0x{M_fc_q31 & 0xFFFFFFFF:08X}")
print(f"shift_fc   = {shift_fc}")

print("\n" + "=" * 60)
print("YAZILAN DOSYALAR")
print("=" * 60)
for fn in sorted(os.listdir(OUTDIR)):
    p = os.path.join(OUTDIR, fn)
    if os.path.isfile(p):
        print(f"  {fn:30s} {os.path.getsize(p):>7d} bytes")

print("\nSatir sayilari (RTL kontrolu icin):")
for fn in ["weights_conv.hex", "bias_conv.hex",
           "weights_fc.hex",   "bias_fc.hex",
           "quant_params.hex"]:
    p = os.path.join(OUTDIR, fn)
    with open(p) as f:
        lines = sum(1 for _ in f)
    expected = {"weights_conv.hex": 160, "bias_conv.hex": 8,
                "weights_fc.hex": 4000, "bias_fc.hex": 4,
                "quant_params.hex": 21}
    tag = "OK" if lines == expected[fn] else f"BEKLENEN {expected[fn]}"
    print(f"  {fn:25s} {lines:>5d} satir   [{tag}]")
