#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# send_vector.py  -  B11 host tarafi: UART'tan YZ oznitelik vektoru gonder
# ============================================
# Karsi taraf: sw/tests/ai_uart_load_test.c
#
# PROTOKOL (little-endian):
#   'B','L','G','1' + uzunluk[4] + <uzunluk> bayt veri + saglama[4]
#   saglama = baytlarin toplami, mod 2^32
#
# FORMATTAN BAGIMSIZ: bu betik ham bayt gonderir. Juri hangi formati verirse
# versin --input ile dosyayi gecersiniz; donusum gerekiyorsa --scale / --signed
# ile ayarlanir, firmware tarafinda degisiklik gerekmez.
#
# Kullanim:
#   python send_vector.py --port COM7 --input golden_vectors/input_yes_real.hex
#   python send_vector.py --port COM7 --input veri.bin --raw
#   python send_vector.py --port COM7 --list        (yerlesik vektorleri listele)
# ============================================
import argparse
import os
import struct
import sys
import time

MAGIC = b"BLG1"
GOLDEN_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), "golden_vectors")
AI_INPUT_MAX = 1960  # firmware ile ayni sinir


def hex_to_bytes(path):
    """32-bit word'luk .hex dosyasini little-endian bayt dizisine cevirir.

    golden_vectors/*.hex bu bicimde: satir basina bir 8 haneli hex word.
    AI SRAM'e yazilirken little-endian paketleniyor (uart1_strm_test.c:74
    dogrulamasi: A0,A1,A2,A3 baytlari 0xA3A2A1A0 word'unu veriyor)."""
    out = bytearray()
    with open(path) as fh:
        for line in fh:
            tok = line.strip()
            if not tok:
                continue
            out += struct.pack("<I", int(tok, 16))
    return bytes(out)


def gonder(args, paket):
    """Paketi seri porta yaz, ya da --dry-run ile dosyaya."""
    if args.dry_run:
        with open(args.dry_run, "wb") as f:
            f.write(paket)
        print("paket     : %d bayt -> %s (kuru kosu, port acilmadi)"
              % (len(paket), args.dry_run))
        return

    try:
        import serial  # pyserial
    except ImportError:
        sys.exit("pyserial yok:  pip install pyserial")

    print("paket     : %d bayt" % len(paket))
    print("port      : %s @ %d" % (args.port, args.baud))
    with serial.Serial(args.port, args.baud, timeout=args.timeout) as ser:
        time.sleep(0.2)
        ser.reset_input_buffer()
        # EL SIKISMA (14 Agu, kart olcumu): UART'ta RX FIFO YOK - tek RDR
        # yazmaci var. Kart "waiting" satirini basarken (~50 karakter =
        # ~4,3 ms) gelen baytlar uzerine yazilir ve KAYBOLUR. Bu yuzden veri
        # ancak kart okuma dongusune girdikten SONRA gonderilebilir.
        # Karsi taraf komut kabuklu bir firmware ise (demo 'v') once komutu
        # gonder, prompt'u bekle; prompt basmayan firmware'lerde
        # (ai_uart_load_test) kisa zaman asimiyla dogrudan devam edilir.
        if args.komut:
            ser.write(args.komut.encode())
            ser.flush()
        bitis = time.time() + args.bekleme
        while time.time() < bitis:
            satir = ser.readline()
            if not satir:
                continue
            if b"waiting" in satir or b"BLG1" in satir:
                print("el sikisma: %s" % satir.decode("ascii", "replace").strip())
                break
        ser.write(paket)
        ser.flush()
        print("-" * 52)
        # Karttan gelen raporu, sessizlige dusene kadar bas
        son = time.time()
        while time.time() - son < args.timeout:
            satir = ser.readline()
            if not satir:
                continue
            son = time.time()
            print(satir.decode("ascii", "replace").rstrip())
    print("-" * 52)


