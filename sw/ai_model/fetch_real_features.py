#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# fetch_real_features.py - gercek ses golden uretimi
# ============================================
import hashlib
import os
import re
import subprocess
import sys
import urllib.request

G = "sw/ai_model/golden_vectors"

TAGS = ["v2.4.1", "v2.4.0", "v2.3.1", "v2.3.0", "v2.2.0"]
URL_T = ("https://raw.githubusercontent.com/tensorflow/tensorflow/{tag}/"
         "tensorflow/lite/micro/examples/micro_speech/micro_features/"
         "{name}_micro_features_data.cc")

EXPECT = {"yes": 2, "no": 3}   # sinif sirasi: silence,unknown,yes,no
CLS = ["silence", "unknown", "yes", "no"]


def die(msg):
    print("[HATA] " + msg)
    sys.exit(1)


def hexbytes(path):
    out = []
    with open(path) as f:
        for ln in f:
            w = int(ln.strip(), 16)
            for k in range(4):
                b = (w >> (8 * k)) & 0xFF
                out.append(b - 256 if b >= 128 else b)
    return out


def hexwords(path):
    out = []
    with open(path) as f:
        for ln in f:
            w = int(ln.strip(), 16)
            out.append(w - (1 << 32) if w >= (1 << 31) else w)
    return out


def save_int8_hex(vals, path):
    with open(path, "w") as f:
        for i in range(0, len(vals), 4):
            w = 0
            for k in range(4):
                w |= (vals[i + k] & 0xFF) << (8 * k)
            f.write("%08X\n" % w)


def load_quant_params():
    src = open(os.path.join(G, "quant_params.h")).read()
    def one(name):
        m = re.search(r"#define\s+%s\s+\(?(-?\d+)\)?" % name, src)
        if not m:
            die("quant_params.h icinde %s bulunamadi" % name)
        return int(m.group(1))
    def arr(name):
        m = re.search(name + r"\s*\[\s*8\s*\]\s*=\s*\{([^}]*)\}", src)
        if not m:
            die("quant_params.h icinde %s bulunamadi" % name)
        # '(int32_t)' icindeki '32' sayilmasin diye kelime-siniri
        vals = re.findall(r"(?<![\w])(?:0x[0-9A-Fa-f]+|-?\d+)(?![\w])",
                          m.group(1))
        vals = [int(v, 0) for v in vals]
        if len(vals) != 8:
            die("%s: 8 deger bekleniyordu, %d bulundu" % (name, len(vals)))
        return vals
    qp = {
        "input_zp":    one("INPUT_ZP"),
        "conv_out_zp": one("CONV_OUT_ZP"),
        "fc_out_zp":   one("FC_OUT_ZP"),
        "m_conv":      arr("M_CONV_Q31"),
        "s_conv":      arr("SHIFT_CONV"),
    }
    m = re.search(r"#define\s+M_FC_Q31\s+\(\(int32_t\)(0x[0-9A-Fa-f]+)\)", src)
    s = re.search(r"#define\s+SHIFT_FC\s+\((\d+)\)", src)
    if not (m and s):
        die("quant_params.h icinde M_FC_Q31/SHIFT_FC bulunamadi")
    qp["m_fc"] = int(m.group(1), 16)
    qp["s_fc"] = int(s.group(1))
    # Q31 sabitleri isaretli yorumlanir
    qp["m_conv"] = [v - (1 << 32) if v >= (1 << 31) else v for v in qp["m_conv"]]
    qp["m_fc"] = qp["m_fc"] - (1 << 32) if qp["m_fc"] >= (1 << 31) else qp["m_fc"]
    return qp


def s32(v):
    v &= 0xFFFFFFFF
    return v - (1 << 32) if v >= (1 << 31) else v


def requant(acc, M, sh, zp, relu):
    biased = s32((acc * M + (1 << (sh - 1))) >> sh) + zp
    lo = zp if relu else -128
    return 127 if biased > 127 else (lo if biased < lo else biased)


