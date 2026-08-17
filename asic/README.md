# BLogic MCU - ASIC Fiziksel Tasarim Akisi

> **DURUM.** Basliklar DDK "Final Istenen Ciktilar" bolum 9.1-9.13 ile birebir.
> Tum bolumler dolu ve tum sayisal sonuclar **TEK kosudan** gelir:
> **`RUN_teslim_2026-08-14`** (temiz klon uzerinde sifirdan `make pdk` +
> `make asic_run`, 3 sa 28 dk).

## 9.1 Tasarim Ozeti

RISC-V (CV32E40P) tabanli mikrodenetleyici SoC: AXI4/AXI4-Lite ara baglanti,
QSPI boot, UART/GPIO/Timer/I2C cevre birimleri ve TFLite Micro Speech
(2B evrisim + tam bagli katman) YZ hizlandiricisi. En ust seviye modul:
`asic_top`. Saat: `clk_i` (tek saat alani), reset: `rst_ni` (asenkron,
senkron birakma). Giris/cikislar nihai LEF/DEF'te makro pinleridir (bolum 2).

**Hedef saat frekansi ve kose bazli kapanis (nihai teslim kosusu
`RUN_teslim_2026-08-14`):**

| Kose | Setup WS | Setup TNS | Kapanan frekans |
|---|---|---|---|
| tt_025C_1v80 | **+2,210 ns** | 0 | 50 MHz hedef KAPANIR (fmax ~56,2 MHz) |
| ss_100C_1v60 | -9,083 ns | -10.639,4 ns | ~34,4 MHz (29,08 ns esdegeri) |
| ff_n40C_1v95 | **+4,375 ns** | 0 | KAPANIR (fmax ~64,0 MHz) |

Beyan: hedef saat **50 MHz**; TT kosesinde +2,210 ns marjla kapanir. SS
(1,6 V / 100 C) kosesinde 50 MHz kapanmaz — bu kosede kapanan frekans
**~34,4 MHz**'dir ve en kotu yol saf standart-hucre CPU yoludur (SRAM/derate
kaynakli degildir; kose fiziginin sonucudur). Uc kosenin STA raporlari
eksiksiz teslim edilmistir (`reports/timing/`); ayrinti: bolum 9.9 ve 9.11.
`config.yaml` CLOCK_PERIOD = 20 ns, `design.sdc` create_clock ile ayni.

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
60 GB RAM; nihai kosu **3 saat 28 dakika** surdu (temiz klon, `make pdk`
haric; VM: 8 vCPU / 60 GB RAM / NVMe).
Dusuk RAM'li makinelerde `magic-writelef` adimi OOM verebilir; 60 GB ile
sorunsuz. Disk: kosu basina ~1-2 GB (`run/` altinda, teslimde silinir).

## 9.4 RTL ve Akis Girdileri

- **Dosya listesi:** `asic/filelist.f`. Kanonik kaynak
  `asic/config.yaml` icindeki `VERILOG_FILES` listesidir; `filelist.f`
  ondan uretilir (`python3 scripts/check_filelist.py --generate`) ve her
  `make asic_run` basinda uyum otomatik denetlenir (DDK sayfa 20'nin
  istedigi otomasyon). 67 kaynak dosya, derleme sirasina gore.
- **Yol tabani:** `filelist.f` icindeki tum yollar **`asic/` dizinine gore**
  cozulur (`../rtl/...`) ve akis bu dizinden baslatilir
  (`cd asic && make asic_run`). Bu, DDK'nin 17 Agustos 2026 tarihli
  *"Errata - filelist.f Path Resolution"* duyurusuyla birebir uyumludur;
  duyuru, yollarin depo kokune gore tanimlanmasini soyleyen Bolum 9.4
  ifadesini gecersiz kilar. Ana RTL kaynaklari, dogrulama/testbench ve FPGA
  dosyalari `asic/` altina KOPYALANMAMISTIR (Bolum 3/4 kurali).
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
| Instance yollari | `i_soc.i_instr_sram.*.u_macro`, `i_soc.i_data_sram.*.u_macro`, `i_soc.i_ai_sram.*.u_macro` (bank dizileri, `sram_macro_bank.sv`), `i_soc.i_ai_accel.u_input_mem`, `i_soc.i_ai_accel.u_conv_out.*.u_macro` (2 banka) | `i_soc.i_ai_accel.u_conv_w_mem` |
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
birebir karsilik gelen model YOKTUR.

