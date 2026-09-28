#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# quant_sweep.py - FC agirliklarinda dusuk-bit kuantizasyon taramasi
# ============================================
# NEDEN: AI SRAM'in kullanilan 23.128 baytinin 16.000'i (%69) FC agirligi.
# 8 -> 4 bit inilirse 8 KB kazanc: AI SRAM 24 -> 16 KB, 15 -> 8 makro, ~2 mm^2.
# Seyreklik yolu kapali (FC'de sifir orani yalnizca %1,7; "%39 sifir" rakami
# conv_out cikti alanini ve hizalama dolgusunu sayiyordu).
#
# YONTEM: kirpma DEGIL yeniden olceklendirme.
#   tensor-basi : adim = 2^(8-N), w' = round(w/adim)*adim
#   kanal-basi  : her cikis kanali kendi olceginde -> dar dagilimli kanallar
#                 tam cozunurluk kullanir, genelde 1-2 bit kazandirir
# Karar analitik degil OLCUM ile verilir. Jury esigi >=900/1000.
import os, sys, random

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import run_accuracy_window as R

G = os.path.join("sw", "ai_model", "golden_vectors")
FC_OUT = 4                     # sinif sayisi
FC_IN  = 4000                  # 25*20*8

def rq_tensor(w, bits):
    if bits >= 8: return list(w)
    step = 1 << (8 - bits)
    return [max(-128, min(127, int(round(v / step)) * step)) for v in w]

def rq_channel(w, bits):
    """FC agirligi [FC_OUT][FC_IN] duzeninde; her cikis kanali kendi olceginde."""
    if bits >= 8: return list(w)
    out = list(w)
    lvl = (1 << (bits - 1)) - 1
    for c in range(FC_OUT):
        sl = w[c*FC_IN:(c+1)*FC_IN]
        m  = max(1, max(abs(v) for v in sl))
        s  = max(1.0, m / lvl)
        for i, v in enumerate(sl):
            out[c*FC_IN + i] = max(-128, min(127, int(round(v / s)) * int(round(s))))
    return out

def main():
    if not os.path.isdir(G):
        sys.exit("repo kokunden calistirin")
    qp = R.load_quant_params()
    cw = R.hexbytes(os.path.join(G, "weights_conv.hex"))[:640]
    cb = R.hexwords(os.path.join(G, "bias_conv.hex"))
    fw = R.hexbytes(os.path.join(G, "weights_fc.hex"))[:16000]
    fb = R.hexwords(os.path.join(G, "bias_fc.hex"))

    yr  = R.hexbytes(os.path.join(G, "input_yes_real.hex"))[:1960]
    nr  = R.hexbytes(os.path.join(G, "input_no_real.hex"))[:1960]
    syn = {n: R.hexbytes(os.path.join(G, "input_%s.hex" % n))[:1960]
           for n in ("yes", "no", "unknown", "silence")}
    samples = R.make_samples(random.Random(0), yr, nr, syn)

    base = [R.argmax4(R.run_model(v, cw, cb, fw, fb, qp)) for _, _, v in samples]

    print(f"ornek sayisi: {len(samples)}   (referans = 8-bit cikti)")
    print(f"{'bit':>4} {'olcek':<12} {'eslesme':>9} {'oran':>7} {'FC boyutu':>11} {'AI SRAM':>9}")
    print("-" * 60)
    for bits in (8, 6, 5, 4, 3):
        for mode, fn in (("tensor-basi", rq_tensor), ("kanal-basi", rq_channel)):
            if bits == 8 and mode == "kanal-basi":
                continue
            fw2 = fn(fw, bits)
            hit = sum(1 for (_, _, v), b in zip(samples, base)
                      if R.argmax4(R.run_model(v, cw, cb, fw2, fb, qp)) == b)
            fc_kb  = 16000 * bits / 8 / 1024
            ai_kb  = (23128 - 16000 + 16000 * bits / 8) / 1024
            macros = -(-int(ai_kb * 1024) // 2048)
            print(f"{bits:>4} {mode:<12} {hit:>4}/{len(samples):<4} "
                  f"{100*hit/len(samples):>6.1f}% {fc_kb:>9.1f} KB {ai_kb:>6.1f} KB "
                  f"({macros} makro)")
    return 0

if __name__ == "__main__":
    sys.exit(main())