def run_model(inp, cw, cb, fw, fb, qp):
    co = [0] * 4000
    for f in range(8):
        wf = cw[f * 80:(f + 1) * 80]
        for r in range(25):
            for c in range(20):
                acc = 0
                for kh in range(10):
                    ir = r * 2 + kh - 4
                    if ir < 0 or ir >= 49:
                        continue
                    base = ir * 40
                    wrow = kh * 8
                    for kw in range(8):
                        ic = c * 2 + kw - 3
                        if ic < 0 or ic >= 40:
                            continue
                        acc += (inp[base + ic] - qp["input_zp"]) * wf[wrow + kw]
                co[(r * 20 + c) * 8 + f] = requant(
                    acc + cb[f], qp["m_conv"][f], qp["s_conv"][f],
                    qp["conv_out_zp"], True)
    fc = []
    for o in range(4):
        acc = fb[o]
        row = fw[o * 4000:(o + 1) * 4000]
        for i in range(4000):
            acc += (co[i] - qp["conv_out_zp"]) * row[i]
        fc.append(requant(acc, qp["m_fc"], qp["s_fc"], qp["fc_out_zp"], False))
    return co, fc


def parse_cc(blob, label):
    text = blob.decode("utf-8", errors="replace")
    m = re.search(r"\[\]\s*(?:\w+\s*)*=\s*\{(.*?)\};", text, re.S)
    if not m:
        die("%s: C dizisi bulunamadi (beklenen '...[] = { ... };')" % label)
    vals = [int(v) for v in re.findall(r"-?\d+", m.group(1))]
    if len(vals) != 1960:
        die("%s: %d deger bulundu, 1960 bekleniyordu" % (label, len(vals)))
    return vals


def int8_candidates(vals):
    if min(vals) < 0:
        if min(vals) < -128 or max(vals) > 127:
            die("deger araligi int8 disi: [%d, %d]" % (min(vals), max(vals)))
        return [("int8 (dogrudan)", vals)]
    if max(vals) > 255:
        die("deger araligi bayt disi: max=%d" % max(vals))
    return [
        ("uint8-128 (uint8 oznitelik -> int8)", [v - 128 for v in vals]),
        ("two's-complement (bayt -> int8)",
         [v - 256 if v > 127 else v for v in vals]),
    ]


def fetch(name, local_path):
    if local_path:
        blob = open(local_path, "rb").read()
        src = "yerel: " + local_path
        return blob, src
    last = None
    for tag in TAGS:
        url = URL_T.format(tag=tag, name=name)
        try:
            with urllib.request.urlopen(url, timeout=20) as r:
                blob = r.read()
            if b"{" in blob and len(blob) > 4000:
                return blob, url
            last = "beklenmedik icerik: " + url
        except Exception as e:
            last = "%s -> %s" % (url, e)
    print("[HATA] Indirme basarisiz. Son deneme: %s" % last)
    print("  Elle indirip yerel-yol moduyla calistirin:")
    print("    python3 sw/ai_model/fetch_real_features.py yes.cc no.cc")
    print("  Dosyalar (herhangi bir tensorflow v2.3/v2.4 etiketi):")
    for n in ("yes", "no"):
        print("    " + URL_T.format(tag=TAGS[0], name=n))
    sys.exit(1)


