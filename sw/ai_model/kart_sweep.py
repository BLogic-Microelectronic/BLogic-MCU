#!/usr/bin/env python3
# ============================================
# kart_sweep.py - JURI PROVASI (13 Agu gece)
# ============================================
# Juri finalde UART'tan "daha once uzerinde calisilmamis" veri basacak
# (soru_cevap_final_oncesi_konusmalar.txt:289-292). Bu arac ayni yolu
# provalar: N cesitli/rastgele vektoru KARTA demo firmware'inin 'v'
# komutuyla gonderir, kartin siniflandirmasini okur ve bit-exact SW
# referansiyla (run_accuracy_window.run_model - N=1000 sim taramasinda
# RTL ile birebir dogrulanmis) karsilastirir.
#
# Kullanim: python kart_sweep.py [--n 60] [--port COM7] [--seed 31082026]
import argparse
import os
import random
import re
import sys
import time

import serial

import os as _os; REPO = _os.path.normpath(_os.path.join(_os.path.dirname(_os.path.abspath(__file__)), "..", ".."))
RAPOR = os.path.join(os.path.dirname(os.path.abspath(__file__)), "kart_sweep_raporu.txt")

os.chdir(REPO)
sys.path.insert(0, os.path.join(REPO, "sw", "ai_model"))
import run_accuracy_window as raw  # noqa: E402


