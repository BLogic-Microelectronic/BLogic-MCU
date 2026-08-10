# BLogic MCU - ASIC Fiziksel Tasarim Akisi

> **DURUM.** Basliklar DDK "Final Istenen Ciktilar" bolum 9.1-9.13 ile birebir.
> Dolu bolumler: 9.2, 9.3, 9.4, 9.5, 9.6, 9.13. Acik bolumler `[ACIK]`
> etiketli; nihai kosu (Ip-5 dondurmasi sonrasi) ve SD2/K-RUN kararlariyla
> kapanacak. Teslimden once bu uyari bloku silinecek.

## 9.1 Tasarim Ozeti  `[ACIK - SD2]`

Tasarimin kisa aciklamasi ve amaci; en ust seviye modul adi (`asic_top`);
temel giris/cikis arayuzleri; saat ve reset portlari (`clk_i`, `rst_ni`);
hedef saat frekanslari.

TBD - hedef frekans SD2 karariyla kesinlesecek; `config.yaml` CLOCK_PERIOD,
`constraints/design.sdc` create_clock, bu bolum ve sunum AYNI sayiyi
soylemek zorunda (bolum 9.13). Su anki calisma degeri: 50 MHz (20 ns).

## 9.2 Arac ve Ortam Bilgileri

Bkz. `asic/environment/versions.txt` (LibreLane 3.0.6 / `ba7193b`, Classic,
sky130A @ Open PDKs `8afc834`, sky130_fd_sc_hd, OpenRAM kullanilmadi).
Referans surumden farkli arac/PDK/kutuphane KULLANILMADI.

## 9.3 Akisin Calistirilmasi

**On kosullar:**

- Nix (flakes destekli). Kurulum yonergesi: LibreLane 3.0.6 resmi
  dokumantasyonu, Nix tabanli kurulum sayfasi.
- Referans PDK (bir kez, ag erisimiyle): `cd asic && make pdk`
  (`ciel enable --pdk-family sky130 8afc8346a57fe1ab7934ba5a6056ea8b43078e71`).
- Ortam degiskeni gerekmez; tum yollar depoya goreli.

**Nix ortamini baslatmak (istege bagli, elle calisma icin):**

    cd asic/environment
    nix develop --accept-flake-config     # librelane --version -> v3.0.6

**Zorunlu yeniden calistirma komutu (DDK Bolum 8):**

    cd asic && make asic_run

`make` hedefleri `librelane` PATH'te degilse komutlari kendiliginden
`environment/` flake ortaminda calistirir (`scripts/run_in_env.sh`);
onceden `nix develop` acmak gerekmez.

**`run/` dizininin hazirlanisi:** `asic_run` once `run/` altini temizler
(yalniz `.gitkeep` kalir), sonra LibreLane Classic akisini
`--force-run-dir run/RUN_<tarih-saat>` ile baslatir; tum gecici adim
dizinleri, ara veritabanlari ve `final/` gorunumleri bu dizinde olusur.

**Rapor ve ciktilarin toplanmasi:** akis bitince `scripts/collect_outputs.sh`
Bolum 5 raporlarini `asic/reports/`, Bolum 6 ciktilarini `asic/results/`
altina Tablo 8 yerlesimiyle kopyalar ve `checksums/SHA256SUMS` uretir.
Zorunlu bir kalem eksikse betik sifir disi kodla biter.

**Ek hedefler:** `make asic_verify` (zorunlu dosya varligi + metrik ozeti),
`make asic_clean` (`run/` temizligi), `make check_filelist`
(config.yaml <-> filelist.f uyumu).

**Yaklasik calisma suresi ve kaynaklar:** dogrulanmis ortam GCP 8 vCPU /
60 GB RAM; toplam sure TBD (10-11 Agu gece kosusu olcumuyle yazilacak).
Dusuk RAM'li makinelerde `magic-writelef` adimi OOM verebilir; 60 GB ile
sorunsuz. Disk: kosu basina ~1-2 GB (`run/` altinda, teslimde silinir).