def main():
    ap = argparse.ArgumentParser(description="YZ oznitelik vektorunu karta UART'tan gonder")
    ap.add_argument("--port", default="COM7", help="seri port (varsayilan COM7)")
    ap.add_argument("--baud", type=int, default=115200)
    ap.add_argument("--input", help="gonderilecek dosya (.hex ya da --raw ile ham .bin)")
    ap.add_argument("--raw", action="store_true", help="dosyayi ham bayt olarak oku")
    ap.add_argument("--frame",
                    help="hazir cerceve dosyasi (make_uart_frame.py ciktisi). "
                         "Hicbir sey yeniden uretilmez, baytlar aynen gider - "
                         "simulasyonda kanitlanan dizinin ta kendisi. "
                         "--input/--preamble/--from-uint8 yok sayilir.")
    ap.add_argument("--preamble", type=int, default=8,
                    help="magic oncesi 0xFF dolgu bayti (varsayilan 8). "
                         "Kartta host baglanirken hatta cop olusur ve ilk "
                         "baytlar kaybolur; kaybolan dolgu olur, magic saglam kalir.")
    ap.add_argument("--dry-run", metavar="DOSYA",
                    help="seri porta yazmak yerine paketi dosyaya yaz "
                         "(kart olmadan dogrulama; pyserial gerekmez)")
    ap.add_argument("--list", action="store_true", help="yerlesik altin vektorleri listele")
    ap.add_argument("--timeout", type=float, default=5.0, help="cevap bekleme (s)")
    ap.add_argument("--komut", default="",
                    help="veriden once gonderilecek menu komutu (demo icin 'v')")
    ap.add_argument("--bekleme", type=float, default=1.5,
                    help="veri oncesi 'hazir' satirini bekleme suresi (s); "
                         "UART'ta RX FIFO olmadigi icin gereklidir")
    # K13 (docs/oznitelik_vektoru_formati.md): microfrontend uint8 (0..255)
    # uretir, model int8 (-128..127) bekler. Donusum: int8 = uint8 - 128,
    # bit duzeyinde byte ^ 0x80. Ham uint8 gonderilirse ornegin 200 degeri
    # +72 yerine -56 olur ve conv birikimi tamamen kayar.
    ap.add_argument("--from-uint8", action="store_true",
                    help="girdi uint8 (0..255) ise int8'e cevir (byte ^ 0x80)")
    args = ap.parse_args()

    if args.list:
        if not os.path.isdir(GOLDEN_DIR):
            sys.exit(f"dizin yok: {GOLDEN_DIR}")
        print(f"{GOLDEN_DIR}:")
        for f in sorted(os.listdir(GOLDEN_DIR)):
            if f.startswith("input_"):
                p = os.path.join(GOLDEN_DIR, f)
                print(f"  {f:32s} {os.path.getsize(p):8,} B")
        return

    if not args.input and not args.frame:
        sys.exit("--input ya da --frame gerekli (ya da --list)")

    if args.frame:
        # Hazir cerceve: hicbir sey yeniden uretilmiyor. Rapor satirlari
        # da DOSYADAN okunur - ekranda gorunen sayi ile telden gidenin
        # ayni olmasi bu modun tek anlami.
        paket = open(args.frame, "rb").read()
        i = paket.find(MAGIC)
        if i < 0:
            sys.exit("cercevede %r basligi yok: %s" % (MAGIC, args.frame))
        uzunluk  = struct.unpack("<I", paket[i + 4:i + 8])[0]
        data     = paket[i + 8:i + 8 + uzunluk]
        checksum = struct.unpack("<I", paket[i + 8 + uzunluk:i + 12 + uzunluk])[0]
        hesap    = sum(data) & 0xFFFFFFFF
        print("cerceve   : %s" % args.frame)
        print("onek      : %d bayt (magic ofseti)" % i)
        print("uzunluk   : %d bayt" % uzunluk)
        print("saglama   : 0x%08X  (hesaplanan 0x%08X)" % (checksum, hesap))
        if checksum != hesap:
            sys.exit("HATA: cercevedeki saglama tutmuyor - dosya bozuk")
        if i == 0:
            print("  UYARI: onek yok. Kartta ilk baytlar kaybolabilir;\n"
                  "         make_uart_frame.py --preamble 8 ile uret.")
        gonder(args, paket)
        return

    data = (open(args.input, "rb").read() if args.raw
            else hex_to_bytes(args.input))

    if not data:
        sys.exit("dosya bos")
    if len(data) > AI_INPUT_MAX:
        print(f"UYARI: {len(data)} B > {AI_INPUT_MAX} B siniri, kirpiliyor")
        data = data[:AI_INPUT_MAX]

    if args.from_uint8:
        data = bytes(b ^ 0x80 for b in data)   # uint8 -> int8

    # Sahada en sik hata: yanlis isaret konvansiyonu. Altin vektorlerde
    # baytlarin ~%64'u negatif (int8 yorumuyla). Hic negatif yoksa gelen veri
    # buyuk olasilikla uint8'dir ve --from-uint8 gerekir. Yanlis sinif
    # cikarsa ILK bakilacak yer burasi.
    neg = sum(1 for b in data if b >= 0x80)
    oran = 100.0 * neg / len(data)
    print(f"isaret    : baytlarin %{oran:.1f}'i negatif (int8 yorumu)")
    if oran < 5.0:
        print("  UYARI: hic negatif yok -> veri uint8 olabilir, --from-uint8 dene")
    elif oran > 90.0:
        print("  UYARI: neredeyse hepsi negatif -> donusum iki kez uygulanmis olabilir")

    checksum = sum(data) & 0xFFFFFFFF
    onek  = b"\xFF" * args.preamble
    paket = onek + MAGIC + struct.pack("<I", len(data)) + data + struct.pack("<I", checksum)

    print(f"dosya     : {args.input}")
    print(f"onek      : {args.preamble} bayt (0xFF)")
    print(f"uzunluk   : {len(data):,} bayt")
    print(f"saglama   : 0x{checksum:08X}")

    gonder(args, paket)


if __name__ == "__main__":
    main()
