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


def main():
    ap = argparse.ArgumentParser(description="YZ oznitelik vektorunu karta UART'tan gonder")
    ap.add_argument("--port", default="COM7", help="seri port (varsayilan COM7)")
    ap.add_argument("--baud", type=int, default=115200)
    ap.add_argument("--input", help="gonderilecek dosya (.hex ya da --raw ile ham .bin)")
    ap.add_argument("--raw", action="store_true", help="dosyayi ham bayt olarak oku")
    ap.add_argument("--list", action="store_true", help="yerlesik altin vektorleri listele")
    ap.add_argument("--timeout", type=float, default=5.0, help="cevap bekleme (s)")
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

    if not args.input:
        sys.exit("--input gerekli (ya da --list)")

    try:
        import serial  # pyserial
    except ImportError:
        sys.exit("pyserial yok:  pip install pyserial")

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
    paket = MAGIC + struct.pack("<I", len(data)) + data + struct.pack("<I", checksum)

    print(f"port      : {args.port} @ {args.baud}")
    print(f"dosya     : {args.input}")
    print(f"uzunluk   : {len(data):,} bayt")
    print(f"saglama   : 0x{checksum:08X}")
    print(f"paket     : {len(paket):,} bayt")

    with serial.Serial(args.port, args.baud, timeout=args.timeout) as ser:
        time.sleep(0.2)
        ser.reset_input_buffer()
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


if __name__ == "__main__":
    main()
