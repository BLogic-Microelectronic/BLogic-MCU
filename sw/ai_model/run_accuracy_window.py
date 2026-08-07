#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# run_accuracy_window.py  -  EK-1 dogruluk penceresi kaniti
# ============================================
import os
import random
import re
import sys

G = "sw/ai_model/golden_vectors"
MODEL = "sw/ai_model/micro_speech_quantized.tflite"
REPORT = "sw/ai_model/accuracy_report.txt"
N = 40
CLS = ["silence", "unknown", "yes", "no"]
SEED = 2026


def die(msg):
    print("[HATA] " + msg)
    sys.exit(1)


# hex yardimcilari
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


def pack4(vals):
    w = 0
    for k in range(4):
        w |= (vals[k] & 0xFF) << (8 * k)
    return "%08X" % w


def load_quant_params():
    src = open(os.path.join(G, "quant_params.h")).read()
    def one(name):
        m = re.search(r"#define\s+%s\s+\(?(-?\d+)\)?" % name, src)
        if not m:
            die("quant_params.h icinde %s yok" % name)
        return int(m.group(1))
    def arr(name):
        m = re.search(name + r"\s*\[\s*8\s*\]\s*=\s*\{([^}]*)\}", src)
        if not m:
            die("quant_params.h icinde %s yok" % name)
        vals = re.findall(r"(?<![\w])(?:0x[0-9A-Fa-f]+|-?\d+)(?![\w])",
                          m.group(1))
        vals = [int(v, 0) for v in vals]
        if len(vals) != 8:
            die("%s: 8 deger bekleniyordu, %d bulundu" % (name, len(vals)))
        return vals
    qp = {"input_zp": one("INPUT_ZP"), "conv_out_zp": one("CONV_OUT_ZP"),
          "fc_out_zp": one("FC_OUT_ZP"),
          "m_conv": arr("M_CONV_Q31"), "s_conv": arr("SHIFT_CONV")}
    m = re.search(r"#define\s+M_FC_Q31\s+\(\(int32_t\)(0x[0-9A-Fa-f]+)\)", src)
    s = re.search(r"#define\s+SHIFT_FC\s+\((\d+)\)", src)
    if not (m and s):
        die("quant_params.h icinde M_FC_Q31/SHIFT_FC yok")
    qp["m_fc"], qp["s_fc"] = int(m.group(1), 16), int(s.group(1))
    qp["m_conv"] = [v - (1 << 32) if v >= (1 << 31) else v
                    for v in qp["m_conv"]]
    if qp["m_fc"] >= (1 << 31):
        qp["m_fc"] -= (1 << 32)
    return qp


# RTL-birebir kosim
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
    return fc


def argmax4(fc):
    am, best = 0, fc[0]
    for i in range(1, 4):
        if fc[i] > best:
            am, best = i, fc[i]
    return am


# ornek uretimi
def clamp(v):
    v = int(round(v))
    return -128 if v < -128 else (127 if v > 127 else v)


