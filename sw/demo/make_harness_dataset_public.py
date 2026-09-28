#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# make_harness_dataset_public.py - juri public_dataset'inden turetilmis regresyon seti
# ============================================
# make_harness_dataset.py kendi uretecimizin sentetik ailelerinden vektor uretir.
# Bu betik ise TOHUM OLARAK YARISMANIN KENDI public_dataset'ini kullanir: 156 gercek
# konusma ozniteligi (Speech Commands kaynakli, juri paketiyle gelen 1960 int8 dosyalar).
# Ilk 156 ornek onlarin vektorunun AYNISIDIR (aug=id); geri kalanlar bu vektorlerden
# belirlenimli (tohumlu) donusumlerle turetilir:
#   shift  zaman ekseninde dairesel kaydirma (+-1..6 kare; kare = 40 oznitelik)
#   gain   sifir noktasi (-128) etrafinda olcekleme, doyumlu
#   noise  +-1..3 LSB duzgun gurultu, doyumlu
#   mix    iki taban vektorun zaman ekseninde eklenmesi (ilk k kare A, kalani B)
#   mask   rastgele bir zaman penceresinin sifir noktasina cekilmesi
#
# 'golden' sutunu HER ZAMAN bit-tam saf Python int8 referansindan hesaplanir
# (run_accuracy_window.run_model + argmax4) - taban vektorun etiketi kopyalanmaz,
# cunku donusum sinifi degistirebilir. 'truth' yalniz aug=id satirlarinda doludur
# (orada juri manifestindeki gercek etiket tasinir); turetilmis satirlarda bos birakilir.
# Ek 'src' ve 'aug' sutunlari kaynak vektoru ve donusumu belgeler; juri araci
# tanimadigi sutunlari yok sayar (kendi setimizdeki sw_fc_int8 gibi).
#
# Kullanim:
#   python sw/demo/make_harness_dataset_public.py --public C:\demo\demo_program\public_dataset \
#          --n 10000 --seed 31082026 --out C:\demo\public_derived_10000
#   python demo_harness.py run -c team_icd.json --manifest C:\demo\public_derived_10000\manifest.csv -o C:\demo\results_pub10k
import argparse
import csv
import json
import os
import random
import re
import sys
import time

BURASI = os.path.dirname(os.path.abspath(__file__))
AI = os.path.normpath(os.path.join(BURASI, "..", "ai_model"))
sys.path.insert(0, AI)
import run_accuracy_window as raw  # noqa: E402

raw.G = os.path.join(AI, "golden_vectors")
CLS = raw.CLS
N = 1960          # 49 zaman adimi x 40 oznitelik
FRAME = 40        # bir zaman adimi
STEPS = N // FRAME
ZP = -128         # giris sifir noktasi (ai_accelerator.sv INPUT_ZP)


def load_model():
    G = raw.G
    cw = raw.hexbytes(os.path.join(G, "weights_conv.hex"))[:640]
    cb = raw.hexwords(os.path.join(G, "bias_conv.hex"))
    fw = raw.hexbytes(os.path.join(G, "weights_fc.hex"))[:16000]
    fb = raw.hexwords(os.path.join(G, "bias_fc.hex"))
    qp = raw.load_quant_params()
    return cw, cb, fw, fb, qp


def sat(v):
    return -128 if v < -128 else (127 if v > 127 else v)


def load_public(pdir):
    """juri manifestini ve 1960 baytlik vektorlerini oku"""
    man = os.path.join(pdir, "manifest.csv")
    taban = []
    with open(man, newline="", encoding="utf-8-sig") as f:
        for r in csv.DictReader(f):
            yol = os.path.join(pdir, r["file"].replace("/", os.sep))
            with open(yol, "rb") as vf:
                ham = vf.read()
            if len(ham) != N:
                raise SystemExit("%s: %d bayt, %d bekleniyordu" % (yol, len(ham), N))
            vec = [b - 256 if b > 127 else b for b in ham]
            taban.append({"ad": r.get("name") or os.path.basename(r["file"]),
                          "truth": (r.get("truth") or "").strip(),
                          "jgolden": (r.get("golden") or "").strip(),
                          "vec": vec})
    return taban


def donustur(rng, taban, i):
    """i. ornegi uret: ilk len(taban) ornek birebir kopya, sonrasi turetilmis"""
    if i < len(taban):
        t = taban[i]
        return t["vec"][:], "id", t["ad"], t["truth"], t["jgolden"]

    a = taban[rng.randrange(len(taban))]
    v = a["vec"][:]
    tur = rng.choice(("shift", "gain", "noise", "mix", "mask"))

    if tur == "shift":
        k = rng.choice([-6, -4, -3, -2, -1, 1, 2, 3, 4, 6])
        d = (k * FRAME) % N
        v = v[-d:] + v[:-d] if d else v
        etiket = "shift%+d" % k
    elif tur == "gain":
        g = rng.choice((0.55, 0.7, 0.85, 1.15, 1.3, 1.6))
        v = [sat(int(round((x - ZP) * g)) + ZP) for x in v]
        etiket = "gain%.2f" % g
    elif tur == "noise":
        amp = rng.choice((1, 2, 3))
        v = [sat(x + rng.randint(-amp, amp)) for x in v]
        etiket = "noise%d" % amp
    elif tur == "mix":
        b = taban[rng.randrange(len(taban))]
        k = rng.randrange(8, STEPS - 8)
        v = a["vec"][:k * FRAME] + b["vec"][k * FRAME:]
        etiket = "mix@%d_%s" % (k, b["ad"].split("_")[0])
    else:  # mask
        k = rng.randrange(4, 16)
        s = rng.randrange(0, STEPS - k)
        v = v[:]
        for j in range(s * FRAME, (s + k) * FRAME):
            v[j] = ZP
        etiket = "mask%d@%d" % (k, s)

    return v, tur, "%s_%s" % (a["ad"], etiket), "", ""


