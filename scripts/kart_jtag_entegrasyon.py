#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# kart_jtag_entegrasyon.py - GERCEK KARTTA JTAG + YZ cikarimi entegrasyon testi
# ============================================
# JTAG debug altsistemi (teslim cipinin parcasi; 6 Eylul 2026 kartta PASS). Iki alt sistemi BIRLIKTE calistirir: UART0 uzerinden demo
# firmware'ine BLG1 vektoru gonderilirken OpenOCD (kart USB-JTAG, BSCANE2)
# ile cekirdek durdurulur/incelenir/devam ettirilir. Sorular:
#   - Debugger oturumu (halt, bellek/CSR okuma, scratch yazma, resume) calisan
#     sistemi bozuyor mu?  -> sonuc ve cevrim sayisi degismemeli
#   - Donanim breakpoint'i, UART'tan gelen vektor dogrulandiktan sonra ve
#     cikarim baslamadan ONCE (run_hw girisi) yakaliyor mu? -> pc == bp, AI
#     SRAM'de bizim gonderdigimiz baytlar, resume sonrasi dogru sinif
# Onkosullar: kartta fpga_top.bit yuklu, flash'ta demo firmware (M3),
#   WSL'de 'openocd -f rtl/debug/openocd/genesys2_bscan.cfg -c "bindto 0.0.0.0"'
#   kosuyor (telnet 4444 Windows'tan erisilebilir), COM7 Windows'ta serbest.
# Kullanim (Windows, ana depo dizininden ya da mutlak yollarla):
#   py -3 scripts/kart_jtag_entegrasyon.py --port COM7 --bp 0x1015a \
#       --inputs <main>/sw/ai_model/golden_vectors/acc_batch_inputs.hex \
#       --expected <main>/sw/ai_model/golden_vectors/acc_batch_expected.hex \
#       --bin <main>/rtl/fpga/firmware_flash.bin
# --bp: run_hw adresi. firmware_flash.bin icinde run_hw kod baytlari 0x1015a'da
#   dogrulandi (3 Eylul 2026 ELF'i ile ayni; .rodata farklari kodu kaydirmiyor).
import argparse, os, re, socket, struct, sys, time

try:
    import serial
except ImportError:
    print("pyserial gerekli: py -3 -m pip install pyserial"); sys.exit(2)

ONEK = b"\xff" * 8
MAGIC = b"BLG1"
VEKTOR_BAYT = 1960
SINIF = ["silence", "unknown", "yes", "no"]
AI_INPUT = 0x00030000
AI_CSR = 0x40000600
FW_BASE = 0x00010000
DSRAM_BASE = 0x00020000
FLASH_DATA_OFF = 0x8000       # flash imaji: fw@0x0, veri@0x8000 (-> DSRAM 0x20000), YZ agirliklari@0x10000
SCRATCH = 0x00021FF0          # DSRAM sonu, firmware'in kullanmadigi bir sozcuk

LOG = None
def log(*a):
    s = " ".join(str(x) for x in a)
    print(s, flush=True)
    if LOG: LOG.write(s + "\n"); LOG.flush()

# ---------------- UART tarafi ----------------
def cerceve(veri):
    return ONEK + MAGIC + struct.pack("<I", len(veri)) + veri + struct.pack("<I", sum(veri) & 0xFFFFFFFF)

def satir_bekle(ser, desen, saniye):
    t0 = time.time(); buf = b""
    while time.time() - t0 < saniye:
        c = ser.read(1)
        if not c: continue
        buf += c
        if c == b"\n":
            hat = buf.decode("utf-8", "replace").rstrip("\r\n")
            buf = b""
            if hat.strip(): log("    KART> " + hat)
            if desen in hat: return hat
    return None

def vektor_gonder_baslat(ser, veri):
    """'v' + el sikisma + cerceve. Sonucu BEKLEMEZ (breakpoint senaryosu icin)."""
    ser.reset_input_buffer()
    ser.write(b"v"); ser.flush()
    if satir_bekle(ser, "bekleniyor", 3.0) is None:
        raise TimeoutError("'v' el sikismasi yok")
    ser.write(cerceve(veri)); ser.flush()