## 9.4 RTL ve Akis Girdileri

- **Dosya listesi:** `asic/filelist.f`. Kanonik kaynak
  `asic/config.yaml` icindeki `VERILOG_FILES` listesidir; `filelist.f`
  ondan uretilir (`python3 scripts/check_filelist.py --generate`) ve her
  `make asic_run` basinda uyum otomatik denetlenir (DDK sayfa 20'nin
  istedigi otomasyon). 67 kaynak dosya, derleme sirasina gore.
- **Yol tabani:** `filelist.f` yollari `asic/` icinden goreli cozulur
  (`../rtl/...`); ayni yollar depo kokune gore `rtl/...` agacina denk
  gelir. Ana RTL kaynaklari, dogrulama/testbench ve FPGA dosyalari
  `asic/` altina KOPYALANMAMISTIR (Bolum 3/4 kurali).
- **Include dizinleri:** `rtl/asic`, `rtl/core/cv32e40p/rtl/include`,
  `.../pulp_platform_common_cells/include`, `rtl/bus/axi/include`.
- **Derleme tanimlari (ZORUNLU):** `SYNTHESIS`, `ASIC_SRAM_MACRO`
  (SRAM makro dallarini secer), `BOOTROM_CONTENT` (boot ROM icerigini
  gomer). Hem `config.yaml` hem `filelist.f` ayni tanimlari tasir.
- **Ana yapilandirma:** `asic/config.yaml` (LibreLane Classic).
- **Zamanlama kisiti:** `asic/constraints/design.sdc` (bolum 9.6).
- **Ucuncu taraf RTL konumlari:** `rtl/core/cv32e40p/` (vendor:
  common_cells, fpnew paketi dahil), `rtl/bus/axi/`,
  `rtl/peripherals/verilog-uart` kokenli UART cekirdegi. Ayrinti ve
  lisanslar: `asic/THIRD_PARTY.md`.
- **En ust seviye modul:** `asic_top` - RTL, `config.yaml` ve bu README
  ayni adi kullanir (Bolum 3.1 uyum sarti).

## 9.5 SRAM ve Fiziksel Makrolar

Tasarim, Tablo 5'te onayli iki hazir SKY130 SRAM makrosunu kullanir.
Kaynak: referans PDK kurulumu (`libs.ref/sky130_sram_macros/`, Open PDKs
`8afc834`); gorunumler Tablo 8 geregi depo icine kopyalanmistir. Fiziksel
ve mantiksal gorunumler DEGISTIRILMEMISTIR (Bolum 1.3).

| | `sky130_sram_2kbyte_1rw1r_32x512_8` | `sky130_sram_1kbyte_1rw1r_32x256_8` |
|---|---|---|
| Kapasite / derinlik / genislik | 2 KiB / 512 / 32 bit | 1 KiB / 256 / 32 bit |
| Port yapisi / yazma | 1RW + 1R / 8-bit | 1RW + 1R / 8-bit |
| Instance yollari | `i_soc.i_instr_sram.*.u_macro`, `i_soc.i_data_sram.*.u_macro`, `i_soc.i_ai_sram.*.u_macro` (bank dizileri, `sram_macro_bank.sv`), `i_soc.i_ai_accel.u_input_mem` | `i_soc.i_ai_accel.u_conv_w_mem` |
| GDSII | `macros/<ad>/gds/<ad>.gds` | ayni kalip |
| LEF | `macros/<ad>/lef/<ad>.lef` | ayni kalip |
| Liberty | `macros/<ad>/lib/<ad>_TT_1p8V_25C.lib` | ayni kalip |
| Verilog modeli | `macros/<ad>/verilog/<ad>.v` | ayni kalip |
| SPICE netlisti | `macros/<ad>/spice/` | ayni kalip |
| Guc / toprak pinleri | `VPWR` / `VGND` | `VPWR` / `VGND` |

