#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# juri_panel.py - Yarisma gunu juri veri paneli (GUI)
# ============================================
# Amac: jurinin verdigi oznitelik dosyasini (format ne olursa olsun) secip
# tek tusla karta akitmak, sonuclari canli ve buyuk gostermek.
#
# Protokol send_vector.py ile BIREBIR aynidir (BLG1 + toplam-saglama +
# 0xFF onek + 'v' el sikismasi); firmware tarafinda degisiklik gerekmez.
# Cevap ayristirma kart_sweep.py ile aynidir: "sinif = <ad>  HW cycle = <n>".
#
# Desteklenen girdi bicimleri (otomatik algilama):
#   .bin  : N x 1960 bayt ardisik int8
#   .npy  : int8/uint8 dizi, [N,1960] veya [N,49,40] (numpy gerekir)
#   .csv/.txt : satir basina 1960 sayi (virgul/bosluk), -128..127 ya da 0..255
#   .hex  : satir basina 8 haneli word (golden_vectors bicimi), tek vektor
#   klasor: icindeki dosyalar tek tek (yukaridaki bicimlerle)
#
# Kullanim:  python sw/demo/juri_panel.py
# Kuru test: python sw/demo/juri_panel.py --selftest
# ============================================
import argparse
import os
import queue
import re
import struct
import sys
import threading
import time

MAGIC = b"BLG1"
VEKTOR_BOY = 1960          # 49x40 int8, firmware siniri (AI_INPUT_MAX)
ONEK = b"\xff" * 8         # hat copu icin dolgu (send_vector.py --preamble)
SINIF_AD = ["silence", "unknown", "yes", "no"]
SINIF_RENK = {"yes": "#1f7a3f", "no": "#b02a2a",
              "unknown": "#b45309", "silence": "#5a6472"}


# ---------------- cerceve + protokol (send_vector.py ile ayni) -------------
def cerceve_yap(veri: bytes) -> bytes:
    saglama = sum(veri) & 0xFFFFFFFF
    return ONEK + MAGIC + struct.pack("<I", len(veri)) + veri + \
        struct.pack("<I", saglama)


def uint8_to_int8(veri: bytes) -> bytes:
    # K13: microfrontend uint8 -> model int8, bit duzeyinde byte ^ 0x80
    return bytes(b ^ 0x80 for b in veri)


# ---------------- girdi yukleyiciler ---------------------------------------
def _hex_oku(yol):
    out = bytearray()
    with open(yol) as fh:
        for satir in fh:
            tok = satir.strip()
            if tok:
                out += struct.pack("<I", int(tok, 16))
    return bytes(out)


def _metin_oku(yol):
    vektorler = []
    with open(yol) as fh:
        for satir in fh:
            satir = satir.strip()
            if not satir or satir.startswith("#"):
                continue
            parcalar = re.split(r"[,;\s]+", satir)
            sayilar = [int(p) for p in parcalar if p]
            if not sayilar:
                continue
            if len(sayilar) != VEKTOR_BOY:
                raise ValueError("satirda %d deger var, %d bekleniyordu"
                                 % (len(sayilar), VEKTOR_BOY))
            if any(s < -128 or s > 255 for s in sayilar):
                raise ValueError("deger araligi disi: int8 (-128..127) ya da "
                                 "uint8 (0..255) bekleniyor")
            if any(s > 127 for s in sayilar):     # uint8 satiri
                vektorler.append(bytes((s - 128) & 0xFF for s in sayilar))
            else:
                vektorler.append(bytes(s & 0xFF for s in sayilar))
    return vektorler


def _npy_oku(yol):
    import numpy as np
    d = np.load(yol)
    if d.ndim == 3:
        d = d.reshape(d.shape[0], -1)
    elif d.ndim == 1:
        d = d.reshape(1, -1)
    if d.shape[1] != VEKTOR_BOY:
        raise ValueError("npy sekli %s: son boyut %d olmali"
                         % (d.shape, VEKTOR_BOY))
    if d.dtype == np.uint8:
        d = (d.astype(np.int16) - 128).astype(np.int8)
    d = d.astype(np.int8)
    return [d[i].tobytes() for i in range(d.shape[0])]


