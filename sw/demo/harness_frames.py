#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# harness_frames.py - TEKNOFEST demo harness stream cercevesi: uret ve kontrol et
# ============================================
# Cerceve (sw/demo/team_icd.json, demo_harness.py FrameBuilder ile birebir):
#   "BLG1" + uzunluk[2 LE]=1960 + payload[1960 int8] + CRC16-CCITT[2 LE]
#   (poly 0x1021, init 0xFFFF, yansimasiz, yalniz payload uzerinde)
#
# Kullanim (depo kokunden):
#   py -3 sw/demo/harness_frames.py sim --outdir build/harness_sim
#       -> uart1_rx.bin  : UART1'e surulecek bayt dizisi (saglamlik senaryolariyla)
#          expect.txt    : beklenen RESULT satirlari (sirayla)
#   py -3 sw/demo/harness_frames.py check build/harness_sim/expect.txt logs/sim/demo_main/uart.log
#       -> PASS/FAIL (cikis kodu 0/1)
#   py -3 sw/demo/harness_frames.py frame <vec.bin> [-o frame.bin]   (tek cerceve)
#   py -3 sw/demo/harness_frames.py sim --manifest <dataset>/manifest.csv --count K
#       -> juri araci bicimindeki bir setin (public_dataset ya da make_harness_dataset.py)
#          K vektorluk tohumlu alt kumesi, beklenen etiket manifest'in golden sutunu
#
# Beklenen siniflar bit-exact SW referansindan (run_accuracy_window.run_model).
import argparse
import os
import struct
import sys

BURASI = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(BURASI, "..", "ai_model"))

PRE = b"BLG1"
N = 1960
CLASSES = ["silence", "unknown", "yes", "no"]


def crc16_ccitt(data, init=0xFFFF):
    crc = init
    for b in data:
        crc ^= b << 8
        for _ in range(8):
            crc = ((crc << 1) ^ 0x1021) & 0xFFFF if crc & 0x8000 else (crc << 1) & 0xFFFF
    return crc


def frame(payload):
    assert len(payload) == N
    return PRE + struct.pack("<H", N) + bytes(payload) + struct.pack("<H", crc16_ccitt(payload))


def to_int8(payload):
    return [b - 256 if b >= 128 else b for b in payload]


_MODEL = []


def sw_label(payload):
    """Bit-exact SW referansi (numpy/tflite gerekmez); make_uart_frame.py ile ayni yukleme."""
    import run_accuracy_window as raw
    if not _MODEL:
        g = raw.G
        _MODEL.extend([raw.hexbytes(os.path.join(g, "weights_conv.hex"))[:640],
                       raw.hexwords(os.path.join(g, "bias_conv.hex")),
                       raw.hexbytes(os.path.join(g, "weights_fc.hex"))[:16000],
                       raw.hexwords(os.path.join(g, "bias_fc.hex")),
                       raw.load_quant_params()])
    cw, cb, fw, fb, qp = _MODEL
    fc = raw.run_model(to_int8(payload), cw, cb, fw, fb, qp)
    return CLASSES[raw.argmax4(fc)]


def real_vectors():
    """golden_vectors altindaki gercek yes/no oznitelikleri (varsa)."""
    import run_accuracy_window as raw
    gv = os.path.join(BURASI, "..", "ai_model", "golden_vectors")
    out = []
    for name in ("input_yes_real.hex", "input_no_real.hex"):
        p = os.path.join(gv, name)
        if os.path.exists(p):
            v = raw.hexbytes(p)[:N]
            out.append((name.replace("input_", "").replace(".hex", ""), bytes(x & 0xFF for x in v)))
    return out


def manifest_seq(manifest, count):
    """Juri araci manifest'inden (file,name,truth,golden,...) K vektorluk tohumlu alt kume."""
    import csv
    base = os.path.dirname(os.path.abspath(manifest))
    with open(manifest, newline="", encoding="utf-8") as f:
        rows = list(csv.DictReader(f))
    if count and count < len(rows):
        # tohumlu, tekrarlanabilir alt kume (esit aralik uretecin 8'li aile
        # dongusuyle hizalanip ayni aileleri secebiliyor)
        import random
        idx = sorted(random.Random(20260908).sample(range(len(rows)), count))
        rows = [rows[i] for i in idx]
    seq = []
    for r in rows:
        p = os.path.join(base, r["file"])
        with open(p, "rb") as f:
            payload = f.read()[:N]
        assert len(payload) == N, (p, len(payload))
        lab = (r.get("golden") or "").strip().lower() or sw_label(payload)
        seq.append((r.get("name") or os.path.basename(p), frame(payload), lab))
    return seq


