#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# jtag_bitbang_probe.py  -  remote_bitbang koprusu ham protokol sondasi
# ============================================
# JTAG debug altsistemi (teslim cipinin parcasi). OpenOCD olmadan, jtag_openocd_sim'in dinledigi TCP
# portuna baglanip OpenOCD remote_bitbang protokolunu dogrudan konusur:
#   '0'-'7' : {tck,tms,tdi} pin yaz  (bit2=tck, bit1=tms, bit0=tdi)
#   'R'     : TDO oku -> '0' / '1'
#   't'/'r' : TRST uygula / birak
#   'Q'     : cikis (simulasyon SimJTAG exit ile biter)
# Adimlar: TRST darbesi, TAP reset (5x TMS=1), Shift-DR'de 32 bit IDCODE oku,
# beklenen degerle (soc_top JTAG_IDCODE 0x0B1061C1) karsilastir.
# Kullanim (sim ayri terminalde kosarken):
#   python3 scripts/jtag_bitbang_probe.py            # IDCODE oku, baglantiyi kapat
#   python3 scripts/jtag_bitbang_probe.py --quit     # sonunda 'Q' gonder (sim biter)
# Cikis kodu: 0 IDCODE eslesti, 1 eslesmedi / baglanti hatasi.
import argparse
import socket
import sys


class BitbangClient:
    def __init__(self, host, port, timeout):
        self.sock = socket.create_connection((host, port), timeout=timeout)

    def write(self, tck, tms, tdi):
        self.sock.sendall(bytes([ord("0") + ((tck << 2) | (tms << 1) | tdi)]))

    def read_tdo(self):
        self.sock.sendall(b"R")
        r = self.sock.recv(1)
        if r not in (b"0", b"1"):
            raise RuntimeError("beklenmeyen 'R' yaniti: %r" % r)
        return 1 if r == b"1" else 0

    # Bir TCK darbesi: TCK=0 ile TMS/TDI kur, TDO oku, TCK=1 (TAP ornekler)
    def clock(self, tms, tdi=0):
        self.write(0, tms, tdi)
        tdo = self.read_tdo()
        self.write(1, tms, tdi)
        return tdo

    def trst_pulse(self):
        self.sock.sendall(b"t")   # TRST uygula
        self.sock.sendall(b"r")   # TRST birak

    def quit(self):
        self.sock.sendall(b"Q")

    def close(self):
        self.sock.close()


def read_idcode(c):
    # Test-Logic-Reset (IR <- IDCODE) -> Run-Test/Idle
    for _ in range(5):
        c.clock(1)
    c.clock(0)
    # Idle -> Select-DR -> Capture-DR -> Shift-DR
    c.clock(1)
    c.clock(0)
    c.clock(0)
    val = 0
    for i in range(32):
        bit = c.clock(1 if i == 31 else 0)   # son bitte Exit1-DR
        val |= bit << i
    c.clock(1)   # Update-DR
    c.clock(0)   # Run-Test/Idle
    return val


def main():
    ap = argparse.ArgumentParser(description="remote_bitbang koprusu sondasi (IDCODE)")
    ap.add_argument("--host", default="127.0.0.1")
    ap.add_argument("--port", type=int, default=9999)
    ap.add_argument("--expect", type=lambda s: int(s, 0), default=0x0B1061C1)
    ap.add_argument("--timeout", type=float, default=10.0)
    ap.add_argument("--quit", action="store_true", help="sonunda 'Q' gonder (sim biter)")
    args = ap.parse_args()

    try:
        c = BitbangClient(args.host, args.port, args.timeout)
    except OSError as e:
        print("[PROBE] baglanti hatasi %s:%d: %s" % (args.host, args.port, e))
        return 1
    print("[PROBE] baglandi %s:%d" % (args.host, args.port))

    try:
        # Ham protokol: pin yaz + TDO oku (yanit geliyor mu?)
        c.write(0, 0, 0)
        c.write(1, 0, 0)
        print("[PROBE] '0' '4' 'R' -> tdo=%d" % c.read_tdo())
        c.trst_pulse()
        idcode = read_idcode(c)
        ok = idcode == args.expect
        print("[PROBE] IDCODE = 0x%08X (beklenen 0x%08X) -> %s"
              % (idcode, args.expect, "OK" if ok else "FAIL"))
        if args.quit:
            c.quit()
            print("[PROBE] 'Q' gonderildi (sim SimJTAG exit ile biter)")
    except (OSError, RuntimeError) as e:
        print("[PROBE] hata: %s" % e)
        return 1
    finally:
        c.close()
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