def sonuc_bekle(ser, saniye=8.0):
    hat = satir_bekle(ser, "sinif =", saniye)
    if hat is None: raise TimeoutError("sinif cevabi gelmedi")
    m = re.search(r"sinif = (\w+)\s+HW cycle = (\d+)", hat)
    if not m: raise ValueError("cevap cozulemedi: " + hat)
    return m.group(1), int(m.group(2))

def vektor_gonder(ser, veri):
    vektor_gonder_baslat(ser, veri)
    return sonuc_bekle(ser)

def hex_vektor(yol, idx):
    satirlar = [l.strip() for l in open(yol) if l.strip()]
    n = VEKTOR_BAYT // 4
    blok = satirlar[idx * n:(idx + 1) * n]
    if len(blok) != n: raise ValueError("vektor %d icin %d satir" % (idx, len(blok)))
    return b"".join(struct.pack("<I", int(t, 16)) for t in blok)

def beklenen(yol, idx):
    satirlar = [l.strip() for l in open(yol) if l.strip()]
    w = int(satirlar[idx], 16)
    logit = list(struct.unpack("<4b", struct.pack("<I", w)))
    return SINIF[max(range(4), key=lambda i: logit[i])], logit

# ---------------- OpenOCD (telnet 4444) ----------------
class Ocd:
    def __init__(self, host, port):
        self.s = socket.create_connection((host, port), timeout=5)
        self.s.settimeout(0.2)
        self._oku_prompt(3.0)
    def _oku_prompt(self, saniye):
        t0 = time.time(); buf = b""
        while time.time() - t0 < saniye:
            try: d = self.s.recv(4096)
            except socket.timeout: continue
            if not d: break
            buf += d
            if buf.endswith(b"> "): break
        # telnet IAC dizileri (\xff\xfb..) ve OpenOCD'nin yankidan sonra bastigi
        # NUL (\x00) baytini at; yoksa "0x00010000: ..." satiri regex'e uymaz
        buf = re.sub(rb"\xff[\xfb-\xfe].", b"", buf).replace(b"\x00", b"")
        return buf.decode("utf-8", "replace")
    def cmd(self, c, saniye=5.0):
        self.s.sendall((c + "\n").encode())
        out = self._oku_prompt(saniye)
        out = out.replace("\r", "")
        satirlar = [l for l in out.split("\n") if l.strip() and not l.strip().startswith(c) and l.strip() != ">"]
        metin = "\n".join(satirlar).replace("> ", "").strip()
        log("    OCD> %s\n%s" % (c, "\n".join("         " + l for l in metin.split("\n")) if metin else "         (cikti yok)"))
        return metin
    def mdw(self, adres, n=1):
        out = self.cmd("mdw 0x%08x %d" % (adres, n))
        sozcukler = []
        for l in out.split("\n"):
            m = re.match(r"\s*0x[0-9a-fA-F]+:\s*(.*)", l)
            if m: sozcukler += [int(x, 16) for x in m.group(1).split()]
        return sozcukler
    def pc(self):
        m = re.search(r"pc.*?0x([0-9a-fA-F]+)", self.cmd("reg pc"))
        return int(m.group(1), 16) if m else None
    def kapat(self):
        try: self.s.close()
        except Exception: pass