def build_sim(outdir, manifest=None, count=0):
    """Saglamlik senaryolarini da iceren tek bayt dizisi + beklenen RESULT listesi."""
    os.makedirs(outdir, exist_ok=True)
    if manifest:
        seq = manifest_seq(manifest, count)
        return write_sim(outdir, seq, None)
    reals = real_vectors()
    yes_v = reals[0][1] if reals else bytes([0] * N)
    no_v = reals[1][1] if len(reals) > 1 else bytes([0] * N)
    zeros = bytes([0] * N)
    satmax = bytes([127] * N)
    satmin = bytes([0x80] * N)
    alt = bytes([127 if i % 2 == 0 else 0x80 for i in range(N)])
    seq = []      # (aciklama, baytlar, beklenen etiket ya da None)
    seq.append(("1 valid yes_real", frame(yes_v), sw_label(yes_v)))
    seq.append(("2 valid no_real", frame(no_v), sw_label(no_v)))
    seq.append(("3 silence_zeros", frame(zeros), sw_label(zeros)))
    seq.append(("4 saturate_max", frame(satmax), sw_label(satmax)))
    seq.append(("5 saturate_min", frame(satmin), sw_label(satmin)))
    seq.append(("6 alternating", frame(alt), sw_label(alt)))
    # kesik cerceve (1000 bayt), hemen ardindan gecerli cerceve
    seq.append(("7 truncated 1000 B then valid yes", frame(yes_v)[:1000] + frame(yes_v), sw_label(yes_v)))
    # fazla baytli cerceve: gecerli + 37 cop bayt, sonra gecerli
    junk = bytes((i * 37 + 11) & 0xFF for i in range(37))
    seq.append(("8 valid no + 37 junk bytes", frame(no_v) + junk, sw_label(no_v)))
    seq.append(("9 valid yes after junk", frame(yes_v), sw_label(yes_v)))
    # bozuk CRC: sonuc beklenmez, sonra gecerli
    bad = bytearray(frame(no_v)); bad[-1] ^= 0xFF
    seq.append(("10 bad CRC (no result expected)", bytes(bad), None))
    seq.append(("11 valid no after bad CRC", frame(no_v), sw_label(no_v)))
    # cop icinde preamble taklidi: 'B','L','G' + sonra gercek cerceve
    seq.append(("12 decoy BLG + valid yes", b"BLG" + frame(yes_v), sw_label(yes_v)))
    # art arda 3 cerceve (arasiz)
    seq.append(("13 back-to-back x3 (yes,no,yes)", frame(yes_v) + frame(no_v) + frame(yes_v),
                [sw_label(yes_v), sw_label(no_v), sw_label(yes_v)]))
    return write_sim(outdir, seq, len(frame(yes_v)))


def write_sim(outdir, seq, b2b_frame_len):
    data = b"".join(s[1] for s in seq)
    expect = []
    for d, _, lab in seq:
        if lab is None:
            continue
        for l in (lab if isinstance(lab, list) else [lab]):
            expect.append("%s\t%s" % (l, d))
    # harness davranisi: bir cerceveden sonra RESULT'i bekler (ya da 0.3 s durur),
    # sonra devam eder -> her senaryo sinirinda ve arka arkaya cercevelerin
    # arasinda surucu bir ara verir (+UART1_GAPS / +UART1_GAP_CYC)
    gaps, off = [], 0
    for d, b, _ in seq:
        if b2b_frame_len and d.startswith("13 "):
            fl = b2b_frame_len
            gaps += [off + fl, off + 2 * fl]
        off += len(b)
        gaps.append(off)
    with open(os.path.join(outdir, "uart1_rx.bin"), "wb") as f:
        f.write(data)
    with open(os.path.join(outdir, "expect.txt"), "w", encoding="utf-8") as f:
        f.write("\n".join(expect) + "\n")
    with open(os.path.join(outdir, "gaps.txt"), "w") as f:
        f.write("\n".join(str(g) for g in gaps) + "\n")
    print("uart1_rx.bin: %d bytes, %d scenarios, %d results expected, %d gaps -> %s"
          % (len(data), len(seq), len(expect), len(gaps), outdir))
    for d, b, lab in seq:
        print("  %-42s %5d B  expect %s" % (d, len(b), lab))
    return len(expect)


def check(expect_path, uart_log):
    exp = [l.split("\t")[0] for l in open(expect_path, encoding="utf-8").read().splitlines() if l.strip()]
    txt = open(uart_log, encoding="utf-8", errors="replace").read()
    got = []
    for line in txt.splitlines():
        line = line.strip()
        if line.startswith("RESULT:"):
            got.append(line[7:].strip())
    # acilis cikarimi (boot) + panel yolu da RESULT basar: acilistaki ilk sonucu at
    boot = 1 if got and "Boot inference" in txt else 0
    got_s = got[boot:]
    ok = got_s == exp
    print("expected %d RESULT lines: %s" % (len(exp), " ".join(exp)))
    print("got      %d RESULT lines: %s%s" % (len(got_s), " ".join(got_s), " (boot result skipped)" if boot else ""))
    for l in txt.splitlines():
        if "stream frames" in l:
            print("firmware: " + l.strip())
    print("[HARNESS-SIM] %s" % ("PASS" if ok else "FAIL"))
    return 0 if ok else 1


def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="cmd", required=True)
    s = sub.add_parser("sim"); s.add_argument("--outdir", default="build/harness_sim")
    s.add_argument("--manifest", default=None, help="juri araci manifest.csv: senaryolar yerine bu set")
    s.add_argument("--count", type=int, default=0, help="manifest'ten K vektor (tohumlu alt kume; 0 = hepsi)")
    c = sub.add_parser("check"); c.add_argument("expect"); c.add_argument("uart_log")
    f = sub.add_parser("frame"); f.add_argument("vec"); f.add_argument("-o", default="frame.bin")
    a = ap.parse_args()
    if a.cmd == "sim":
        build_sim(a.outdir, a.manifest, a.count)
    elif a.cmd == "check":
        sys.exit(check(a.expect, a.uart_log))
    else:
        v = open(a.vec, "rb").read()[:N]
        open(a.o, "wb").write(frame(v))
        print("%s: %d bytes, crc16=0x%04X, sw class=%s" % (a.o, len(frame(v)), crc16_ccitt(v), sw_label(v)))


if __name__ == "__main__":
    main()