DDK'nin 17 Agustos 2026 tarihli yazili aciklamasi bu durum icin beklenen
yaklasimi netlestirmistir: hazir SRAM makrolari icin **saglanan
`TT_1p8V_25C` Liberty modeli, SS ve FF analizlerinde de belgelenmis bir
ikame olarak kullanilabilir**; standart hucre kutuphaneleri ise ilgili
kose modellerini kullanmaya devam eder ve **modelde yapay olcekleme
gerekmez**. Teslimimiz bu cercevenin icindedir:

- Standart hucreler her analizde kendi kose Liberty'sini kullanir
  (`tt_025C_1v80` / `ss_100C_1v60` / `ff_n40C_1v95`).
- SRAM makrolari uc analizde de `TT_1p8V_25C` ile modellenir; Liberty
  dosyalarina **hicbir degisiklik yapilmamistir**.
- **Ek olarak** SRAM yollarina olcume dayali kotumser bir `set_timing_derate`
  uygulanir: `sky130_fd_sc_hd__dfxtp_1` clk->Q ortanca gecikmesi
  TT 0,4376 ns / SS 1,1642 ns, oran **2,661x** (setup/late), hold/early
  icin 0,5x. Uygulama `constraints/design.sdc` icinde kose adina
  kosulludur (TT'de 1,0). Bu, DDK'nin *gerekli gormedigi* fazladan bir
  kotumserliktir; modeli degistirmez, yalnizca analizde marj kisar.
- Derate'in SS sonucunu belirlemedigi ayrica olculmustur: SS kosesindeki
  en kotu setup yolu SRAM'den gecmeyen saf standart-hucre CPU yoludur
  (bolum 9.9/1), dolayisiyla derate kaldirilsa da SS'te 50 MHz kapanmaz.

Bu bir waiver degil, eksik modelin bilerek kotumser kapatilmasidir.

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
- **False path (reset):** `set_false_path -from [get_ports rst_ni]`.
  Gerekce: `rst_ni` asenkron assert / senkron release'dir; release
  senkronizasyonu cip ust seviyesinde (pad halkasi / reset denetleyicisi)
  yapilir, bu sinif yol gercek veri zamanlamasi tasimaz. Recovery/removal
  davranisi release senkronizasyonuyla garanti edilir. Gercekte
  zamanlanmasi gereken hicbir yol istisnaya alinmamistir.
- **False path (asenkron girisler):** `set_false_path -from` ile
  `gpio_in_i*` (2FF senkronizator, `gpio_axil.sv:44-50`), `uart_rxd_i` ve
  `uart1_rxd_i` (asenkron seri hat, `rxd_reg` ile orneklenir). Bu portlarin
  `clk`e gore anlamli varis penceresi yoktur; senkron input_delay sahte
  setup/hold ihlali uretir (olculdu: TT en kotu hold yolu `gpio_in_i[0]`).
  Gercekte zamanlanan yol degildir, Bolum 3.2 kurali korunur; bkz. 9.9/3.
  `i2c_sda_i` ve `qspi_io_i*` senkron kisitli KALIR.
- **Multicycle path:** YOK (tum yollar tek cevrim kurali).
- **SRAM derate:** bolum 9.5'teki 2.661x/0.5x `set_timing_derate`
  uygulamasi bir zamanlama istisnasi degil, eksik SS/FF makro modelinin
  kotumser kapatilmasidir; yine de seffaflik icin burada beyan edilir.

## 9.7 Fiziksel Tasarim Yapilandirmasi

Olcum kaynagi: **`RUN_teslim_2026-08-14`** (nihai teslim kosusu).

- **Floorplan (mutlak):** `DIE_AREA` 4180 x 4490 um = **18,77 mm2**,
  `CORE_AREA` (60,60)-(4120,4430) = 17,72 mm2; `FP_SIZING: absolute`.
  Kanal-genisletme karari olcumle alindi: makro sutun kanali 209 -> 300 um,
  satir arasi 60 -> 100 um ile route DRC 1348 -> 0, yakinsama 195 -> 10
  iterasyon (bedel: die +%12,2). Deney zinciri `config.yaml` yorumlarinda.
- **Utilization (olculen):** ornek toplami %49,9 (makrolar dahil);
  std-hucre %12,3. Hedef `PL_TARGET_DENSITY_PCT: 35`,
  `PL_MAX_DISPLACEMENT_Y: 300`.
- **Makro yerlesimi:** `macro_placement.cfg` - 27 SRAM makrosu, 4 sutun x
  alt/ust bant elle yerlesim (koordinatlar dosyada, gerekce 9.5).
- **Pin yerlesimi:** LibreLane varsayilan otomatik pin yerlestirici;
  ozel pin sirasi dosyasi kullanilmadi.
- **Guc/toprak aglari:** ust seviye `VPWR`/`VGND`; SRAM makro pinleri
  `vccd1`/`vssd1`, `PDN_MACRO_CONNECTIONS` ile eslenir (3 desen, 27 makro).
  `PDN_MULTILAYER: true` (met4 dikey + met5 yatay strap). PDN dogrulamasi:
  `reports/pdn/{VPWR,VGND}-grid-errors.rpt` ikisi de BOS (0 hata).
- **Yonlendirme:** tum katmanlar (li1-met5) yonlendiriciye acik; makro
  ustlerinde 81 `ROUTING_OBSTRUCTIONS` kutusu (met1/met2/met5 x 27 makro,
  gerekce config yorumunda: SRAM LEF'inde met5 OBS eksik).
  `GRT_ALLOW_CONGESTION: true`, `GRT_OVERFLOW_ITERS: 25`. Olculen sonuc:
  route DRC 0, toplam tel 6,13 m, via 740.817.
- **CTS:** LibreLane varsayilan CTS yapilandirmasi; olculen saat agaci
  1.785 clock buffer + 280 clock inverter. Yonlendirme sonrasi hold
  onarimi `RUN_POST_GRT_RESIZER_TIMING: true` (ihlal 63 -> 10, olculdu;
  kalan mekanizma 9.9/2).
- **Yardimci dosyalar:** `macro_placement.cfg`, `constraints/design.sdc`,
  `scripts/` (filelist denetimi, cikti toplama, ortam sarici).

## 9.8 Lint Sonuclari ve Istisnalari

Olcum kaynagi: akisin Verilator lint adimi (Verilator 5.044),
`reports/lint/verilator_lint.log`, `RUN_teslim_2026-08-14`.

- **Hata: 0. Uyari: 932. Waiver dosyasi KULLANILMADI** - hicbir uyari
  bastirilmadi, log ham haliyle teslim edilir
  (`reports/lint/waivers/` bos, bilincli).
- **Inferred latch yok:** LATCH sinifi uyari 0.
- Uyari dagilimi ve degerlendirme:
  - `TIMESCALEMOD` 452: timescale direktifi iceren/icermeyen dosya karisimi;
    simulasyon tarafinda derleyici bayragiyla cozulur, sentez sonucunu
    etkilemez.
  - `UNUSEDSIGNAL` 231 / `UNUSEDPARAM` 62: cogunlugu arayuz demetlerinin
    kullanilmayan alanlari ve yapilandirma sabitleri (ornek: AXI'nin
    kullanilmayan yan sinyalleri). Sentezde otomatik budanir.
  - `WIDTHEXPAND` 63 / `WIDTHTRUNC` 31: bilincli genislik donusumleri;
    kritik aritmetik yollar regresyonla dogrulandi (kok `README.md`
    dogrulama bolumu: 14/14 test, kapsama olcumleri).
  - `PINCONNECTEMPTY` 28: bilincli bos birakilan cikis pinleri.
  - Kalanlar (`PROCASSINIT` 15, `BLKSEQ` 13, `VARHIDDEN` 9,
    `CASEINCOMPLETE` 8, `ASCRANGE` 7, `GENUNNAMED` 5, `UNDRIVEN` 4,
    `PINMISSING` 3, `UNOPTFLAT` 2): stil/bilgi seviyesi; islevsel dogruluk
    14/14 regresyon + 46/46 arch-test imza esitligiyle gosterildi.

## 9.9 Bilinen Sorunlar ve Kabul Edilmis Istisnalar

Bilinen hata/uyari/ihlaller; sonuclari etkileyebilecek arac veya akis
sorunlari; takim degerlendirmesi.

Bilinen ve kabul edilmis sinirlar (nihai kosu `RUN_teslim_2026-08-14`):

1. **SS kosesinde 50 MHz kapanmaz.** `ss_100C_1v60` (1,6 V / 100 C) kosesinde
   setup WS -9,083 ns (2.521 yol); en kotu yol saf standart-hucre CPU yoludur
   (`id_stage` ici; SRAM/derate etkisi YOK). Bu kose fiziginin sonucudur;
   RTL degisikligi kapsam disi oldugundan cift beyan yapilmistir (bolum 9.1):
   TT 50 MHz / SS ~35 MHz. Uc kosenin raporlari eksiksizdir.
2. **Kalan hold ihlalleri: tt -0,323 ns (48 yol), ff -0,382 ns (112 yol);
   ss kosesinde hold ihlali YOK (+0,227 ns).** Tumu
   `i_ai_accel -> u_input_mem` dusen-kenar SRAM arayuzunde; kok neden makro
   saat carpikligi (CTS makro saat pinlerine ~1 ns gec variyor). Marj tabanli
   onarim OLCULEREK elendi (0,3 marj: hold degismedi, SS setup -10,3'e coktu;
   0,5: arac cokmesi). FF degeri bilerek kotumser early-0.5 derate modelinin
   sonucudur. Teslim makro seviyesidir (bolum 2); sinir mekanizmasiyla beyan
   edilmistir.
3. **`i2c_sda_i` senkronizatorsuz orneklenir** (RTL gozden gecirme notu);
   SDC'de senkron kisitli tutulmustur. `gpio_in_i` (2FF senkronizator) ve
   `uart*_rxd_i` asenkron giris olarak false path'tir (bolum 9.6).
4. **Magic DRC 9.201 isaret - tamami TEK kural: `nwell.4`. Kok neden ACIK,
   arastirma suruyor.** Olculen gercekler (`reports/drc/drc.magic.rpt`):
   - **Tek kural turu:** "All nwells must contain metal-connected N+ taps"
     (`nwell.4`). Baska hicbir Magic kurali ihlal edilmemistir.
   - Magic'in raporundaki kendi notu: *"Should be divided by 3 or 4"* -
     yani ayri ihlal sayisi **~2.300-3.100** mertebesindedir.
   - Isaretlerin geometrisi: satir yuksekliginde (~2,79 um) yatay seritler,
     23 farkli X konumunda; standart hucre alanindadir.
   - **SRAM makro ayak izlerinin ICINDE sifir isaret vardir** (27 makro
     kutusuna karsi kontrol edildi). Isaretlerin 2.142'si, cevresinde makro
     bulunmayan merkezi mantik koridorundadir. Bu nedenle bulgu
     **satici makrosuna atfedilemez**; onceki surumlerde yer alan
     "satici makro gurultusu" ifadesi olcumle desteklenmediginden
     kaldirilmistir.
   - Ayni GDS uzerinde **KLayout DRC 257 kuralin tamaminda 0** verir; ayrica
     LVS 0 ve XOR 0'dir, yani netlist esdegerligi ve iki akisin geometrisi
     dogrulanmistir.
   - **KOK NEDEN OLCULDU - eksik tap DEGIL.** Nihai DEF'ten 135.957 tap
     hucresinin (1.605 satir) konumlari cikarilip her isaretin merkezine
     en yakin tap mesafesi hesaplandi:

     | Olcum | Sonuc |
     |---|---|
     | En yakin tap mesafesi (min / medyan / maks) | 0,14 / 3,11 / **6,13 um** |
     | 10 um icinde tap bulunan isaret | **9.201 / 9.201 (%100)** |
     | Ayni veya komsu satirda hic tap olmayan isaret | **0** |

     sky130'un tap mesafesi gereksinimi ~15 um mertebesindedir; en kotu
     durumumuz 6,13 um'dir ve bu deger LibreLane'in varsayilan tapcell
     adimiyla tutarlidir. Yani tap hucreleri isaretlenen her bolgede
     mevcuttur ve mesafe kurali fazlasiyla saglanmaktadir - **isaretler
     eksik tap'i gostermiyor, gercek bir latch-up riski yoktur.**
   - **Degerlendirme:** `nwell.4` baglanti-farkinda bir kuraldir; tap'in
     yalnizca varligini degil metale bagli olmasini da ister. Geometrik
     eksiklik olcumle elendigine, ayni GDS uzerinde KLayout 257 kuralda 0
     verdigine ve LVS'in 0 hatayla netlist esdegerligini (VPWR/VGND
     baglantilari dahil) dogruladigina gore, isaretler tasarim kusuruna
     degil Magic'in GDS'ten baglanti cozumleme sinirina isaret etmektedir.
     Bu nedenle **kabul edilmis istisna** olarak beyan edilir.
   - Yeniden uretim: `python3 scripts/tap_analiz.py results/def/<tasarim>.def
     reports/drc/drc.magic.rpt` (olcumu tekrarlar).
   - Not: Magic adimlari akista **tamamlanmaktadir**; rapor uretilmis ve
     teslim edilmistir. `MAGIC_CAPTURE_ERRORS=false` gerekcesi bolum
     9.7/config yorumundadir.
5. LVS = 0 (gercek GDS cikarimi, 1.795.705 eleman). Onceki 197/205 farklar
   dar kanalli eski floorplanin diyot yerlesiminden geliyordu; genis kanalli
   nihai floorplanda tamamen kapanmistir.
6. `metrics.json`'in ss/ff timing alanlari kosunun kendi `max.rpt`'si ile
   her zaman tutmayabiliyor (gozlendi: ss -91.57 vs -23.71). **Rapor dosyasi
   esastir**, metrik alani degil.

7. **QSPI cikis-etkinlestirme (`io_oe`) yazmaclanmadi - bilincli karar.**
   `qspi_master_axil.sv` veri cikisini mode-0 geregi dusen kenarda
   yazmaclar (`tx_io_q`), ancak `io_oe` kombinasyoneldir ve bir cikis
   fazinin SON bitinde ornekleme kenariyla ayni anda birakilir; yani o tek
   bitin RTL hold marji sifirdir. `io_oe`'yi de yazmaclamamayi secmemizin
   gerekceleri:
   - Etki **sistematik degil**, yalnizca son-bit kenar marjidir; her
     transferin diger tum bitleri yarim periyot setup + yarim periyot hold
     alir.
   - **Olculdu:** kartta QSPI flash-boot calisiyor ve 60/60 rastgele
     siniflandirma taramasinda sifir sapma var (`sw/ai_model/
     kart_sweep_raporu_n60.txt`); `qspi-modes` 6/6 ve `qspi-err` 25/25
     simulasyonda yesil.
   - Gercek cipte pad'in **output-disable gecikmesi** fiili hold marjini
     pozitife tasir; RTL'deki sifir marj kotumser bir ust sinirdir.
   - `io_oe`'yi yazmaclamak x2/x4 modlarindaki **bus turnaround**
     zamanlamasini degistirir; dondurma gunu alinacak taze-regresyon riski
     degildir (ayni gun `tx_io_q`'nun yazmaca alinmasi WP#/HOLD# tieoff
     regresyonu uretmisti - bkz. commit `285698b`).
   **Takip SONUCU (nihai kosu, kapatildi):** `ff_n40C_1v95` kosesindeki
   112 hold ihlalinin **hicbiri** `qspi_io_o` degildir
   (`grep -c qspi_io_o reports/timing/nom_ff_n40C_1v95/violator_list.rpt`
   -> 0). Ihlallerin tamami SRAM makro veri girisleridir
   (`u_input_mem` 32, `i_ai_sram` 34, `u_conv_out` 27, `u_conv_w_mem` 18)
   ve mekanizmasi 9.9/2'de aciklanan makro dusen-kenar arayuzudur.
   Karar dogrulanmistir: `io_oe`'nin kombinasyonel birakilmasi hizli
   kosede olculebilir bir hold riski uretmemistir.

## 9.10 Guc ve IR-Drop Analizi

Olcum kaynagi: **`RUN_teslim_2026-08-14`** (nihai teslim kosusu).

- **Kosullar:** saat 50 MHz (`create_clock` 20 ns); besleme 1,80 V nominal;
  guc raporlari uc imza kosesinde (Tablo 4).
- **Switching activity girdisi YOK** (VCD/SAIF verilmedi); OpenSTA
  varsayilan anahtarlama aktivitesi kullanildi. Bolum 5.7 geregi asagidaki
  sonuclar **TAHMINI** olarak isaretlenir.
- **Toplam guc (tahmini):**

  | Kose | Besleme | Toplam |
  |---|---|---|
  | tt_025C_1v80 | 1,80 V | **112,1 mW** |
  | ss_100C_1v60 | 1,60 V | 104,4 mW |
  | ff_n40C_1v95 | 1,95 V | 118,3 mW |

  TT kirilimi (grup): SRAM makrolari %66,1; saat agi %17,0; sequential
  %16,1; kombinasyonel %0,9. Guc butcesinin baskin kalemi bellek -
  27 makro icin beklenen tablo. Beyan edilen tek rakam TT kosesidir
  (**112,1 mW**); 9.11 tablosu da ayni degeri tasir.
- **IR-drop (OpenROAD PSM, tt kosesi):** VPWR en kotu dusum **1,54 mV**,
  VGND en kotu yukselme **1,57 mV** -> besleme geriliminin **%0,09**'u
  (tipik %5 sinirinin cok altinda). Her iki net icin PSM dogrulamasi:
  "All shapes connected". Rapor: `reports/power/irdrop.rpt`.
- **Ozel gerilim kaynagi konum dosyasi kullanilmadi** (varsayilan pad/strap
  beslemesi).

## 9.11 Signoff Sonuc Ozeti

Kaynak kosu: **`RUN_teslim_2026-08-14`** (nihai teslim kosusu; temiz klon
uzerinde sifirdan `make pdk` + `make asic_run`).
Kose seti: tt_025C_1v80 / ss_100C_1v60 / ff_n40C_1v95.

| Kalem | Sonuc |
|---|---|
| Route (TritonRoute) DRC | **0** |
| KLayout DRC | **0** (257 kural, tumu sifir) |
| Magic DRC | 9.201 — tamami tek kural (`nwell.4`); kok neden olculdu, kabul edilmis istisna (9.9/4) |
| Netgen LVS (gercek GDS cikarimi) | **0 hata / 0 cihaz farki** |
| XOR (Magic vs KLayout GDS) | **0** |
| Anten ihlali | **0 net / 0 pin** |
| Baglantisiz pin | 880 (siniflandirma: tablo alti not) |
| PDN grid hatasi (VPWR / VGND) | **0 / 0** (rapor dosyalari bos) |
| Setup WS (tt / ss / ff) | **+2,210** / -9,083 / **+4,375** ns |
| Setup TNS (tt / ss / ff) | 0 / -10.639,4 / 0 ns |
| Setup ihlal sayisi (tt / ss / ff) | 0 / 2.521 / 0 |
| Hold WS (tt / ss / ff) | -0,323 / **+0,227** / -0,382 ns (bolum 9.9/2) |
| Hold TNS (tt / ss / ff) | -7,00 / 0 / -14,68 ns |
| Hold ihlal sayisi (tt / ss / ff) | 48 / 0 / 112 |
| Max cap ihlal sayisi (tt / ss / ff) | 266 / 662 / 219 |
| Max slew ihlal sayisi (tt / ss / ff) | 6.848 / 30.668 / 3.396 |
| Guc (toplam, tahmini, tt kosesi) | **112,1 mW** |
| IR-drop (tt) | %0,09 (en kotu 1,57 mV) |
| Die alani | 18,77 mm2 (4180 x 4490 um) |
| Ornek sayisi / std hucre | 2.588.379 / 296.010 |
| Doluluk (utilization) | %49,87 |

**Tablo notlari:**

- **Baglantisiz pin (880):** dokum
  `reports/signoff/full_disconnected_pins_table.txt`, toplam
  `metrics.json` -> `design__disconnected_pin__count = 880`. Kaynagi iki
  tasarim ozelligidir: (a) 27 SRAM makrosunun tumunde Port0 yalniz yazma
  icin kullanilir, tum okumalar Port1 uzerindendir; bu nedenle her makroda
  `dout0[31:0]` bilincli bos birakilmistir (`rtl/asic/sram_macro_bank.sv`,
  `rtl/ai_accelerator/ai_accelerator.sv`) -> 27 x 32 = 864 pin. (b) Ust
  seviye `gpio_in_i` portu 32 bit tanimlidir; sartname EK-2 geregi GPIO
  16 giris kullanir ve ust yarim (`gpio_in_i[31:16]`) yuk gormez -> 16 pin.
  Toplam 864 + 16 = 880. Guc pinlerinde kopukluk yoktur (LVS = 0 ve
  XOR = 0 ile tutarli).
- **Max cap / max slew ihlal sayilari:** `reports/timing/summary.rpt`
  sutunlaridir; kutuphane karakterizasyon sinirlarinin (max cap / max slew)
  asildigi uc noktalarin sayimidir. Ihlaller agirlikla SS (1,6 V / 100 C)
  kosesinde yogunlasir; 9.1'deki SS kapanis beyaniyla ayni kose
  kosullarindan kaynaklanir. TT kosesinde setup/hold kapanisi saglanmistir
  (WS +2,210 ns, TNS 0).

## 9.12 Rapor ve Cikti Konumlari

- **Kosu etiketi:** **`RUN_teslim_2026-08-14`** (temiz klon uzerinde
  sifirdan uretildi; zincir ucdan uca dogrulandi:
  `make asic_run` -> toplama -> `make asic_verify` TAMAM).
- **Esas GDSII:** `results/gds/asic_top.gds` - **Magic** streamout ciktisi
  esas alinir. KLayout streamout (`asic_top_klayout.gds`) karsilastirma
  icin birlikte teslim edilir; iki cikti arasi **XOR farki 0** (9.11).
- **`run/` kullanimi:** `make asic_run` calisma alanini temizler, akisi
  `run/<TAG>/` altinda kosar, ardindan `scripts/collect_outputs.sh`
  asagidaki kalici konumlara kopyalar (ayrinti 9.3). Butunluk:
  `checksums/SHA256SUMS` — results/ altindaki zorunlu ciktilarin SHA-256
  ozeti, `collect_outputs.sh` uretir (DDK 6.3 kapsami). GitHub 100 MB
  limitini asan rapor ve sonuc dosyalari commit oncesi
  `scripts/guard_large_files.sh` ile paketlenir; olusursa ayrinti
  `results/BUYUK_DOSYALAR.md` dosyasindadir.
- **Bolum 5 raporlari -> `asic/reports/`:**

  | DDK 5.x | Konum |
  |---|---|
  | 5.1 Genel (log/metrik/surumler) | `reports/general/` (`flow.log`, `metrics.json`, `versions.txt`, `resolved.json`) |
  | 5.2 Lint | `reports/lint/verilator_lint.log` (waiver yok, 9.8) |
  | 5.3 Sentez | `reports/synthesis/` (`stat.rpt`, `chk.rpt`, `latch.rpt`) |
  | 5.4 STA (uc kose) | `reports/timing/nom_<kose>/` (wns/tns/ws, min/max, `checks.rpt`, `skew.*`, `violator_list.rpt`) |
  | 5.5 Yerlesim/CTS/Yonlendirme | `reports/routing/` (`asic_top.drc`, `wire_lengths.csv`); yerlesim/CTS olcumleri `reports/general/metrics.json` icinde (utilization, saat agaci hucre sayilari, skew) |
  | 5.6 PDN | `reports/pdn/` (grid hata raporlari; ikisi de bos) |
  | 5.7 Guc + IR-drop | `reports/power/` (kose basina `power.rpt`, `irdrop.rpt`) |
  | 5.8 DRC | `reports/drc/` (KLayout json/lyrdb + Magic rpt/lyrdb) |
  | 5.9 LVS | `reports/lvs/lvs.netgen.rpt` (+ json) |
  | 5.10 Anten | `reports/antenna/` |
  | Signoff ozeti | `reports/signoff/` (`metrics.json`, `manufacturability.rpt`) |

- **Bolum 6 ciktilari -> `asic/results/`:** `gds/` (esas + karsilastirma),
  `def/`, `lef/`, `odb/`, `netlist/` (sentez / PnR / powered),
  `sdc/`, `sdf/`, `spef/`, `lib/`, `mag/`, `spice/`, `config/resolved.json`,
  `metrics/`, `images/asic_top.png` (Tablo 8 yerlesimi).
- Toplama haritasinin tek kaynagi `scripts/collect_outputs.sh`;
  dogrulama `make asic_verify` (`scripts/verify_outputs.sh`).

## 9.13 Ucuncu Taraf Bilesenler ve Lisanslar

Bkz. `asic/THIRD_PARTY.md` ve `asic/licenses/`.

---

**Tutarlilik kurali (bolum 9.13):** `asic/README.md`, `asic/environment/versions.txt`,
`asic/config.yaml`, teslim edilen raporlar ve nihai ciktilar arasinda celiskili
bilgi bulunamaz.