# ---------------- test ----------------
def main():
    global LOG
    ap = argparse.ArgumentParser()
    ap.add_argument("--port", default="COM7")
    ap.add_argument("--ocd", default="127.0.0.1:4444")
    ap.add_argument("--bp", default="0x1015a", help="run_hw adresi (hw breakpoint)")
    ap.add_argument("--inputs", required=True); ap.add_argument("--expected", required=True)
    ap.add_argument("--bin", default=None, help="rtl/fpga/firmware_flash.bin (flash icerigi karsilastirmasi)")
    ap.add_argument("--vek", type=int, nargs="+", default=[0, 1], help="acc_batch indeksleri (0=yes_real, 1=no_real)")
    ap.add_argument("--log", default=None)
    a = ap.parse_args()
    bp = int(a.bp, 16)
    os.makedirs("logs/jtag", exist_ok=True)
    LOG = open(a.log or ("logs/jtag/kart_entegrasyon_%s.log" % time.strftime("%Y-%m-%d_%H%M%S")), "w", encoding="utf-8")
    log("[ENTEGRASYON] kart JTAG + YZ cikarimi, %s" % time.strftime("%Y-%m-%d %H:%M:%S"))
    ok_hepsi = True
    def kontrol(ad, kosul, ayrinti=""):
        nonlocal ok_hepsi
        log("  [%s] %s %s" % ("OK " if kosul else "FAIL", ad, ayrinti))
        if not kosul: ok_hepsi = False

    host, port = a.ocd.split(":")
    ocd = Ocd(host, int(port))
    ser = serial.Serial(a.port, 115200, timeout=0.2)
    try:
        # 0) Flash icerigi = depo imaji mi (JTAG ile okunarak)
        # NOT (mimari, belgeli): buyruk SRAM'i veri portundan OKUNAMAZ - crossbar'in
        # veri-yolu AR dekodu ISRAM'i bilerek kapsamaz, 0x1xxxx okumasi varsayilan
        # bacaga (DSRAM) duser (README 10.10 "known limitations", build_genesys2.tcl
        # kok neden notu). Bu yuzden flash icerigi DSRAM'e kopyalanan VERI bolgesi
        # uzerinden dogrulanir: flash 0x8000 -> DSRAM 0x20000 (bootloader asama 1.5).
        log("\n== 0) flash icerigi (JTAG ile DSRAM 0x%08x = flash 0x8000 veri bolgesi) ==" % DSRAM_BASE)
        ocd.cmd("halt"); ocd.cmd("wait_halt 3000")
        w = ocd.mdw(DSRAM_BASE, 8)
        if a.bin and os.path.exists(a.bin):
            bb = open(a.bin, "rb").read()
            ref = list(struct.unpack("<8I", bb[FLASH_DATA_OFF:FLASH_DATA_OFF + 32]))
            kontrol("DSRAM 0x%08x = firmware_flash.bin[0x%x] ilk 32 bayt" % (DSRAM_BASE, FLASH_DATA_OFF), w == ref,
                    "" if w == ref else "kart=%s depo=%s" % ([hex(x) for x in w], [hex(x) for x in ref]))
        else:
            kontrol("DSRAM okundu", len(w) == 8)
        # ISRAM'in veri portundan okunamayip DSRAM'e yansidigini da KAYDA GEC
        wi = ocd.mdw(FW_BASE, 8)
        kontrol("ISRAM 0x%08x veri-portu okumasi DSRAM 0x%08x ile ayni (belgeli yansima)" % (FW_BASE, DSRAM_BASE),
                wi == w, "" if wi == w else "isram=%s dsram=%s" % ([hex(x) for x in wi], [hex(x) for x in w]))
        ocd.cmd("resume")

        # 1) taban: JTAG karismadan vektorler
        log("\n== 1) taban cikarim (JTAG bosta) ==")
        taban = {}
        for i in a.vek:
            v = hex_vektor(a.inputs, i); bs, logit = beklenen(a.expected, i)
            s, c = vektor_gonder(ser, v)
            taban[i] = (s, c)
            kontrol("vektor %d: kart=%s beklenen=%s (logit %s), %d cevrim" % (i, s, bs, logit, c), s == bs)

        # 2) halt / incele / scratch yaz / resume -> sistem bozulmadi mi
        log("\n== 2) halt + CSR/bellek inceleme + scratch yazma + resume ==")
        ocd.cmd("halt"); ocd.cmd("wait_halt 3000")
        pc0 = ocd.pc(); log("    pc (bosta dongu) = 0x%08x" % (pc0 or 0))
        csr = ocd.mdw(AI_CSR, 4)
        kontrol("YZ CSR blogu okundu (CTRL/STATUS/...)", len(csr) == 4, [hex(x) for x in csr])
        ocd.cmd("mww 0x%08x 0xA5A5A5A5" % SCRATCH)
        geri = ocd.mdw(SCRATCH, 1)
        kontrol("DSRAM scratch 0x%08x yaz/oku" % SCRATCH, geri == [0xA5A5A5A5], [hex(x) for x in geri])
        ilk = ocd.mdw(AI_INPUT, 2)
        log("    YZ girdi SRAM ilk 2 sozcuk (son vektorden kalan): %s" % [hex(x) for x in ilk])
        ocd.cmd("resume")
        i0 = a.vek[0]
        s, c = vektor_gonder(ser, hex_vektor(a.inputs, i0))
        kontrol("resume sonrasi vektor %d: %s/%d == taban %s/%d" % (i0, s, c, taban[i0][0], taban[i0][1]),
                (s, c) == taban[i0])

        # 3) donanim breakpoint'i run_hw girisinde: vektor UART'tan gelir,
        #    dogrulanir, cikarim BASLAMADAN cekirdek durur
        log("\n== 3) hw breakpoint @run_hw (0x%08x) - vektor gelirken ==" % bp)
        # riscv-dbg tetikleyicileri yalniz cekirdek DURMUSKEN kurulabilir
        # ("Unable to enumerate triggers: target not halted") -> halt, bp, resume
        ocd.cmd("halt"); ocd.cmd("wait_halt 3000")
        bpout = ocd.cmd("bp 0x%08x 2 hw" % bp)
        kontrol("hw breakpoint kuruldu", "breakpoint set" in bpout, bpout.replace("\n", " | "))
        ocd.cmd("resume")
        v = hex_vektor(a.inputs, i0)
        vektor_gonder_baslat(ser, v)            # sonuc beklenmez: cekirdek bp'de duracak
        out = ocd.cmd("wait_halt 4000", saniye=6.0)
        pc1 = ocd.pc()
        kontrol("cekirdek breakpoint'te durdu: pc=0x%08x == 0x%08x" % (pc1 or 0, bp), pc1 == bp)
        gelen = ocd.mdw(AI_INPUT, 4)
        bekl = list(struct.unpack("<4I", v[:16]))
        kontrol("YZ girdi SRAM'inde UART'tan gelen vektorun ilk 16 bayti", gelen == bekl,
                "" if gelen == bekl else "kart=%s bizim=%s" % ([hex(x) for x in gelen], [hex(x) for x in bekl]))
        ocd.cmd("rbp 0x%08x" % bp)
        ocd.cmd("resume")
        s, c = sonuc_bekle(ser, 8.0)
        kontrol("breakpoint'ten devam sonrasi sonuc %s/%d == taban %s/%d" % (s, c, taban[i0][0], taban[i0][1]),
                (s, c) == taban[i0])

        # 4) son kontrol: sistem hala normal
        log("\n== 4) son kontrol ==")
        i1 = a.vek[-1]
        s, c = vektor_gonder(ser, hex_vektor(a.inputs, i1))
        kontrol("vektor %d tekrar: %s/%d == taban" % (i1, s, c), (s, c) == taban[i1])
    finally:
        # temizlik: rbp de halt ister; sonra cekirdegi kosar birak
        try: ocd.cmd("halt"); ocd.cmd("wait_halt 2000"); ocd.cmd("rbp 0x%08x" % bp)
        except Exception: pass
        try: ocd.cmd("resume")
        except Exception: pass
        ocd.kapat(); ser.close()

    log("\n[ENTEGRASYON] VERDICT: %s  (log: %s)" % ("PASS" if ok_hepsi else "FAIL", LOG.name))
    LOG.close()
    sys.exit(0 if ok_hepsi else 1)

if __name__ == "__main__":
    main()
