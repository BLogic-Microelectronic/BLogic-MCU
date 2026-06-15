#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# tiny_conv_reference.py  -  YZ golden vektor uretici
# ============================================
import numpy as np
import os

np.random.seed(2026)

# Model boyutlari
INPUT_H, INPUT_W, INPUT_C = 49, 40, 1
CONV_KH, CONV_KW = 10, 8
CONV_FILTERS = 8
CONV_STRIDE_H, CONV_STRIDE_W = 2, 2
NUM_CLASSES = 4
CLASS_NAMES = ["yes", "no", "unknown", "silence"]

# RTL ile ayni shift degerleri
CONV_SHIFT = 11
FC_SHIFT   = 11

# Sadece agirlik dagilimini belirler, requant'ta kullanilmaz
CONV_W_SCALE = 0.00390625
FC_W_SCALE   = 0.00390625
INPUT_SCALE  = 0.0078125

# SAME padding sonuclari
PAD_TOP, PAD_BOTTOM = 4, 5
PAD_LEFT, PAD_RIGHT = 3, 3
CONV_OUT_H, CONV_OUT_W = 25, 20
FC_INPUT_SIZE = CONV_OUT_H * CONV_OUT_W * CONV_FILTERS

print("Model Mimarisi:")
print(f"  Giris      : {INPUT_H}x{INPUT_W}x{INPUT_C}")
print(f"  Conv2D     : {CONV_FILTERS} filtre, {CONV_KH}x{CONV_KW}")
print(f"  Conv Cikis : {CONV_OUT_H}x{CONV_OUT_W}x{CONV_FILTERS}")
print(f"  FC         : {FC_INPUT_SIZE} -> {NUM_CLASSES}")
print(f"  CONV_SHIFT={CONV_SHIFT}  FC_SHIFT={FC_SHIFT}  (RTL ile ayni)\n")


def generate_quantized_weights(shape, scale, zero_point=0):
    float_w = np.random.randn(*shape).astype(np.float32) * scale * 40
    return np.clip(np.round(float_w / scale) + zero_point, -128, 127).astype(np.int8)


conv_weights = generate_quantized_weights((CONV_FILTERS, CONV_KH, CONV_KW, INPUT_C), CONV_W_SCALE)
conv_bias = np.zeros(CONV_FILTERS, dtype=np.int32)
fc_weights = generate_quantized_weights((NUM_CLASSES, FC_INPUT_SIZE), FC_W_SCALE)
fc_bias = np.zeros(NUM_CLASSES, dtype=np.int32)


# RTL requant_relu ile birebir, zero-point yok
def quantized_conv2d(input_q, weights_q, bias_q):
    padded = np.pad(
        input_q,
        ((PAD_TOP, PAD_BOTTOM), (PAD_LEFT, PAD_RIGHT), (0, 0)),
        mode='constant', constant_values=0
    )
    out = np.zeros((CONV_OUT_H, CONV_OUT_W, CONV_FILTERS), dtype=np.int8)

    for f in range(CONV_FILTERS):
        for oh in range(CONV_OUT_H):
            for ow in range(CONV_OUT_W):
                acc = np.int64(bias_q[f])
                for khi in range(CONV_KH):
                    for kwi in range(CONV_KW):
                        for ci in range(INPUT_C):
                            ih = oh * CONV_STRIDE_H + khi
                            iw = ow * CONV_STRIDE_W + kwi
                            inp_val = np.int32(padded[ih, iw, ci])
                            w_val   = np.int32(weights_q[f, khi, kwi, ci])
                            acc += np.int64(inp_val) * np.int64(w_val)

                relu_v  = int(acc) if acc > 0 else 0
                shifted = relu_v >> CONV_SHIFT
                q_out   = min(shifted, 127)
                out[oh, ow, f] = np.int8(q_out)
    return out


# RTL requant_no_relu ile birebir, conv cikisini dogrudan kullanir
def quantized_fc(input_q, weights_q, bias_q):
    flat = input_q.flatten().astype(np.int32)
    out = np.zeros(NUM_CLASSES, dtype=np.int8)

    for o in range(NUM_CLASSES):
        acc = np.int64(bias_q[o])
        for i in range(FC_INPUT_SIZE):
            inp_val = np.int32(flat[i])
            w_val   = np.int32(weights_q[o, i])
            acc += np.int64(inp_val) * np.int64(w_val)

        shifted = int(acc) >> FC_SHIFT
        q_out   = min(max(shifted, -128), 127)
        out[o] = np.int8(q_out)
    return out


print("Golden vektorler uretiliyor (RTL shift-only aritmetigi)...")
print("=" * 60)
golden_inputs, golden_conv_outputs, golden_fc_outputs = {}, {}, {}

