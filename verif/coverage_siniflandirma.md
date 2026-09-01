# SoC Satir Kapsamasi - Kapsanmamis Satir Siniflandirmasi

Tarih: 1 Eylul 2026 · Olcum: `make coverage` (Verilator 5.049 devel,
`--coverage-line`, 11 sistem C testi, tek build, sabit payda)
Girdi: `logs/coverage/annotate/` ('%' onekli satir = kapsanmamis)
Sonuc ozeti: line %72,2 (275/381 nokta), branch %84,2 (717/852)

> **Amac:** "Kapsanmayani bilmek, kapsamak kadar degerlidir." Bu dokuman
> SoC olcumundeki HER kapsanmamis satiri uc siniftan birine atar:
>
> - **A - yapisal/erisilemez:** normal calismada tetiklenemez (savunmaci
>   default'lar, es-zamanlilik geregi olu kollar). Kapatilmasi beklenmez;
>   waiver adayi.
> - **B - hata yolu:** yalnizca hata enjeksiyonuyla (NACK, tasma vb.)
>   calisir; SoC'ta negatif test ister.
> - **C - test eksik:** mesru bir senaryoyla tetiklenebilir ama SoC
>   kosusunda boyle bir test yok; somut test onerisiyle birlikte verilir.

## 0. Genel tablo

| Dosya | Kapsanmamis satir | A | B | C |
|---|---|---|---|---|
| i2c_master_axil.sv | 122 | 1 | 4 | 117 |
| qspi_master_axil.sv | 55 | 4 | 0 | 51 |
| obi_to_axi.sv | 23 | 23 | 0 | 0 |
| ai_accelerator.sv | 11 | 7 | 0 | 4 |
| boot_rom.sv | 4 | 4 | 0 | 0 |
| uart_stream_axil.sv | 2 | 1 | 0 | 1 |
| gpio_axil.sv | 2 | 0 | 0 | 2 |
| uart_axil.sv | 1 | 0 | 0 | 1 |
| timer_axil.sv | 1 | 0 | 0 | 1 |
| **Toplam** | **221** | **40** | **4** | **177** |

**Okunusu:** kapsanmamis satirlarin %80'i (177/221) tek nedene iner:
ilgili senaryo SoC regresyonuna eklenmemis. Bunun da %66'si (117 satir)
tek karardan geliyor: `i2c_system_test` kapsama listesinde yok. Yapisal
40 satir ise kanitlariyla asagida belgelidir ve kapatilmasi beklenmez.

## 1. i2c_master_axil.sv - 122 satir (A=1, B=4, C=117)

**Kok neden:** 11 testin HICBIRI I2C'ye dokunmuyor (`i2c_system_test`
kapsama listesinde degil). Blok seviyesinde ayni modul `i2c-sys` TB'siyle
%97,8 (180/184) kapsali (`coverage_tb_summary.txt`); UVM
`i2c_directed_test` NACK yollarini blok seviyesinde ayrica kapsiyor.