def main():
    if not os.path.isdir(G):
        die("repo kokunden calistirin (sw/ai_model/golden_vectors bulunamadi)")
    for f in ("weights_conv.hex", "bias_conv.hex", "weights_fc.hex",
              "bias_fc.hex", "quant_params.h"):
        if not os.path.isfile(os.path.join(G, f)):
            die("eksik: %s/%s (once extract_weights.py)" % (G, f))

    local = {"yes": None, "no": None}
    if len(sys.argv) == 3:
        local["yes"], local["no"] = sys.argv[1], sys.argv[2]
    elif len(sys.argv) != 1:
        die("kullanim: fetch_real_features.py [yes.cc no.cc]")

    cw = hexbytes(os.path.join(G, "weights_conv.hex"))[:640]
    cb = hexwords(os.path.join(G, "bias_conv.hex"))
    fw = hexbytes(os.path.join(G, "weights_fc.hex"))[:16000]
    fb = hexwords(os.path.join(G, "bias_fc.hex"))
    qp = load_quant_params()

    raw = {}
    for name in ("yes", "no"):
        blob, src = fetch(name, local[name])
        print("[KAYNAK] %s: %s" % (name, src))
        print("         sha256=%s (%d bayt)"
              % (hashlib.sha256(blob).hexdigest(), len(blob)))
        raw[name] = parse_cc(blob, name)

    # ayni kodlamayi iki dosyada da dene
    chosen = None
    for mode, _ in int8_candidates(raw["yes"]):
        cand = {}
        ok = True
        for name in ("yes", "no"):
            cands = dict(int8_candidates(raw[name]))
            if mode not in cands:
                ok = False
                break
            inp = cands[mode]
            co, fc = run_model(inp, cw, cb, fw, fb, qp)
            am = max(range(4), key=lambda i: fc[i])
            print("[KOSIM] %-3s | mod: %-36s | fc_out=%s argmax=%d (%s)"
                  % (name, mode, fc, am, CLS[am]))
            if am != EXPECT[name]:
                ok = False
                break
            cand[name] = (inp, co, fc, am)
        if ok:
            chosen = (mode, cand)
            break
    if chosen is None:
        die("hicbir kodlama adayi beklenen siniflari vermedi "
            "(yes->2, no->3). Kaynak dosyalar yanlis olabilir; "
            "HICBIR dosya yazilmadi.")

    mode, cand = chosen
    print("\n[SECIM] kodlama: %s" % mode)
    for name in ("yes", "no"):
        inp, co, fc, am = cand[name]
        save_int8_hex(inp, os.path.join(G, "input_%s_real.hex" % name))
        save_int8_hex(co, os.path.join(G, "conv_out_%s_real.hex" % name))
        save_int8_hex(fc, os.path.join(G, "output_%s_real.hex" % name))
        print("[YAZ] input/conv_out/output_%s_real.hex  fc_out=%s -> %s"
              % (name, fc, CLS[am]))

    # golden_summary.txt EK-3 bolumu (varsa yenilenir)
    spath = os.path.join(G, "golden_summary.txt")
    marker = "--- EK-3 gercek ses oznitelikleri ---"
    body = ""
    if os.path.isfile(spath):
        body = open(spath).read()
        if marker in body:
            body = body.split(marker)[0].rstrip() + "\n"
    lines = [marker]
    lines.append("Kaynak: tflite-micro micro_speech micro_features "
                 "(1 sn mono WAV -> 49x40 oznitelik)")
    for name in ("yes", "no"):
        _, _, fc, am = cand[name]
        lines.append("%9s_real | %24s | %6d | %8s"
                     % (name, fc, am, CLS[am]))
    lines.append("Kodlama tespiti: %s; kabul kosulu yes->2 ve no->3 saglandi."
                 % mode)
    with open(spath, "w") as f:
        f.write(body + "\n".join(lines) + "\n")
    print("[YAZ] golden_summary.txt EK-3 bolumu guncellendi")

    # SoC on-yukleme imajini yeniden uret
    print("\n[CALISTIR] generate_ai_sram_init.py")
    rc = subprocess.call([sys.executable,
                          "sw/ai_model/generate_ai_sram_init.py"])
    if rc != 0:
        die("generate_ai_sram_init.py rc=%d" % rc)

    print("\n[SONUC] EK-3 gercek-ses golden zinciri hazir. Sonraki adimlar:")
    print("  make ai       # beklenen: [ADIM E] PASS - 6/6 senaryo")
    print("  make soc-ai   # beklenen: yes_real, argmax=2, [SOC-AI] PASS")
    return 0


if __name__ == "__main__":
    sys.exit(main())