def _bin_oku(yol):
    ham = open(yol, "rb").read()
    if len(ham) % VEKTOR_BOY:
        raise ValueError("dosya boyu %d, %d'in kati degil"
                         % (len(ham), VEKTOR_BOY))
    return [ham[i:i + VEKTOR_BOY] for i in range(0, len(ham), VEKTOR_BOY)]


def girdi_yukle(yol, uint8=False):
    """(vektor_listesi, aciklama) dondurur; her vektor 1960 baytlik int8."""
    if os.path.isdir(yol):
        vs, notlar = [], []
        for ad in sorted(os.listdir(yol)):
            alt = os.path.join(yol, ad)
            if os.path.isfile(alt):
                v, _ = girdi_yukle(alt, uint8)
                vs += v
                notlar.append("%s(%d)" % (ad, len(v)))
        return vs, "klasor: " + ", ".join(notlar)
    uz = os.path.splitext(yol)[1].lower()
    if uz == ".npy":
        vs = _npy_oku(yol); bicim = "npy"
    elif uz in (".csv", ".txt"):
        vs = _metin_oku(yol); bicim = uz[1:]
    elif uz == ".hex":
        vs = [_hex_oku(yol)]; bicim = "hex"
    else:
        vs = _bin_oku(yol); bicim = "bin"
    if uint8 and bicim in ("bin", "hex"):
        vs = [uint8_to_int8(v) for v in vs]
    for i, v in enumerate(vs):
        if len(v) != VEKTOR_BOY:
            raise ValueError("vektor %d: %d bayt (1960 olmali)" % (i, len(v)))
    return vs, "%s, %d vektor" % (bicim, len(vs))


# ---------------- kart iletisimi -------------------------------------------
class Kart:
    """Portu TEK okuyucu iplik dinler: gelen her satir hem `dinleyici`
    geri cagrisina (panel logu - canli terminal) hem ic kuyruga gider;
    komut cevaplari ic kuyruktan desenle suzulur. Boylece R19/banner gibi
    kendiliginden gelen ciktilar da panelde gorunur - Tera Term gerekmez."""

    def __init__(self, port, baud=115200, zaman_asimi=6.0, dinleyici=None):
        import serial
        self.ser = serial.Serial(port, baud, timeout=0.25)
        self.zaman_asimi = zaman_asimi
        self.dinleyici = dinleyici
        self.hat = queue.Queue()
        self.calisiyor = True
        time.sleep(0.2)
        self.ser.reset_input_buffer()
        threading.Thread(target=self._oku, daemon=True).start()

    def _oku(self):
        while self.calisiyor:
            try:
                satir = self.ser.readline()
            except Exception:
                break
            if not satir:
                continue
            metin = satir.decode("ascii", "replace").rstrip("\r\n")
            if metin and self.dinleyici:
                self.dinleyici(metin)
            self.hat.put(satir)

    def kapat(self):
        self.calisiyor = False
        try:
            self.ser.close()
        except Exception:
            pass

    def _temizle(self):
        try:
            while True:
                self.hat.get_nowait()
        except queue.Empty:
            pass

    def _satir_bekle(self, kalip, sure):
        bitis = time.time() + sure
        while time.time() < bitis:
            try:
                satir = self.hat.get(timeout=0.1)
            except queue.Empty:
                continue
            if kalip in satir:
                return satir.decode("ascii", "replace").strip()
        return None

    def canli_mi(self):
        """Menu istegi gonderir; iki denemede herhangi bir [DEMO] satiri
        gelirse kart canlidir (ilk istek acilis ciktisina denk gelebilir)."""
        for _ in range(2):
            self._temizle()
            self.ser.write(b"?")
            bitis = time.time() + 1.5
            while time.time() < bitis:
                try:
                    satir = self.hat.get(timeout=0.1)
                except queue.Empty:
                    continue
                if b"menu" in satir or b"DEMO" in satir:
                    return True
        return False

    def vektor_gonder(self, veri):
        """'v' + el sikisma + cerceve; (sinif_adi, cevrim) ya da exception."""
        self._temizle()
        self.ser.write(b"v")
        self.ser.flush()
        if self._satir_bekle(b"bekleniyor", 3.0) is None and \
           self._satir_bekle(b"BLG1", 0.5) is None:
            raise TimeoutError("el sikisma yok ('v' cevapsiz)")
        self.ser.write(cerceve_yap(veri))
        self.ser.flush()
        hat = self._satir_bekle(b"sinif =", self.zaman_asimi)
        if hat is None:
            raise TimeoutError("sinif cevabi gelmedi")
        m = re.search(r"sinif = (\w+)\s+HW cycle = (\d+)", hat)
        if not m:
            raise ValueError("cevap cozulemedi: " + hat)
        return m.group(1), int(m.group(2))