def safe(name):
    return re.sub(r"[^A-Za-z0-9_+-]+", "_", name)[:60]


def main():
    ap = argparse.ArgumentParser(description="juri public_dataset'inden turetilmis regresyon seti")
    ap.add_argument("--public", required=True, help="juri public_dataset dizini (manifest.csv + vectors/)")
    ap.add_argument("--n", type=int, default=10000, help="uretilecek vektor sayisi")
    ap.add_argument("--seed", type=int, default=31082026, help="tohum")
    ap.add_argument("--out", required=True, help="cikti dizini")
    a = ap.parse_args()

    taban = load_public(a.public)
    print("taban: %d juri vektoru (%s)" % (len(taban), a.public))
    cw, cb, fw, fb, qp = load_model()

    vdir = os.path.join(a.out, "vectors")
    os.makedirs(vdir, exist_ok=True)
    rng = random.Random(a.seed)
    rows, counts, augs = [], {c: 0 for c in CLS}, {}
    g_esit, g_farkli, t_esit = 0, 0, 0
    t0 = time.time()

    for i in range(a.n):
        vec, aug, ad, truth, jgolden = donustur(rng, taban, i)
        fc = raw.run_model(vec, cw, cb, fw, fb, qp)
        g = CLS[raw.argmax4(fc)]
        counts[g] += 1
        augs[aug] = augs.get(aug, 0) + 1
        if jgolden:                      # yalniz birebir kopya satirlar
            if jgolden == g:
                g_esit += 1
            else:
                g_farkli += 1
        if truth and truth == g:
            t_esit += 1
        name = "%05d_%s" % (i, safe(ad))
        rel = "vectors/%s.bin" % name
        with open(os.path.join(a.out, rel), "wb") as f:
            f.write(bytes((v & 0xFF) for v in vec))
        rows.append([rel, name, truth, g, "", "", ";".join(str(x) for x in fc), ad.split("_")[0], aug])
        if (i + 1) % 250 == 0 or i + 1 == a.n:
            print("  %5d/%d  %6.1f s  %s" % (i + 1, a.n, time.time() - t0,
                                             " ".join("%s=%d" % kv for kv in counts.items())), flush=True)

    with open(os.path.join(a.out, "manifest.csv"), "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f, lineterminator="\n")
        w.writerow(["file", "name", "truth", "golden", "golden_scores", "golden_probs",
                    "sw_fc_int8", "src", "aug"])
        w.writerows(rows)

    ozet = {
        "version": "1.0.0",
        "team": "BLogic Mikroelektronik",
        "base_dataset": os.path.abspath(a.public),
        "base_count": len(taban),
        "generator": "sw/demo/make_harness_dataset_public.py - yarismanin public_dataset'i tohum; "
                     "ilk %d ornek birebir kopya (aug=id), sonrasi shift/gain/noise/mix/mask" % len(taban),
        "golden_backend": "bit-tam saf Python int8 referansi (run_accuracy_window.run_model + argmax4)",
        "count": len(rows),
        "seed": a.seed,
        "encoding": "int8",
        "payload_length": N,
        "class_counts": counts,
        "aug_counts": augs,
        "identity_rows": {
            "juri_golden_ile_esit": g_esit,
            "juri_golden_ile_farkli": g_farkli,
            "juri_truth_ile_esit": t_esit,
            "aciklama": "golden karsilastirmasi referans modelin esdegerligini olcer; "
                        "truth karsilastirmasi modelin gercek etikete dogrulugunu gosterir"},
        "note": "truth yalniz aug=id satirlarinda dolu (juri manifestinden); turetilmis satirlarda "
                "gercek etiket iddia edilmez, golden yazilim referansindan gelir. "
                "golden_scores/golden_probs bos: kart yalniz argmax bildirir.",
        "created": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "elapsed_s": round(time.time() - t0, 1),
    }
    with open(os.path.join(a.out, "dataset_summary.json"), "w", encoding="utf-8") as f:
        json.dump(ozet, f, indent=2, ensure_ascii=False)
        f.write("\n")

    print("%s: %d vektor (%d taban), seed %d, %s" %
          (a.out, len(rows), len(taban), a.seed, " ".join("%s=%d" % kv for kv in counts.items())))
    print("donusum dagilimi: %s" % " ".join("%s=%d" % kv for kv in augs.items()))
    print("kopya satirlar (%d): juri GOLDEN ile esit %d / farkli %d · juri TRUTH ile esit %d"
          % (len(taban), g_esit, g_farkli, t_esit))
    return 0


if __name__ == "__main__":
    sys.exit(main())
