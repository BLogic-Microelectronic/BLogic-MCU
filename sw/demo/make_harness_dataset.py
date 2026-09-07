#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# make_harness_dataset.py - juri araci (demo_harness.py) biciminde rastgele regresyon seti
# ============================================
# Juri aracinin public_dataset'iyle ayni yerlesim: manifest.csv + vectors/*.bin
# (1960 int8, zaman-major) + dataset_summary.json. Vektorler kart_sweep.py ve juri
# panelinin RANDOM SWEEP'iyle AYNI uretecten gelir (run_accuracy_window.make_samples:
# 40 adli cekirdek aile - gercek yes/no, sentetik siniflar, gurultu, zaman/frekans
# kaydirma, karisim, olcek, gauss, duzgun rastgele, sabit -128/0/127, damali, rampa -
# + 8 aileli tohumlu uzatma; ai-batch1000 ile RTL'de 1000/1000 dogrulanmis uretec).
# 'golden' sutunu bit-exact saf Python int8 referansindan (run_model + argmax4) gelir;
# numpy/tflite gerekmez. Aracin golden_scores/golden_probs sutunlari (softmax sonrasi
# int8) bos birakilir: kart yalniz argmax bildirir, arac skor karsilastirmasini atlar.
# Ek 'sw_fc_int8' sutunu FC cikisinin dort int8 degeridir (bilgi; arac bilmedigi
# sutunlari yok sayar). 'truth' yalniz gercek kayitlarda (yes_real/no_real) doludur.
#
# Kullanim (herhangi bir dizinden):
#   py -3 sw/demo/make_harness_dataset.py --n 1000 --seed 31082026 --out C:\demo\random_dataset
#   python demo_harness.py run -c team_icd.json --manifest C:\demo\random_dataset\manifest.csv -o C:\demo\results
# Simulasyon: make demo-harness-sim-dataset (K esit aralikli vektor, UART1 stream yolu)
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

raw.G = os.path.join(AI, "golden_vectors")   # depo kokunden bagimsiz
CLS = raw.CLS
N = 1960


def load_model():
    G = raw.G
    cw = raw.hexbytes(os.path.join(G, "weights_conv.hex"))[:640]
    cb = raw.hexwords(os.path.join(G, "bias_conv.hex"))
    fw = raw.hexbytes(os.path.join(G, "weights_fc.hex"))[:16000]
    fb = raw.hexwords(os.path.join(G, "bias_fc.hex"))
    qp = raw.load_quant_params()
    yr = raw.hexbytes(os.path.join(G, "input_yes_real.hex"))[:N]
    nr = raw.hexbytes(os.path.join(G, "input_no_real.hex"))[:N]
    syn = {n: raw.hexbytes(os.path.join(G, "input_%s.hex" % n))[:N]
           for n in ("yes", "no", "unknown", "silence")}
    return cw, cb, fw, fb, qp, yr, nr, syn


def safe(name):
    return re.sub(r"[^A-Za-z0-9_+-]+", "_", name)


def main():
    ap = argparse.ArgumentParser(description="juri araci biciminde rastgele regresyon seti")
    ap.add_argument("--n", type=int, default=1000, help="vektor sayisi (varsayilan 1000)")
    ap.add_argument("--seed", type=int, default=31082026, help="tohum (kart_sweep.py ile ayni)")
    ap.add_argument("--skip", type=int, default=0, help="uretecin ilk K ornegini atla")
    ap.add_argument("--out", default="build/harness_dataset", help="cikti dizini")
    a = ap.parse_args()

    cw, cb, fw, fb, qp, yr, nr, syn = load_model()
    raw.N = max(40, a.skip + a.n)
    rng = random.Random(a.seed)
    samples = raw.make_samples(rng, yr, nr, syn)[a.skip:a.skip + a.n]

    vdir = os.path.join(a.out, "vectors")
    os.makedirs(vdir, exist_ok=True)
    rows, counts, fams = [], {c: 0 for c in CLS}, []
    t0 = time.time()
    for i, (ad, etiket, vec) in enumerate(samples):
        fc = raw.run_model(vec, cw, cb, fw, fb, qp)
        g = CLS[raw.argmax4(fc)]
        counts[g] += 1
        name = "%04d_%s" % (a.skip + i, safe(ad))
        rel = "vectors/%s.bin" % name
        with open(os.path.join(a.out, rel), "wb") as f:
            f.write(bytes((v & 0xFF) for v in vec))
        rows.append([rel, name, etiket or "", g, "", "", ";".join(str(x) for x in fc)])
        if a.skip + i < 40:
            fams.append(ad)
        if (i + 1) % 50 == 0 or i + 1 == len(samples):
            print("  %4d/%d  %6.1f s  %s" % (i + 1, len(samples), time.time() - t0,
                                             " ".join("%s=%d" % kv for kv in counts.items())),
                  flush=True)

    with open(os.path.join(a.out, "manifest.csv"), "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f, lineterminator="\n")
        w.writerow(["file", "name", "truth", "golden", "golden_scores", "golden_probs", "sw_fc_int8"])
        w.writerows(rows)
    summary = {
        "version": "1.0.0",
        "team": "BLogic Mikroelektronik",
        "generator": "sw/ai_model/run_accuracy_window.py make_samples (kart_sweep.py / juri paneli "
                     "RANDOM SWEEP ile ayni: 40 adli cekirdek aile + 8 aileli tohumlu uzatma)",
        "golden_backend": "bit-exact saf Python int8 referansi (run_accuracy_window.run_model, "
                          "argmax4); ai-batch1000 ile RTL'de 1000/1000, kartta 1000/1000",
        "count": len(rows),
        "seed": a.seed,
        "skip": a.skip,
        "encoding": "int8",
        "payload_length": N,
        "class_counts": counts,
        "core_families": fams,
        "note": "golden_scores/golden_probs bos: kart yalniz argmax bildirir; sw_fc_int8 = FC cikisi",
        "created": time.strftime("%Y-%m-%dT%H:%M:%S"),
        "elapsed_s": round(time.time() - t0, 1),
    }
    with open(os.path.join(a.out, "dataset_summary.json"), "w", encoding="utf-8") as f:
        json.dump(summary, f, indent=2, ensure_ascii=False)
        f.write("\n")
    print("%s: %d vektor, seed %d, %s, %.1f s -> manifest.csv + vectors/ + dataset_summary.json"
          % (a.out, len(rows), a.seed, " ".join("%s=%d" % kv for kv in counts.items()),
             time.time() - t0))
    return 0


if __name__ == "__main__":
    sys.exit(main())