Toplam makro sayisi sentez istatistiginden dogrulanir: 26 x 2KB + 1 x 1KB
= **27 makro** (10 Agu `config.yaml` sentez kosusu; nihai sayi
`reports/synthesis/stat.json`'dan okunur, celiski halinde stat esastir).

**PDN baglantisi:** makro `VPWR`/`VGND` pinleri tasarimin `vccd1`/`vssd1`
aglarina baglanir (`config.yaml` `PDN_MACRO_CONNECTIONS`, uc instance
kalibi icin ayri kural). Sabit yerlesim `macro_placement.cfg` ile verilir.

**Kose varsayimi (bu bolumun en onemli maddesi):** iki makro da PDK'da
yalniz `TT_1p8V_25C` Liberty ile dagitilir; Tablo 4'un SS/FF corner'larina
birebir karsilik gelen model YOKTUR. Bolum 1.2 / 3.3'un istedigi beyan:
SS/FF analizi, en yakin model (TT) uzerine olcume dayali kotumser derate
uygulanarak yapilir - `sky130_fd_sc_hd__dfxtp_1` clk->Q ortanca gecikmesi
TT 0.4376 ns / SS 1.1642 ns, oran **2.661x** (setup/late), hold/early
icin 0.5x. Uygulama `constraints/design.sdc` icindedir. Bu bir waiver
degil, eksik modelin bilerek kotumser kapatilmasidir.

## 9.6 Zamanlama Kisitlari ve Istisnalari

Kisit dosyasi: `asic/constraints/design.sdc`. PnR ve signoff ayni dosyayi
kullanir (`PNR_SDC_FILE` = `SIGNOFF_SDC_FILE`); Bolum 6.2 geregi tek SDC
teslimi yeterlidir.

- **Birincil saat:** `clk` = `clk_i` portu, periyot 20.000 ns (50 MHz).
- **Generated clock:** YOK. QSPI SCLK, `clk`'den register cikisiyla
  uretilir (en fazla clk/2 = 25 MHz), ic saat olarak kullanilmaz ve tum
  veri yollari ayni saat alanindadir; bu nedenle generated clock tanimi
  gerekmez.
- **Saat alani iliskileri / asenkron saat gruplari:** tasarim TEK saat
  alanlidir, CDC yolu yoktur (FPGA'daki MMCM `fpga_top` icindedir,
  ASIC'e girmez). Ilgili kosullu tanimlar gerekmez.
- **Input/output delay:** tum cevre birimi portlarina (UART/I2C/QSPI/
  GPIO) max 6.000 ns / min 0.500 ns butce; portlar acik listeyle verilir.
- **Clock uncertainty:** setup 0.500 ns, hold 0.100 ns.
  **Input transition:** saat gecisi 0.150 ns. **Output load:** 5 pF
  (kotumser pad + hat butcesi). (Bolum 3.2 "onerilen" kalemleri.)
- **False path:** TEK istisna `set_false_path -from [get_ports rst_ni]`.
  Gerekce: `rst_ni` asenkron assert / senkron release'dir; release
  senkronizasyonu cip ust seviyesinde (pad halkasi / reset denetleyicisi)
  yapilir, bu sinif yol gercek veri zamanlamasi tasimaz. Recovery/removal
  davranisi release senkronizasyonuyla garanti edilir. Gercekte
  zamanlanmasi gereken hicbir yol istisnaya alinmamistir.
- **Multicycle path:** YOK (tum yollar tek cevrim kurali).
- **SRAM derate:** bolum 9.5'teki 2.661x/0.5x `set_timing_derate`
  uygulamasi bir zamanlama istisnasi degil, eksik SS/FF makro modelinin
  kotumser kapatilmasidir; yine de seffaflik icin burada beyan edilir.

## 9.7 Fiziksel Tasarim Yapilandirmasi  `[ACIK - K-RUN/Ip-5]`

Die/core alanlari veya otomatik floorplan parametreleri; hedef utilization;
en boy orani; pin yerlesim yontemi; yonlendirme katmanlari; guc/toprak agi
isimleri; PDN yapilandirmasi; makro guc baglantilari; makro yerlesimi;
CTS yapilandirmasi; yardimci otomasyon dosyalari.

Mevcut calisma degerleri `config.yaml` yorumlarinda (PLAN D floorplan,
`BELLEK_ENVANTERI.md` olcum gecmisi); ROUTING_OBSTRUCTIONS bolumu K-RUN
hukmuyle kesinlesip buraya islenecek.

## 9.8 Lint Sonuclari ve Istisnalari  `[ACIK - nihai kosu]`

Kullanilan waiver ve yapilandirma dosyalari; kapatilan/kabul edilen
uyarilar ve gerekceleri; inferred latch aciklamalari.
Waiver yoksa bu durum kisaca belirtilecek (su an waiver dosyasi yok;
nihai kosunun lint ciktisiyla beyan yazilacak).

## 9.9 Bilinen Sorunlar ve Kabul Edilmis Istisnalar  `[ACIK - K-RUN]`

Bilinen hata/uyari/ihlaller; sonuclari etkileyebilecek arac veya akis
sorunlari; takim degerlendirmesi.

Su an bilinenler:

- `metrics.json`'in ss/ff alanlari kosunun kendi `max.rpt`'si ile
  tutmuyor (ss icin -91.57 vs -23.71). **Rapor dosyasi esastir**, metrik
  alani degil.
- LVS 205 hata: yapisal kaynaklar (antenna diyotlarinin VPWR muhasebesi +
  `gpio[31:16]` bag pinleri); GDS'ten cikarilan 1.795.705 elemanli gercek
  netlist ile soyut cikarim BIREBIR ayni 205'i veriyor - cikarim artefakti
  degil, bilinen ve aciklanan yapisal fark. (Nihai metin K-RUN sonrasi.)

## 9.10 Guc ve IR-Drop Analizi  `[ACIK - nihai kosu]`

Saat frekansi; timing/guc corner'lari; besleme gerilimi; switching activity
girdisi veya varsayimlar; ozel gerilim kaynagi konum dosyasi kullanilmadiysa
bu durum. Acik switching activity girdisi yoksa sonuclar **tahmini** olarak
isaretlenecek (bolum 5.7).

## 9.11 Signoff Sonuc Ozeti  `[ACIK - nihai kosu]`

Kullanilan signoff PVT corner'lari (tt_025C_1v80 / ss_100C_1v60 /
ff_n40C_1v95); setup ve hold WNS/TNS; Magic ve KLayout DRC; Netgen LVS;
anten, XOR, PDN ve baglantisiz pin sonuclari.

## 9.12 Rapor ve Cikti Konumlari  `[ACIK - nihai kosu]`

Ciktilarin uretildigi LibreLane kosu etiketi (`make asic_run` ciktisindaki
`RUN_...`); esas alinan nihai GDSII ve onu ureten arac; bolum 5 raporlarinin
ve bolum 6 ciktilarinin konumlari (Tablo 8 yerlesimi, `scripts/
collect_outputs.sh` haritasi); `run/` dizininin kullanimi ve cikti toplama
islemi (bolum 9.3'te aciklandi).

## 9.13 Ucuncu Taraf Bilesenler ve Lisanslar

Bkz. `asic/THIRD_PARTY.md` ve `asic/licenses/`.

---

**Tutarlilik kurali (bolum 9.13):** `asic/README.md`, `asic/environment/versions.txt`,
`asic/config.yaml`, teslim edilen raporlar ve nihai ciktilar arasinda celiskili
bilgi bulunamaz.