for cls_idx, cls_name in enumerate(CLASS_NAMES):
    np.random.seed(2026 + cls_idx * 100)
    input_float = np.random.randn(INPUT_H, INPUT_W, INPUT_C).astype(np.float32) * 0.5
    freq_start = cls_idx * 10
    input_float[:, freq_start:freq_start+10, :] += 1.0
    input_q = np.clip(np.round(input_float / INPUT_SCALE), -128, 127).astype(np.int8)

    conv_out = quantized_conv2d(input_q, conv_weights, conv_bias)
    fc_out = quantized_fc(conv_out, fc_weights, fc_bias)

    golden_inputs[cls_name] = input_q
    golden_conv_outputs[cls_name] = conv_out
    golden_fc_outputs[cls_name] = fc_out
    print(f"  [{cls_name.upper():>8s}] FC_out: {list(int(x) for x in fc_out)} "
          f"-> argmax={int(np.argmax(fc_out))} ({CLASS_NAMES[int(np.argmax(fc_out))]})")

out_dir = "sw/ai_model/golden_vectors"
os.makedirs(out_dir, exist_ok=True)


def save_int8_hex(data, filepath):
    flat = data.flatten()
    pad_len = (4 - len(flat) % 4) % 4
    if pad_len:
        flat = np.concatenate([flat, np.zeros(pad_len, dtype=np.int8)])
    with open(filepath, 'w') as f:
        for i in range(0, len(flat), 4):
            word = (int(flat[i])   & 0xFF) \
                 | ((int(flat[i+1]) & 0xFF) << 8) \
                 | ((int(flat[i+2]) & 0xFF) << 16) \
                 | ((int(flat[i+3]) & 0xFF) << 24)
            f.write(f"{word:08X}\n")


def save_int32_hex(data, filepath):
    with open(filepath, 'w') as f:
        for val in data.flatten():
            f.write(f"{int(val) & 0xFFFFFFFF:08X}\n")


save_int8_hex(conv_weights, os.path.join(out_dir, "weights_conv.hex"))
save_int8_hex(fc_weights,   os.path.join(out_dir, "weights_fc.hex"))
save_int32_hex(conv_bias,   os.path.join(out_dir, "bias_conv.hex"))
save_int32_hex(fc_bias,     os.path.join(out_dir, "bias_fc.hex"))

for cls_name in CLASS_NAMES:
    save_int8_hex(golden_inputs[cls_name],      os.path.join(out_dir, f"input_{cls_name}.hex"))
    save_int8_hex(golden_conv_outputs[cls_name], os.path.join(out_dir, f"conv_out_{cls_name}.hex"))
    save_int8_hex(golden_fc_outputs[cls_name],   os.path.join(out_dir, f"output_{cls_name}.hex"))


def array_to_c(name, data, dtype="int8_t"):
    flat = data.flatten()
    lines = [f"static const {dtype} {name}[{len(flat)}] = {{"]
    for i in range(0, len(flat), 16):
        lines.append("    " + ", ".join(f"{int(v):4d}" for v in flat[i:i+16]) + ",")
    lines.append("};")
    return "\n".join(lines)


header_path = os.path.join(out_dir, "blogic_ai_golden.h")
with open(header_path, 'w') as f:
    f.write("#ifndef BLOGIC_AI_GOLDEN_H\n#define BLOGIC_AI_GOLDEN_H\n\n#include <stdint.h>\n\n")
    f.write(array_to_c("golden_input_yes", golden_inputs["yes"]) + "\n\n")
    f.write(array_to_c("golden_output_yes", golden_fc_outputs["yes"]) + "\n\n")
    predicted_idx = int(np.argmax(golden_fc_outputs["yes"]))
    f.write(f"#define GOLDEN_YES_PREDICTED_CLASS {predicted_idx}\n\n#endif\n")

summary_path = os.path.join(out_dir, "golden_summary.txt")
with open(summary_path, 'w') as f:
    f.write("BLogic MCU -- YZ Hizlandirici Golden Vektor Raporu (RTL shift-only)\n")
    f.write("=" * 60 + "\n")
    f.write(f"{'Senaryo':>10s} | {'FC_out':>24s} | {'argmax':>6s} | {'Sinif':>8s}\n")
    for cls_name in CLASS_NAMES:
        fc = golden_fc_outputs[cls_name]
        am = int(np.argmax(fc))
        clean_fc_list = [int(x) for x in fc]
        f.write(f"{cls_name:>10s} | {str(clean_fc_list):>24s} | {am:>6d} | "
                f"{CLASS_NAMES[am]:>8s}\n")

print("\n" + "=" * 60)
print("Altin referans vektorleri uretildi (RTL ile bit-bit uyumlu).")
print("Cikti dosyalari:")
for fname in sorted(os.listdir(out_dir)):
    fpath = os.path.join(out_dir, fname)
    print(f"  {fname:30s} {os.path.getsize(fpath):>8d} bytes")
