#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# make_uart_frame.py  -  KF5: UART demo yolunu simulasyonda kanitla
# ============================================
# NEDEN: sartname bolum 5.2'nin ILK odul kriteri, kurulun verecegi test
# senaryosunun FPGA kartinda kosturuldugunun GOSTERILMESI. Veri UART'tan
# gelecek ve "daha once uzerinde calismadiginiz" olacak. Bugune kadar bu yol
# ne simulasyonda ne kartta uctan uca kosmadi: sim_main.cpp UART0'i loopback'e
# bagliyordu, yani host'tan bayt enjekte etmenin yolu yoktu.
#
# BU BETIK: hic kullanilmamis bir oznitelik vektoru secer, sw/ai_model
# kosimulasyonuyla beklenen sinifi hesaplar, ai_uart_load_test.c'nin
# bekledigi BLG1 cercevesini uretir ve firmware'in basmasi gereken tam
# dizgeyi golden dosyasina yazar.
#
# "Hic kullanilmamis" = sabit cekirdek 40 orneginin DISINDA, girdi uzayi
# taramasindan (960 ornek) gelen bir indeks. golden_vectors/ altindaki
# input_*.hex dosyalarinin hicbiri degil.
#
# Kullanim (depo kokunden):
#   python3 sw/ai_model/make_uart_frame.py --index 500
#   python3 sw/ai_model/make_uart_frame.py --index 500 --outdir build/uart_demo
# ============================================
import argparse
import os
import random
import struct
import sys

BURASI = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, BURASI)

try:
    import run_accuracy_window as raw
except ImportError as e:
    sys.exit("cannot load run_accuracy_window.py: %s" % e)

MAGIC = b"BLG1"
AI_INPUT_MAX = 1960
# ai_uart_load_test.c:48 ve generate_golden.py:21 ile AYNI sira.
# tiny_conv_reference.py farkli bir sira kullaniyor - o dosya olu kod,
# canli akista kullanilmiyor (bkz. golden_summary.txt basligi).
CLASS_NAMES = ["silence", "unknown", "yes", "no"]