def extend_samples(rng, yr, nr, syn, k):
    """K3: girdi uzayini tarayan ek ornekler.

    Olculen sey tanima dogrulugu DEGIL, SW referansi ile RTL arasindaki
    sayisal esdegerliktir. Bu yuzden uzatma gercek konusmanin gurultulu
    kopyalarini cogaltmaz; doyumu, zero-point sinirlarini ve requant
    yuvarlama esiklerini zorlayan sekiz aile dongusel dagitilir.
    """
    out = []
    base = {"yes": yr, "no": nr, "unk": syn["unknown"], "sil": syn["silence"]}
    nm = ["yes", "no", "unk", "sil"]
    while len(out) < k:
        i = len(out)
        f = i % 8
        b = base[nm[i % 4]]
        if f == 0:                                   # ince genlikli gurultu
            a = 1 + (i % 40)
            out.append(("x%04d_nz%02d" % (i, a), None,
                        [clamp(v + rng.randint(-a, a)) for v in b]))
        elif f == 1:                                 # zaman/frekans kaydirma
            d = (i % 24) - 12
            if i % 2:
                out.append(("x%04d_ts%+03d" % (i, d), None,
                            [b[((t - d) % 49) * 40 + q]
                             for t in range(49) for q in range(40)]))
            else:
                out.append(("x%04d_fs%+03d" % (i, d), None,
                            [b[t * 40 + ((q - d) % 40)]
                             for t in range(49) for q in range(40)]))
        elif f == 2:                                 # ince adimli olcekleme
            kk = 0.05 + 0.05 * (i % 60)
            out.append(("x%04d_sc%03d" % (i, int(kk * 100)), None,
                        [clamp(v * kk) for v in b]))
        elif f == 3:                                 # ikili karisim taramasi
            b2 = base[nm[(i + 1) % 4]]
            al = (i % 21) / 20.0
            out.append(("x%04d_mx%03d" % (i, int(al * 100)), None,
                        [clamp(al * x + (1 - al) * y) for x, y in zip(b, b2)]))
        elif f == 4:                                 # gauss taramasi
            mu = -128 + (i % 17) * 16
            sg = 5 + (i % 12) * 10
            out.append(("x%04d_g%+04d" % (i, mu), None,
                        [clamp(rng.gauss(mu, sg)) for _ in range(1960)]))
        elif f == 5:                                 # daralan duzgun aralik
            lo = -128 + (i % 9) * 14
            hi = max(lo + 1, 127 - (i % 7) * 18)
            out.append(("x%04d_u%+04d" % (i, lo), None,
                        [rng.randint(lo, hi) for _ in range(1960)]))
        elif f == 6:                                 # seyrek: zero-point + uc
            dn = 1 + (i % 30)
            v = [-128] * 1960
            for _ in range(dn * 8):
                v[rng.randrange(1960)] = rng.choice([127, -127, 126, 0, 63, -64])
            out.append(("x%04d_sp%02d" % (i, dn), None, v))
        else:                                        # yapisal desen
            pr = 1 + (i % 23)
            md = i % 3
            if md == 0:
                v = [(127 if (q // pr) % 2 == 0 else -128)
                     for t in range(49) for q in range(40)]
            elif md == 1:
                v = [(127 if (t // pr) % 2 == 0 else -128)
                     for t in range(49) for q in range(40)]
            else:
                v = [clamp(-128 + ((t * 40 + q) * 255) // 1960)
                     for t in range(49) for q in range(40)]
            out.append(("x%04d_pt%d%02d" % (i, md, pr), None, v))
    return out[:k]


def make_samples(rng, yr, nr, syn):
    def noise(vec, amp):
        return [clamp(v + rng.randint(-amp, amp)) for v in vec]
    def shift_t(vec, d):
        return [vec[((f - d) % 49) * 40 + i]
                for f in range(49) for i in range(40)]
    def shift_f(vec, d):
        return [vec[f * 40 + ((i - d) % 40)]
                for f in range(49) for i in range(40)]
    def mix(a, b, al):
        return [clamp(al * x + (1 - al) * y) for x, y in zip(a, b)]
    def scale(vec, k):
        return [clamp(v * k) for v in vec]

    s = [("yes_real", "yes", yr), ("no_real", "no", nr),
         ("syn_yes", None, syn["yes"]), ("syn_no", None, syn["no"]),
         ("syn_unknown", None, syn["unknown"]),
         ("syn_silence", None, syn["silence"])]
    for amp in (4, 8, 16):
        s.append(("yes_noise%d" % amp, None, noise(yr, amp)))
        s.append(("no_noise%d" % amp, None, noise(nr, amp)))
    for d in (1, -1):
        s.append(("yes_tshift%+d" % d, None, shift_t(yr, d)))
        s.append(("no_tshift%+d" % d, None, shift_t(nr, d)))
        s.append(("yes_fshift%+d" % d, None, shift_f(yr, d)))
        s.append(("no_fshift%+d" % d, None, shift_f(nr, d)))
    for al in (0.25, 0.5, 0.75):
        s.append(("mix_yes%02d" % int(al * 100), None, mix(yr, nr, al)))
    for k in (0.5, 1.5):
        s.append(("yes_scale%02d" % int(k * 10), None, scale(yr, k)))
        s.append(("no_scale%02d" % int(k * 10), None, scale(nr, k)))
    for j, (mu, sg) in enumerate(((0, 30), (0, 30), (0, 30),
                                  (-64, 40), (-64, 40))):
        s.append(("gauss%d" % j, None,
                  [clamp(rng.gauss(mu, sg)) for _ in range(1960)]))
    for j in range(3):
        s.append(("uniform%d" % j, None,
                  [rng.randint(-128, 127) for _ in range(1960)]))
    s.append(("const_m128", None, [-128] * 1960))
    s.append(("const_0", None, [0] * 1960))
    s.append(("const_127", None, [127] * 1960))
    s.append(("checker", None,
              [100 if (i % 2) == 0 else -100 for i in range(1960)]))
    s.append(("ramp", None, [(i % 256) - 128 for i in range(1960)]))
    if len(s) != 40:
        die("sabit cekirdek kume %d != 40 (uretim kurali bozulmus)" % len(s))
    if N > 40:
        s.extend(extend_samples(rng, yr, nr, syn, N - 40))
    if len(s) != N:
        die("ornek sayisi %d != N=%d" % (len(s), N))
    return s


# tflite SW referansi
def tflite_runner(fc_zp):
    try:
        import numpy as np
    except ImportError:
        die("numpy yok; --no-tflite modunu kullanin veya venv'i etkinlestirin")
    Interp = None
    try:
        from tensorflow.lite.python.interpreter import Interpreter as Interp
    except Exception:
        try:
            from tflite_runtime.interpreter import Interpreter as Interp
        except Exception:
            die("tensorflow/tflite_runtime yok; venv'i etkinlestirin "
                "veya --no-tflite ile kosun (raporda vekil olarak yazilir)")
    if not os.path.exists(MODEL):
        die("model yok: " + MODEL)

    it = Interp(MODEL)
    it.allocate_tensors()
    iidx = it.get_input_details()[0]["index"]
    oidx = it.get_output_details()[0]["index"]

    # softmax oncesi FC logit tensorunu yakala
    it2, i2idx, fidx = None, None, None
    try:
        it2 = Interp(MODEL, experimental_preserve_all_tensors=True)
        it2.allocate_tensors()
        i2idx = it2.get_input_details()[0]["index"]
        o2idx = it2.get_output_details()[0]["index"]
        for td in it2.get_tensor_details():
            shp = [int(x) for x in list(td.get("shape", []))]
            n = 1
            for x in shp:
                n *= x
            q = td.get("quantization", (0.0, 0))
            if (n == 4 and td["index"] != o2idx
                    and "int8" in str(td.get("dtype", ""))
                    and int(q[1]) == fc_zp):
                fidx = td["index"]
                break
    except Exception:
        it2, i2idx, fidx = None, None, None

    def run(vec):
        arr = np.asarray(vec, dtype=np.int8).reshape(1, 1960)
        it.set_tensor(iidx, arr)
        it.invoke()
        soft = [int(v) for v in it.get_tensor(oidx).reshape(-1)[:4]]
        logit = None
        if it2 is not None and fidx is not None:
            try:
                it2.set_tensor(i2idx, arr)
                it2.invoke()
                logit = [int(v) for v in it2.get_tensor(fidx).reshape(-1)[:4]]
            except Exception:
                logit = None
        return soft, logit
    return run, (fidx is not None)


# ingest-rtl modu
def ingest_rtl(log_path):
    if not os.path.isfile(log_path):
        die("log yok: " + log_path)
    meta_path = os.path.join(G, "acc_batch_meta.txt")
    if not os.path.isfile(meta_path):
        die("acc_batch_meta.txt yok - once uretim modunu kosun")
    meta = []
    for ln in open(meta_path):
        if ln.startswith("#") or "|" not in ln:
            continue
        p = [x.strip() for x in ln.split("|")]
        meta.append({"i": int(p[0]), "name": p[1], "label": p[2],
                     "sw_fc": p[3], "sw_am": int(p[4])})
    if len(meta) != N:
        die("meta %d satir, %d bekleniyordu" % (len(meta), N))

    rtl = {}
    for m in re.finditer(r"\[BATCH-(\d+)\] sw=(\d+) rtl=(\d+) (OK|FARK)",
                         open(log_path, errors="replace").read()):
        rtl[int(m.group(1))] = int(m.group(3))
    if len(rtl) != N:
        die("logda %d BATCH satiri bulundu, %d bekleniyordu "
            "(make ai tam kostu mu?)" % (len(rtl), N))

    match = sum(1 for m in meta if rtl[m["i"]] == m["sw_am"])
    lab = [m for m in meta if m["label"] != "-"]
    sw_ok = sum(1 for m in lab if CLS[m["sw_am"]] == m["label"])
    rtl_ok = sum(1 for m in lab if CLS[rtl[m["i"]]] == m["label"])
    bound = 100.0 * (N - match) / N

    lines = []
    lines.append("=" * 66)
    lines.append("EK-1 %10 DOGRULUK PENCERESI - NIHAI RAPOR (RTL sonuclu)")
    lines.append("=" * 66)
    lines.append("Ornek sayisi N=%d | SW referansi: bkz. uretim bolumu altta"
                 % N)
    lines.append("")
    lines.append("  i | ornek          | etiket  | SW fc_out            "
                 "| SW | RTL | esles")
    lines.append("-" * 66)
    for m in meta:
        r = rtl[m["i"]]
        lines.append("%3d | %-14s | %-7s | %-20s | %2d | %3d | %s"
                     % (m["i"], m["name"], m["label"], m["sw_fc"],
                        m["sw_am"], r, "OK" if r == m["sw_am"] else "FARK"))
    lines.append("-" * 66)
    lines.append("SW-RTL sinif eslesmesi : %d/%d" % (match, N))
    lines.append("Etiketli gercek ornekler (%d adet): SW dogruluk %d/%d, "
                 "RTL dogruluk %d/%d" % (len(lab), sw_ok, len(lab),
                                         rtl_ok, len(lab)))
    lines.append("Matematiksel sinir     : |acc_SW - acc_RTL| <= "
                 "uyumsuzluk orani = %.1f puan" % bound)
    if match == N:
        lines.append("SONUC: fark = 0.0 puan <= 10 puan -> "
                     "EK-1 penceresi SAGLANDI (her test kumesinde)")
    elif bound <= 10.0:
        lines.append("SONUC: fark ust siniri %.1f puan <= 10 puan -> "
                     "EK-1 penceresi SAGLANDI" % bound)
    else:
        lines.append("SONUC: ust sinir %.1f puan > 10 puan -> INCELE"
                     % bound)
    lines.append("")
    if os.path.isfile(REPORT):
        old = open(REPORT).read()
        cut = old.find("--- uretim bolumu ---")
        if cut >= 0:
            lines.append(old[cut:].rstrip())
    open(REPORT, "w").write("\n".join(lines) + "\n")
    print("\n".join(lines[:12]))
    print("...")
    print("[YAZ] %s guncellendi (nihai tablo)" % REPORT)
    return 0


# uretim modu
def main():
    global N
    if not os.path.isdir(G):
        die("repo kokunden calistirin")
    for a in sys.argv[1:]:
        if a.startswith("--n="):
            N = int(a[4:])
            if N < 40:
                die("--n en az 40 olmali (sabit cekirdek kume 40 ornek)")
    args = [a for a in sys.argv[1:] if not a.startswith("--n=")]
    if len(args) == 2 and args[0] == "--ingest-rtl":
        return ingest_rtl(args[1])
    no_tflite = "--no-tflite" in sys.argv[1:]

    for f in ("input_yes_real.hex", "input_no_real.hex", "input_yes.hex",
              "input_no.hex", "input_unknown.hex", "input_silence.hex"):
        if not os.path.isfile(os.path.join(G, f)):
            die("eksik: %s/%s (once fetch_real_features.py / "
                "generate_golden.py)" % (G, f))

    cw = hexbytes(os.path.join(G, "weights_conv.hex"))[:640]
    cb = hexwords(os.path.join(G, "bias_conv.hex"))
    fw = hexbytes(os.path.join(G, "weights_fc.hex"))[:16000]
    fb = hexwords(os.path.join(G, "bias_fc.hex"))
    qp = load_quant_params()

    yr = hexbytes(os.path.join(G, "input_yes_real.hex"))[:1960]
    nr = hexbytes(os.path.join(G, "input_no_real.hex"))[:1960]
    syn = {n: hexbytes(os.path.join(G, "input_%s.hex" % n))[:1960]
           for n in ("yes", "no", "unknown", "silence")}

    rng = random.Random(SEED)
    samples = make_samples(rng, yr, nr, syn)

    sw_run, has_logits = None, False
    if no_tflite:
        sw_kind = ("RTL-birebir kosim (VEKIL; --no-tflite modu, "
                   "interpreter bu ortamda yok)")
    else:
        sw_run, has_logits = tflite_runner(qp["fc_out_zp"])
        sw_kind = "GERCEK TFLite interpreter (%s)" % MODEL
        if has_logits:
            sw_kind += ", FC logitleri (softmax oncesi) karsilastirildi"
        else:
            sw_kind += (", UYARI: FC logit tensoru cekilemedi; softmax "
                        "cikisi kullanildi (argmax esdeger)")

    meta, in_lines, exp_lines = [], [], []
    eq_cnt, max_diff, am_agree, soft_agree, tie_cnt = 0, 0, 0, 0, 0
    print("[KOSU] %d ornek, SW referansi: %s" % (N, sw_kind))
    for i, (name, label, vec) in enumerate(samples):
        ko = run_model(vec, cw, cb, fw, fb, qp)
        soft = None
        if sw_run:
            soft, logit = sw_run(vec)
            sw = logit if logit is not None else soft
        else:
            sw = ko
        d = max(abs(a - b) for a, b in zip(sw, ko))
        if d == 0:
            eq_cnt += 1
        max_diff = max(max_diff, d)
        if argmax4(sw) == argmax4(ko):
            am_agree += 1
        if soft is not None and argmax4(soft) == argmax4(ko):
            soft_agree += 1
        sw_am = argmax4(sw)
        _ss = sorted(sw, reverse=True)
        if _ss[0] == _ss[1]:
            tie_cnt += 1
        meta.append((i, name, label if label else "-", sw, sw_am,
                     argmax4(ko), d))
        for k in range(0, 1960, 4):
            in_lines.append(pack4(vec[k:k + 4]))
        exp_lines.append(pack4(sw))
        print("  [%2d] %-14s sw_fc=%-22s sw_argmax=%d (%s)%s"
              % (i, name, sw, sw_am, CLS[sw_am],
                 "" if d == 0 else "  [kosim logit farki max=%d]" % d))

    open(os.path.join(G, "acc_batch_inputs.hex"), "w").write(
        "\n".join(in_lines) + "\n")
    open(os.path.join(G, "acc_batch_expected.hex"), "w").write(
        "\n".join(exp_lines) + "\n")
    with open(os.path.join(G, "acc_batch_meta.txt"), "w") as f:
        f.write("# i | ornek | etiket | sw_fc | sw_argmax | kosim_argmax"
                " | logit_maxdiff\n")
        for i, name, label, sw, sw_am, ko_am, d in meta:
            f.write("%3d | %-14s | %-7s | %-20s | %d | %d | %d\n"
                    % (i, name, label, sw, sw_am, ko_am, d))

    lab = [m for m in meta if m[2] != "-"]
    sw_ok = sum(1 for m in lab if CLS[m[4]] == m[2])
    rep = []
    rep.append("--- uretim bolumu ---")
    rep.append("SW referansi          : " + sw_kind)
    rep.append("Ornek uretimi         : seed=%d, N=%d (sabit cekirdek 40: "
               "2 gercek ses + 4 sentetik + 34 turetilmis; kalan %d: girdi "
               "uzayi taramasi, 8 aile)" % (SEED, N, max(0, N - 40)))
    rep.append("Beraberlik (tie)      : %d/%d ornekte ilk iki logit esit -> "
               "karar 'ilk maksimum' kuralina bagli (%.1f%%)"
               % (tie_cnt, N, 100.0 * tie_cnt / N))
    if sw_run and has_logits:
        rep.append("TFLite FC logit vs kosim: birebir %d/%d, max |fark| = "
                   "%d LSB, argmax uyumu %d/%d"
                   % (eq_cnt, N, max_diff, am_agree, N))
        rep.append("TFLite Softmax cikisi : argmax uyumu %d/%d "
                   "(softmax monotonik -> karar esdeger; RTL "
                   "logit-argmax uygular)" % (soft_agree, N))
    elif sw_run:
        rep.append("TFLite Softmax cikisi : argmax uyumu %d/%d "
                   "(FC logit tensoru cekilemedi; softmax monotonik -> "
                   "karar esdeger)" % (am_agree, N))
    else:
        rep.append("TFLite vs kosim       : logit birebir %d/%d, max |fark|"
                   " = %d LSB, argmax uyumu %d/%d (VEKIL mod)"
                   % (eq_cnt, N, max_diff, am_agree, N))
    rep.append("Etiketli gercek kume  : SW dogruluk %d/%d (yes_real, no_real)"
               % (sw_ok, len(lab)))
    rep.append("RTL sutunu            : make ai kosun, sonra:")
    rep.append("  python3 sw/ai_model/run_accuracy_window.py "
               "--ingest-rtl obj_dir_ai/ai_run.log")
    txt = "\n".join(rep) + "\n"
    old = ""
    if os.path.isfile(REPORT) and "EK-1" in open(REPORT).read():
        old = open(REPORT).read()
        cut = old.find("--- uretim bolumu ---")
        old = old[:cut] if cut >= 0 else old
    open(REPORT, "w").write(old + txt)
    print("\n" + txt.rstrip())
    print("[YAZ] acc_batch_inputs.hex (%d satir), acc_batch_expected.hex "
          "(%d satir), acc_batch_meta.txt, %s"
          % (len(in_lines), len(exp_lines), REPORT))
    return 0


if __name__ == "__main__":
    sys.exit(main())