| Satir | Kod | Sinif | Not |
|---|---|---|---|
| 92-95, 124-128, 143, 148-155, 159 | AXI yazma/okuma handshake + register mux | C | Herhangi bir I2C register erisimi tetikler (blok-TB'de kapsali) |
| 103-116 | NBY kiskaci, ADR/TDR/CFG yazimi | C | NBY=0/5/2 + CFG temizleme dizisi (blok-TB + UVM'de kapsali) |
| 119, 156 | yazma/okuma case default | C | RO-RDR'ye yazma + haritasiz 0x14 okuma negatif testi |
| 196-201 | tdr_byte (LSB-once bayt secimi) | C | NBY=4 TX transferi tum idx'leri kapsar |
| 237-259, 264-280, 284-302, 304-308, 311-323, 328-332, 335-338, 344-345 | I2C motoru: START/BITS/ACK/STOP fazlari, coklu bayt, RDR yazimi | C | Echo-slave'li i2c_system_test + NBY=4 TX/RX; blok-TB'de kapsali |
| 303, 309-310, 334 | NACK ornekleme, NACK->STOP, nack_err set | B | Slave'siz adres gerekir; UVM i2c_directed_test blok seviyesinde kapsiyor |
| 342 | motor FSM case default | A | 3-bit enum'un 4 durumu da listeli; adsiz kodlamaya gecis yok (SEU korumasi) |

**Kapatma yolu:** `i2c_system_test`'in kapsama kosusuna eklenmesi tek
basina 117 C satirini kapatir. Dikkat: test `i2c_system_tb.sv` (echo
slave'li ayri top) ile kosar; "tek build, sabit payda" metodolojisine
eklemeden once .dat birlestirme davranisi (farkli top hiyerarsisi)
dogrulanmalidir - bkz. bolum 8, madde 1.

## 2. qspi_master_axil.sv - 55 satir (A=4, B=0, C=51)

**Kok neden:** SoC testleri yalniz x1 READ (boot yolu) + FIFO hata
yollarini kosuyor; x2/x4 veri modlari, dummy cevrimleri, 4B adres,
adressiz komutlar (RDSR/RDID) ve cok baytli okuma paketlemesi SoC'ta hic
kullanilmadi (`qspi_modes_tb` blok TB'si cogunu kapsiyor).

| Satir | Kod | Sinif | Not |
|---|---|---|---|
| 127-129, 158-161 | x2 (dual) TX/RX io yonetimi | C | DOR (0x3B) / dual-PP testi |
| 166, 375-376 | x4 RX turnaround + x2/x4 bit ornekleme | C | QOR (0x6B) quad okuma testi |
| 292-295, 303-307 | adressiz komutlar (RES, RDSR/RDID) | C | **RDSR yolu sayfa-yazma akisinin on kosulu** |
| 318-323 | adresli/verisiz (SE) + FAST_READ dummy | C | Silme + dummy'li okuma testleri |
| 341 | 4B adresin 4. bayti | C | FCR[2]=1 + READ4 (0x13) testi |
| 350-365 | SPI_DUMMY durumunun tamami | C | Herhangi bir dummy'li komut acar |
| 384-389, 400-401, 409-412 | cok baytli okuma paketlemesi (tam/eksik word push) | C | len>=7 okuma + len%4==2/3 kuyruk testleri |
| 537, 584 | AXI yazma/okuma case default | C | Rezerve ofset (0x14) negatif erisim |
| 231 | RX underflow bayragi | A | DR-okuma yolu pop'u yalniz !rx_empty'de uretir; bayrak yazilimca erisilemez (savunmaci kod) |
| 342, 404, 457 | addr_byte / eksik-word / FSM default'lari | A | Dis guard'lar bu kollari dislar (RTL yorumlariyla uyumlu) |

**Kapatma yolu (en degerli test):** `WREN(0x06) -> PP(0x02, cok bayt) ->
RDSR(0x05) WIP-poll -> READ geri-okuma` dizisini kosan bir SoC
sayfa-yazma testi; proje defterindeki "sayfa yazma hic dogrulanmadi"
bulgusunu kapatirken 292-295, 303-307, 384-412 satirlarini tek testte
acar.

## 3. obi_to_axi.sv - 23 satir (A=23)

**Tamami yapisal olarak erisilemez.** Kopru AW-yalniz / W-yalniz kabul
kollari ve WAIT_AW / WAIT_W durumlari icin kod tasir; ancak SoC'taki TUM
yazma hedefleri `aw_ready` ve `w_ready`'yi AYNI ifadeyle birlikte uretir
(`axi_sram_wrapper.sv:80-81`, arbiter, tum AXI-Lite cevre birimleri
`awready<=1; wready<=1` ayni dalda). Olculen kanit: 411k+ yazmada 49.740
stall yasandi, hicbirinde ready'ler ayrismadi. Bu kollar ancak
split-ready ureten bir slave eklenirse canlanir -> **waiver adayi**
(satirlar: 146-153, 179-186, 191-194, 199-202, 225).

## 4. ai_accelerator.sv - 11 satir (A=7, C=4)

| Satir | Kod | Sinif | Not |
|---|---|---|---|
| 315-316 | requant ust/alt doyum (`>127`, `<act_min`) | C | Test: bias alanina +/-2^30 uc deger yazip START -> doyum kollari |
| 929, 963 | CSR yazma/okuma case default | C | AI_BASE+0x10 (eslenmemis ofset) yaz/oku negatif testi |
| 317, 512-515 | requant normal yol, get_byte case kollari | A | **Annotasyon artefakti:** fonksiyonlar 8k / 1,27M kez cagrildi; Verilator fonksiyon-ici return'lu kollara kredi vermiyor |
| 501, 885 | AXI master + ana FSM default'lari | A | Tum enum durumlari listeli; adsiz kodlamaya gecis yok |

Blok-TB kapsamasi %96,7 (404/418) ayrica mevcut.

## 5. boot_rom.sv - 4 satir (A=4)

Yazma-kabul yolu (49-53): interconnect boot ROM'un yazma kanalini kalici
olarak kapatir (`soc_axi_interconnect.sv:104/109`: `aw_valid=0,
w_valid=0`) -> hicbir master ROM'a yazma iletemez; kollar SoC'ta
erisilemez. Not: bu kosuda boot testi listede olmadigi icin ROM icerik
yollari da olcum disidir (icerik `make boot` / `boot-real` testlerinde
dogrulanir).

## 6. Kucuk dosyalar (uart_stream 2, gpio 2, uart 1, timer 1)

Hepsi ayni desen: **decode case default'lari** (haritasiz/RO ofsete
erisim -> 0 okunur / yazma yutulur). Tek satirlik CSR erisimleriyle
kapatilir (C): GPIO 0x00'a yazma + 0x08 okuma, UART0 0x14 okuma, UART1
0x1C/0x24 okuma, Timer'da hizasiz `lb` (adres+1) okumasi. Tek istisna
`uart_stream_axil.sv:366` AXI-master FSM default'u - yapisal (A).

## 7. "Annotate'te olmayan dosyalar" - kok neden analizi

Ozet listesinde gorunmeyen dosyalar icin yapilan arastirmanin sonucu
(soru: "yok" = kapsandi mi, olculmedi mi?):

| Dosya | Neden annotate'te yok |
|---|---|
| `soc_top.sv` | Salt yapisal (0 always, 0 ternary) -> `--coverage-line` hic nokta uretmiyor |
| `axi4_to_axilite_bridge.sv` | Salt `assign` gecisi -> nokta yok |
| `uart.v` | Yapisal + **hic instantiate edilmiyor** (uart_axil dogrudan uart_tx/rx kullanir) |
| `axi_slave_tieoff.sv` | Bilincli waiver (`verif/coverage_waivers.vlt:52`) |
| `ai_sram_arbiter.sv` | 88 branch noktasi enstrumante edilmis ve 11 testin birlesiminde **%100 kapsanmis** (zero=0 olan TEK dosya); `--annotate-all` verilmedigi icin yazilmamisti |

Ek bulgu: satir-bazli sayim ('%'), kapsanmis satir uzerindeki
branch-yarisi kayiplarini gostermez - birlesik .dat'a gore
`periph_decoder.sv` 12, `axi_sram_wrapper.sv` 18,
`soc_axi_interconnect.sv` 5, `uart_tx.v` 1 kapsanmamis NOKTA tasiyor.
Bu nedenle 1 Eylul itibariyla `run_coverage.sh` guncellendi:
`--annotate-all` eklendi, ozet listesi tamamlandi (i2c/boot_rom/
axi_sram_wrapper/uart_rx/uart_tx), sessiz atlama acik mesaja cevrildi.

## 8. Eylem plani (oncelik sirasiyla)

1. **I2C'yi SoC kapsamina al** (+117 C satiri): `i2c_system_test`
   kapsama kosusuna eklenmeli. On kosul: test echo-slave'li
   `i2c_system_tb.sv` topunu kullanir; farkli top hiyerarsisinin .dat
   birlesimindeki davranisi (nokta anahtarlari) once kucuk bir denemeyle
   dogrulanmali. Alternatif: ozet dosyasina ayri satir olarak "I2C SoC
   kapsamasi (i2c-sys kosusu)" eklemek.
2. **QSPI sayfa-yazma SoC testi** (WREN->PP->RDSR->READ): ~20+ C satiri
   + defterdeki "sayfa yazma dogrulanmadi" bulgusunu kapatir.
3. **Negatif CSR erisim mini-testi**: tum bloklarin haritasiz/RO
   ofsetlerine yaz/oku (~10 C satiri; gpio/uart/uart1/timer/i2c/qspi/ai
   default'lari tek C testinde toplanabilir).
4. **AI doyum testi**: bias alanina uc degerler yazip START (+2 satir).
5. **A sinifi 40 satir**: bu dokuman waiver gerekcesi olarak kullanilsin;
   istenirse `coverage_waivers.vlt`'ye satir bazli exclude eklenebilir
   (eklenmese de bu dokuman juri sorusuna yeterli cevaptir).

Tahmini etki: 1-4 uygulanirsa kapsanmamis 221 satirin ~177'si kapanir;
kalan 40 A + 4 B satiri gerekceli beyan olarak kalir. Nokta bazinda satir
kapsamasinin %72,2'den %90+ araligina tasinmasi beklenir.

## 9. SONUC - 15 testlik kosum (1 Eylul 2026, ayni gun uygulandi)

Eylem planinin 2-4 maddeleri dort yeni C testi olarak uygulandi ve
kapsama kosusuna eklendi (madde 1'in i2c_system_tb yolu yerine, jenerik
harness'in sda=0 "hep-ACK" determinizmi kullanildi - i2c_soc_test):

| Yeni test | Kapattigi | Not |
|---|---|---|
| `i2c_soc_test` | I2C 122 -> **3** | motor tam yolu (TX/RX coklu bayt), sda=0 sozlesmesi test basinda belgeli |
| `qspi_rdpath_test` | QSPI 55 -> **9** | cok baytli okuma paketleme, dummy, adressiz (RDSR/RES), 4B adres, SE, x2/x4 |
| `csr_negatif_test` | kucuk dosyalar 6 -> **1** + AI CSR default'lari | haritasiz/RO ofsetler tum bloklarda |
| `ai_sat_test` | requant doyumu FONKSIYONEL kanitlandi | conv_out 2x1000 word birebir 0x7F / 0x80 |

**Yeni olcum:** line **%91,1** (347/381), branch **%91,3** (778/852),
annotation %92,0 (onceki: %72,2 / %84,2 / %82,0). Kalan isaretli satirlar
(ekip RTL'i 49):

| Dosya | Kalan | Sinifi |
|---|---|---|
| obi_to_axi.sv | 23 | A (bolum 3 kaniti) |
| ai_accelerator.sv | 9 | A - tamami artefakt/default: 315-317 rq_round_sat `return`leri (doyum ai_sat_test'le FONKSIYONEL kanitli; Verilator fonksiyon-ici return'e kredi vermiyor - 512-515 ile ayni sinif), 501/885 FSM default |
| qspi_master_axil.sv | 9 | A=4 (232 underflow, 343/405/458 default) + C-kalan=5 (355-359: dummy+TX kombinasyonu - mesru ama cok nadir, bilerek acik birakildi) |
| boot_rom.sv | 4 | A (bolum 5) |
| i2c_master_axil.sv | 3 | B=2 (309-310 NACK dali - UVM blok testinde kapsali) + A=1 (342 default) |
| uart_stream_axil.sv | 1 | A (366 FSM default) |
| uart_rx.v | 5 | vendor (kapsam beyani disi; uart_tx.v 0'a indi) |

Duzeltilen siniflandirma: bolum 4'te C sayilan 315-316 aslinda
A-artefakt cikti (test doyumu kanitliyor ama annotate kredisi
dusmuyor); bolum 6'daki kucuk-dosya default'larinin biri haric hepsi
kapandi. Ozet: kalan her satir ya kanitli-yapisal (A), ya blok
seviyesinde kapsanan hata yolu (B), ya da gerekceli tek istisna
(QSPI dummy+TX). "Kapsanmayani biliyoruz" hedefi kapanmistir.