# ---------------- GUI ------------------------------------------------------
def gui_calistir():
    import tkinter as tk
    from tkinter import filedialog, messagebox, ttk

    KOYU, MIST, INK = "#17324a", "#f2f5f8", "#20262f"
    kok = tk.Tk()
    kok.title("BLogic MCU — Jüri Veri Paneli")
    kok.geometry("980x640")
    kok.configure(bg=MIST)

    durum = {"kart": None, "vektorler": [], "kosuyor": False, "dur": False,
             "sonuclar": []}
    kuyruk = queue.Queue()

    # ---- ust bar: port + baglanti
    ust = tk.Frame(kok, bg=KOYU)
    ust.pack(fill="x")
    tk.Label(ust, text="BLogic MCU", fg="white", bg=KOYU,
             font=("Segoe UI", 16, "bold")).pack(side="left", padx=12, pady=8)
    tk.Label(ust, text="Micro Speech — canlı jüri paneli", fg="#9fb4c8",
             bg=KOYU, font=("Segoe UI", 10)).pack(side="left")
    baglanti_etiket = tk.Label(ust, text="● bağlı değil", fg="#e0a0a0",
                               bg=KOYU, font=("Segoe UI", 10, "bold"))
    baglanti_etiket.pack(side="right", padx=12)

    ayarlar = tk.Frame(kok, bg=MIST)
    ayarlar.pack(fill="x", padx=12, pady=(10, 0))

    tk.Label(ayarlar, text="Port:", bg=MIST).grid(row=0, column=0, sticky="w")
    port_var = tk.StringVar(value="COM7")
    port_kutu = ttk.Combobox(ayarlar, textvariable=port_var, width=10)
    port_kutu.grid(row=0, column=1, padx=(4, 10))

    def portlari_tazele():
        try:
            from serial.tools import list_ports
            port_kutu["values"] = [p.device for p in list_ports.comports()]
        except Exception:
            pass
    portlari_tazele()
    ttk.Button(ayarlar, text="↻", width=3,
               command=portlari_tazele).grid(row=0, column=2)

    def bagla():
        try:
            if durum["kart"]:
                durum["kart"].kapat()
            durum["kart"] = Kart(port_var.get(),
                                 dinleyici=lambda m: kuyruk.put(("kart", m)))
            if durum["kart"].canli_mi():
                baglanti_etiket.config(text="● bağlı — kart cevap veriyor",
                                       fg="#9fe0b0")
                log("kart bağlandı: " + port_var.get())
            else:
                baglanti_etiket.config(text="● port açık, kart sessiz",
                                       fg="#e8d27a")
                log("UYARI: port açıldı ama menü cevabı yok (R19'a basın?)")
        except Exception as e:
            messagebox.showerror("Bağlantı", str(e))

    ttk.Button(ayarlar, text="Bağlan / Test",
               command=bagla).grid(row=0, column=3, padx=6)

    uint8_var = tk.BooleanVar(value=False)
    tk.Checkbutton(ayarlar, text="girdi uint8 (0..255) → int8 çevir",
                   variable=uint8_var, bg=MIST).grid(row=0, column=4, padx=14)

    # ---- dosya secimi
    dosya_cerceve = tk.Frame(kok, bg=MIST)
    dosya_cerceve.pack(fill="x", padx=12, pady=(8, 0))
    dosya_etiket = tk.Label(dosya_cerceve, text="dosya seçilmedi", bg=MIST,
                            fg=INK, font=("Segoe UI", 10))

    def dosya_sec():
        yol = filedialog.askopenfilename(
            title="Jüri veri dosyası",
            filetypes=[("Tüm desteklenenler", "*.bin *.npy *.csv *.txt *.hex"),
                       ("Hepsi", "*.*")])
        if not yol:
            return
        try:
            vs, aciklama = girdi_yukle(yol, uint8_var.get())
        except Exception as e:
            messagebox.showerror("Dosya", "Yükleme hatası:\n" + str(e))
            return
        durum["vektorler"] = vs
        dosya_etiket.config(text="%s  →  %s  ✓ doğrulandı"
                            % (os.path.basename(yol), aciklama))
        log("yüklendi: %s (%s)" % (yol, aciklama))
        ilerleme["maximum"] = max(1, len(vs))
        ilerleme["value"] = 0

    ttk.Button(dosya_cerceve, text="Jüri dosyasını seç…",
               command=dosya_sec).pack(side="left")
    dosya_etiket.pack(side="left", padx=10)

    # ---- buyuk sonuc gostergesi
    orta = tk.Frame(kok, bg="white", bd=1, relief="solid")
    orta.pack(fill="x", padx=12, pady=10)
    sinif_etiket = tk.Label(orta, text="—", font=("Segoe UI", 52, "bold"),
                            bg="white", fg="#9aa1ab")
    sinif_etiket.pack(pady=(14, 0))
    detay_etiket = tk.Label(orta, text="son çıkarım burada görünecek",
                            font=("Consolas", 11), bg="white", fg="#5a6472")
    detay_etiket.pack(pady=(0, 12))

    sayaclar = tk.Frame(kok, bg=MIST)
    sayaclar.pack(fill="x", padx=12)
    sayac_etiketleri = {}
    for i, ad in enumerate(SINIF_AD):
        c = tk.Label(sayaclar, text="%s: 0" % ad, width=14,
                     font=("Segoe UI", 10, "bold"), bg="white",
                     fg=SINIF_RENK[ad], bd=1, relief="solid")
        c.grid(row=0, column=i, padx=4, ipady=4, sticky="ew")
        sayaclar.columnconfigure(i, weight=1)
        sayac_etiketleri[ad] = c

    # ---- ilerleme + butonlar
    alt = tk.Frame(kok, bg=MIST)
    alt.pack(fill="x", padx=12, pady=8)
    ilerleme = ttk.Progressbar(alt, length=520)
    ilerleme.pack(side="left", fill="x", expand=True)
    ilerleme_etiket = tk.Label(alt, text="0/0", bg=MIST, width=12)
    ilerleme_etiket.pack(side="left", padx=8)

    def kosuyu_baslat():
        if durum["kosuyor"]:
            return
        if not durum["kart"]:
            messagebox.showwarning("Kart", "Önce Bağlan / Test.")
            return
        if not durum["vektorler"]:
            messagebox.showwarning("Dosya", "Önce jüri dosyasını seçin.")
            return
        durum["kosuyor"], durum["dur"] = True, False
        durum["sonuclar"] = []
        sayaclari_sifirla()
        threading.Thread(target=kosu_is, daemon=True).start()

    def kosu_is():
        vs = durum["vektorler"]
        t0 = time.time()
        # ANLIK KAYIT: her sonuc geldigi anda diske yazilir; 900. vektorde
        # elektrik kesilse bile o ana kadarki sonuclar dosyadadir.
        anlik_yol = os.path.join(
            os.getcwd(),
            "juri_anlik_%s.txt" % time.strftime("%Y%m%d_%H%M%S"))
        anlik = open(anlik_yol, "w", encoding="utf-8", buffering=1)
        anlik.write("# anlik kayit — kosu bitiminde ozetli nihai dosya "
                    "ayrica yazilir\n# indeks\tsinif\tcevrim\n")
        kuyruk.put(("log", "anlık kayıt: " + anlik_yol))
        for i, v in enumerate(vs):
            if durum["dur"]:
                kuyruk.put(("log", "koşu kullanıcı tarafından durduruldu"))
                break
            # tek zaman asimi kosuyu bozmasin: bir kez otomatik tekrar
            ad, cyc, hata = None, 0, None
            for deneme in (1, 2):
                try:
                    ad, cyc = durum["kart"].vektor_gonder(v)
                    break
                except Exception as e:
                    hata = e
                    if deneme == 1:
                        kuyruk.put(("log",
                                    "vektor %d: %s — tekrar deneniyor" % (i, e)))
                        time.sleep(0.3)
            if ad is None:
                durum["sonuclar"].append((i, "HATA", 0))
                anlik.write("%d\tHATA\t0\n" % i)
                kuyruk.put(("log", "vektor %d HATA (tekrar da düştü): %s"
                            % (i, hata)))
                continue
            durum["sonuclar"].append((i, ad, cyc))
            anlik.write("%d\t%s\t%d\n" % (i, ad, cyc))
            gecen = time.time() - t0
            kalan = gecen / (i + 1) * (len(vs) - i - 1)
            kuyruk.put(("sonuc", i + 1, len(vs), ad, cyc, kalan))
        anlik.close()
        sure = time.time() - t0
        kuyruk.put(("bitti", len(durum["sonuclar"]), sure))
        durum["kosuyor"] = False

    def durdur():
        durum["dur"] = True

    def tekli():
        if durum["kart"] and durum["vektorler"]:
            durum["kosuyor"] = True
            sayaclari_sifirla()

            def bir():
                try:
                    ad, cyc = durum["kart"].vektor_gonder(durum["vektorler"][0])
                    kuyruk.put(("sonuc", 1, 1, ad, cyc, 0.0))
                except Exception as e:
                    kuyruk.put(("log", "HATA: %s" % e))
                durum["kosuyor"] = False
            threading.Thread(target=bir, daemon=True).start()

    def ozet_metni():
        """Juriye okunacak tek paragraf: dagilim + sure + hata."""
        sonuc = durum["sonuclar"]
        if not sonuc:
            return ""
        dagilim = {ad: 0 for ad in SINIF_AD}
        hatali, cevrimler = 0, []
        for _, ad, cyc in sonuc:
            if ad in dagilim:
                dagilim[ad] += 1
                cevrimler.append(cyc)
            else:
                hatali += 1
        ort = sum(cevrimler) / len(cevrimler) if cevrimler else 0
        return ("%d vektör işlendi · " % len(sonuc)
                + " · ".join("%s %d" % (a, dagilim[a]) for a in SINIF_AD)
                + " · hata %d · ortalama %.0f çevrim = %.2f ms @ 50 MHz"
                % (hatali, ort, ort / 50000.0))

    def kaydet():
        if not durum["sonuclar"]:
            return
        ad = "juri_sonuclar_%s.txt" % time.strftime("%Y%m%d_%H%M%S")
        yol = os.path.join(os.getcwd(), ad)
        ozet = ozet_metni()
        with open(yol, "w", encoding="utf-8") as f:
            f.write("# BLogic MCU juri kosusu — %s\n" %
                    time.strftime("%Y-%m-%d %H:%M:%S"))
            f.write("# %s\n" % ozet)
            f.write("# yol: PC -> UART 115200 -> BLG1 cerceve+saglama -> "
                    "AI SRAM -> HW cikarim -> irq17 -> UART sonuc\n")
            f.write("# indeks\tsinif_no\tsinif\tcevrim\n")
            for i, adx, cyc in durum["sonuclar"]:
                no = SINIF_AD.index(adx) if adx in SINIF_AD else -1
                f.write("%d\t%d\t%s\t%d\n" % (i, no, adx, cyc))
        log("ÖZET: " + ozet)
        log("sonuçlar yazıldı: " + yol)

    ttk.Button(alt, text="Tekli Gönder", command=tekli).pack(side="left", padx=3)
    ttk.Button(alt, text="TOPLU KOŞU", command=kosuyu_baslat).pack(side="left", padx=3)
    ttk.Button(alt, text="Durdur", command=durdur).pack(side="left", padx=3)
    ttk.Button(alt, text="Sonuçları Kaydet", command=kaydet).pack(side="left", padx=3)

    # ---- log
    import tkinter.scrolledtext as st
    log_kutu = st.ScrolledText(kok, height=9, font=("Consolas", 9),
                               bg="#101820", fg="#c8d4e0")
    log_kutu.pack(fill="both", expand=True, padx=12, pady=(0, 10))
    log_kutu.tag_config("kart", foreground="#7fd4a8")  # kart satirlari yesilimsi

    def log(mesaj):
        log_kutu.insert("end", "[%s] %s\n" % (time.strftime("%H:%M:%S"), mesaj))
        # uzun kosuda log sismesin: 3000 satiri gecince ilk 1000'i at
        try:
            if int(log_kutu.index("end-1c").split(".")[0]) > 3000:
                log_kutu.delete("1.0", "1001.0")
        except Exception:
            pass
        log_kutu.see("end")

    sayac = {ad: 0 for ad in SINIF_AD}

    def sayaclari_sifirla():
        for ad in SINIF_AD:
            sayac[ad] = 0
            sayac_etiketleri[ad].config(text="%s: 0" % ad)
        ilerleme["value"] = 0

    def kuyruk_isle():
        try:
            while True:
                oge = kuyruk.get_nowait()
                if oge[0] == "sonuc":
                    _, i, n, ad, cyc, kalan = oge
                    sinif_etiket.config(text=ad.upper(),
                                        fg=SINIF_RENK.get(ad, INK))
                    detay_etiket.config(
                        text="vektör %d/%d   ·   %d çevrim = %.2f ms @ 50 MHz"
                             % (i, n, cyc, cyc / 50000.0))
                    if ad in sayac:
                        sayac[ad] += 1
                        sayac_etiketleri[ad].config(
                            text="%s: %d" % (ad, sayac[ad]))
                    ilerleme["maximum"] = n
                    ilerleme["value"] = i
                    if kalan > 1.0:
                        ilerleme_etiket.config(
                            text="%d/%d · ~%d:%02d" %
                                 (i, n, int(kalan) // 60, int(kalan) % 60))
                    else:
                        ilerleme_etiket.config(text="%d/%d" % (i, n))
                    log("%4d/%d  sinif=%-8s  %d cyc" % (i, n, ad, cyc))
                elif oge[0] == "kart":
                    log_kutu.insert("end", "KART ▸ %s\n" % oge[1], "kart")
                    log_kutu.see("end")
                elif oge[0] == "log":
                    log(oge[1])
                elif oge[0] == "bitti":
                    _, n, sure = oge
                    log("KOŞU BİTTİ: %d vektör, %.1f sn" % (n, sure))
                    kaydet()
        except queue.Empty:
            pass
        kok.after(80, kuyruk_isle)

    kok.after(80, kuyruk_isle)
    kok.mainloop()


# ---------------- selftest (kartsiz) ---------------------------------------
def selftest():
    import tempfile
    ok = True
    v = bytes(((i * 37) ^ 0x5A) & 0xFF for i in range(VEKTOR_BOY))
    c = cerceve_yap(v)
    assert c[:8] == ONEK and c[8:12] == MAGIC
    assert struct.unpack("<I", c[12:16])[0] == VEKTOR_BOY
    assert struct.unpack("<I", c[-4:])[0] == sum(v) & 0xFFFFFFFF
    print("cerceve: OK (%d bayt)" % len(c))
    with tempfile.TemporaryDirectory() as td:
        b = os.path.join(td, "t.bin")
        open(b, "wb").write(v * 3)
        vs, a = girdi_yukle(b)
        assert len(vs) == 3 and vs[0] == v
        print("bin yukleyici: OK (%s)" % a)
        t = os.path.join(td, "t.csv")
        open(t, "w").write(",".join(str(b_ - 128) for b_ in v) + "\n")
        vs, a = girdi_yukle(t)
        assert len(vs) == 1 and len(vs[0]) == VEKTOR_BOY
        print("csv yukleyici: OK (%s)" % a)
        try:
            import numpy as np
            n = os.path.join(td, "t.npy")
            np.save(n, np.frombuffer(v * 2, dtype=np.int8).reshape(2, -1))
            vs, a = girdi_yukle(n)
            assert len(vs) == 2 and vs[1] == v
            print("npy yukleyici: OK (%s)" % a)
        except ImportError:
            print("npy yukleyici: atlandi (numpy yok)")
    print("SELFTEST: %s" % ("GECTI" if ok else "KALDI"))


if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("--selftest", action="store_true",
                    help="kartsiz kuru test (cerceve + yukleyiciler)")
    a = ap.parse_args()
    if a.selftest:
        selftest()
    else:
        gui_calistir()