def satir_oku(p, bekle_desen, saniye):
    """Porttan satir satir oku; desen gecen satiri dondur (yoksa None)."""
    son = time.time() + saniye
    hat = b""
    while time.time() < son:
        b = p.read(1)
        if not b:
            continue
        if b == b"\n":
            s = hat.decode("ascii", "replace").strip()
            hat = b""
            if bekle_desen in s:
                return s
        else:
            hat += b
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--n", type=int, default=60)
    ap.add_argument("--port", default="COM7")
    ap.add_argument("--seed", type=int, default=31082026)
    ap.add_argument("--ters-word", action="store_true",
                    help="her 4 bayti ters cevirerek gonder (endian testi)")
    ap.add_argument("--atla", type=int, default=0,
                    help="ornek listesinde ilk k ornegi atla")
    ap.add_argument("--parca", type=int, default=0,
                    help="parca boyu (bayt); 0 = tek seferde bas")
    ap.add_argument("--ara-ms", type=float, default=0.0,
                    help="parcalar arasi bekleme (ms)")
    a = ap.parse_args()

    # --- SW referansi: flash'taki ai_sram_init ile ayni hex kaynaklari ---
    G = raw.G
    cw = raw.hexbytes(os.path.join(G, "weights_conv.hex"))[:640]
    cb = raw.hexwords(os.path.join(G, "bias_conv.hex"))
    fw = raw.hexbytes(os.path.join(G, "weights_fc.hex"))[:16000]
    fb = raw.hexwords(os.path.join(G, "bias_fc.hex"))
    qp = raw.load_quant_params()
    yr = raw.hexbytes(os.path.join(G, "input_yes_real.hex"))[:1960]
    nr = raw.hexbytes(os.path.join(G, "input_no_real.hex"))[:1960]
    syn = {n: raw.hexbytes(os.path.join(G, "input_%s.hex" % n))[:1960]
           for n in ("yes", "no", "unknown", "silence")}

    raw.N = max(40, a.atla + a.n)      # make_samples 40 cekirdek + uzatma ailesi
    rng = random.Random(a.seed)
    ornekler = raw.make_samples(rng, yr, nr, syn)[a.atla:a.atla + a.n]
    CLS = raw.CLS

    # --- Port + demo el sikisma ---
    p = serial.Serial(a.port, 115200, timeout=0.2)
    p.reset_input_buffer()
    p.write(b"?")
    if satir_oku(p, "h=HW cikarim", 3) is None:
        print("[HATA] demo menusu cevap vermedi - kart acik mi, demo yuklu mu,"
              " Tera Term kapali mi?")
        return 2
    print("[OK] demo menusu cevap verdi, tarama basliyor (N=%d, seed=%d)"
          % (len(ornekler), a.seed))

    sonuc = []
    eslesen = 0
    t_hepsi = time.time()
    for i, (ad, etiket, vec) in enumerate(ornekler):
        ko = raw.run_model(vec, cw, cb, fw, fb, qp)
        sw_am = raw.argmax4(ko)

        p.reset_input_buffer()
        p.write(b"v")
        if satir_oku(p, "BLG1 cercevesi bekleniyor", 4) is None:
            sonuc.append((ad, etiket, ko, sw_am, None, "TIMEOUT-v"))
            continue
        ham = bytes((v & 0xFF) for v in vec)
        if a.ters_word:
            ham = b"".join(ham[k:k + 4][::-1]
                           for k in range(0, len(ham), 4))
        # BLG1 cercevesi (send_vector.py ile ayni): sihir + uzunluk + veri +
        # toplam-saglama, hepsi little-endian. Firmware saglamayi dogrulamadan
        # cikarim yapmaz -> bozuk aktarim sessizce yanlis sinif uretemez.
        veri = (b"BLG1" + len(ham).to_bytes(4, "little") + ham
                + (sum(ham) & 0xFFFFFFFF).to_bytes(4, "little"))
        if a.parca > 0:
            for k in range(0, len(veri), a.parca):
                p.write(veri[k:k + a.parca])
                p.flush()
                if a.ara_ms > 0:
                    time.sleep(a.ara_ms / 1000.0)
        else:
            p.write(veri)
            p.flush()
        hat = satir_oku(p, "sinif =", 6)
        if hat is None:
            sonuc.append((ad, etiket, ko, sw_am, None, "TIMEOUT-sinif"))
            continue
        m = re.search(r"sinif = (\w+)\s+HW cycle = (\d+)", hat)
        if not m or m.group(1) not in CLS:
            sonuc.append((ad, etiket, ko, sw_am, None, "PARSE:" + hat))
            continue
        kart_am = CLS.index(m.group(1))
        cyc = int(m.group(2))
        ok = (kart_am == sw_am)
        eslesen += ok
        sonuc.append((ad, etiket, ko, sw_am, kart_am, "OK %d cyc" % cyc if ok
                      else "UYUSMAZ"))
        print("  %3d/%d %-16s sw=%d kart=%d %s"
              % (i + 1, len(ornekler), ad, sw_am, kart_am,
                 "OK" if ok else "<<< UYUSMAZLIK"))
    sure = time.time() - t_hepsi
    p.close()

    # --- Rapor ---
    r = []
    r.append("=" * 70)
    r.append("KART RASTGELE-SINIFLANDIRMA TARAMASI (juri UART provasi)")
    r.append("Tarih: %s | N=%d | seed=%d | port=%s | sure=%.1f sn"
             % (time.strftime("%Y-%m-%d %H:%M"), len(ornekler), a.seed,
                a.port, sure))
    r.append("Yol: PC -> UART 115200 -> demo 'v' (BLG1 cerceve + saglama)"
             " -> AI SRAM -> HW cikarim -> irq17 -> UART sonuc")
    r.append("Referans: run_accuracy_window.run_model (sim N=1000'de RTL ile"
             " birebir dogrulanmis bit-exact SW modeli)")
    r.append("=" * 70)
    r.append("%-4s %-16s %-8s %-22s %-3s %-4s %s"
             % ("i", "ornek", "etiket", "SW fc_out", "SW", "KART", "durum"))
    for i, (ad, et, ko, sw_am, k_am, durum) in enumerate(sonuc):
        r.append("%-4d %-16s %-8s %-22s %-3d %-4s %s"
                 % (i, ad, et or "-", str(ko), sw_am,
                    "-" if k_am is None else str(k_am), durum))
    r.append("-" * 70)
    r.append("ESLESEN: %d/%d | zaman asimi/parse: %d"
             % (eslesen, len(sonuc),
                sum(1 for s in sonuc if s[4] is None)))
    txt = "\n".join(r) + "\n"
    open(RAPOR, "w", encoding="utf-8").write(txt)
    print(txt[txt.rfind("ESLESEN"):].strip())
    print("[YAZ] " + RAPOR)
    return 0 if eslesen == len(sonuc) else 1


if __name__ == "__main__":
    sys.exit(main())