def main():
    ap = argparse.ArgumentParser(
        description="BLG1 frame and expected output for ai_uart_load_test.c")
    ap.add_argument("--index", type=int, default=500,
                    help="sample index (choose >=40 to stay outside the core set)")
    ap.add_argument("--n", type=int, default=1000,
                    help="sample pool size (default 1000)")
    ap.add_argument("--outdir", default="build/uart_demo")
    ap.add_argument("--preamble", type=int, default=8,
                    help="number of padding bytes (0xFF) before the magic")
    ap.add_argument("--allow-core", action="store_true",
                    help="allow picking a sample from the core set of 40")
    args = ap.parse_args()

    if not os.path.isdir(raw.G):
        sys.exit("golden_vectors not found; run from the repository root")
    if args.index >= args.n:
        sys.exit("--index (%d) is outside --n (%d)" % (args.index, args.n))
    if args.index < 40 and not args.allow_core:
        sys.exit("--index %d is in the fixed core set of 40. The demo evidence needs "
                 "an unseen sample: choose --index 40..%d, or pass --allow-core "
                 "if this is intentional." % (args.index, args.n - 1))

    # --- havuzu run_accuracy_window ile AYNI sekilde uret (ayni SEED) ---
    raw.N = args.n
    cw = raw.hexbytes(os.path.join(raw.G, "weights_conv.hex"))[:640]
    cb = raw.hexwords(os.path.join(raw.G, "bias_conv.hex"))
    fw = raw.hexbytes(os.path.join(raw.G, "weights_fc.hex"))[:16000]
    fb = raw.hexwords(os.path.join(raw.G, "bias_fc.hex"))
    qp = raw.load_quant_params()

    yr = raw.hexbytes(os.path.join(raw.G, "input_yes_real.hex"))[:1960]
    nr = raw.hexbytes(os.path.join(raw.G, "input_no_real.hex"))[:1960]
    syn = {n: raw.hexbytes(os.path.join(raw.G, "input_%s.hex" % n))[:1960]
           for n in ("yes", "no", "unknown", "silence")}

    rng = random.Random(raw.SEED)
    samples = raw.make_samples(rng, yr, nr, syn)

    ad, etiket, vec = samples[args.index]
    if len(vec) != AI_INPUT_MAX:
        sys.exit("sample length %d != %d" % (len(vec), AI_INPUT_MAX))

    # --- beklenen sinif: RTL'in eslesmesi gereken kosimulasyon ---
    fc = raw.run_model(vec, cw, cb, fw, fb, qp)
    argmax = raw.argmax4(fc)
    sinif = CLASS_NAMES[argmax]

    # Beraberlik uyarisi: ilk iki logit esitse karar "ilk maksimum" kuralina
    # bagli. RTL ve kosim ayni kurali kullaniyor ama demo kaniti icin
    # acik farkli bir ornek daha guclu.
    sirali = sorted(fc, reverse=True)
    beraberlik = (sirali[0] == sirali[1])

    # --- cerceve: ai_uart_load_test.c protokolu, little-endian ---
    veri = bytes((v & 0xFF) for v in vec)
    saglama = sum(veri) & 0xFFFFFFFF
    # Dolgu: bastaki bayt kaybi magic yerine dolguyu yesin.
    onek = b"\xFF" * args.preamble
    cerceve = onek + MAGIC + struct.pack("<I", len(veri)) + veri + struct.pack("<I", saglama)

    # --- firmware'in basacagi TAM dizge (ai_uart_load_test.c:113-121) ---
    golden = "[AI] source=UART  argmax=%d (%s)  mem[OUT]=" % (argmax, sinif)

    os.makedirs(args.outdir, exist_ok=True)
    p_frame = os.path.join(args.outdir, "frame.bin")
    p_gold = os.path.join(args.outdir, "golden.txt")
    p_info = os.path.join(args.outdir, "info.txt")
    p_trig = os.path.join(args.outdir, "trigger.txt")

    with open(p_frame, "wb") as f:
        f.write(cerceve)
    with open(p_gold, "w") as f:
        f.write(golden)
    # Surucu bu dizgeyi TX'te gorene kadar hatti bosta tutar. Firmware
    # RX dongusune girmeden gonderirsek baytlar RDR'de kaybolur (FIFO yok).
    # Satirin SONU seciliyor; ardindan yalniz "\n" kaliyor.
    with open(p_trig, "w") as f:
        f.write("[RX] READY - waiting for a vector")

    neg = sum(1 for b in veri if b >= 0x80)
    bilgi = [
        "UART demo frame - make_uart_frame.py",
        "sample index    : %d / %d  (outside the fixed 40-sample set: %s)"
        % (args.index, args.n, "YES" if args.index >= 40 else "NO"),
        "sample name     : %s" % ad,
        "label           : %s" % (etiket if etiket else "-"),
        "SW fc_out       : %s" % (fc,),
        "expected argmax : %d (%s)" % (argmax, sinif),
        "tie             : %s" % ("YES, the two largest logits are equal" if beraberlik else "no"),
        "vector length   : %d bytes" % len(veri),
        "negative bytes  : %.1f%% (as int8)" % (100.0 * neg / len(veri)),
        "checksum        : 0x%08X" % saglama,
        "preamble        : %d bytes (0xFF)" % args.preamble,
        "frame size      : %d bytes" % len(cerceve),
        "expected output : %s" % golden,
        "",
        "This vector is none of golden_vectors/input_*.hex;",
        "it was generated by sampling the input space (seed=%d)." % raw.SEED,
    ]
    with open(p_info, "w") as f:
        f.write("\n".join(bilgi) + "\n")

    print("\n".join(bilgi))
    print()
    print("[+] %s  (%d bytes)" % (p_frame, len(cerceve)))
    print("[+] %s" % p_gold)
    print("[+] %s" % p_info)
    print("[+] %s  (RX trigger)" % p_trig)
    if beraberlik:
        print("[!] Tie between classes; prefer an index with a clear winner for the demo")


if __name__ == "__main__":
    main()
