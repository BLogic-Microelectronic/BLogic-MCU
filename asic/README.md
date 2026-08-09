# BLogic MCU - ASIC Fiziksel Tasarim Akisi

> **ISKELET.** Basliklar DDK "Final Istenen Ciktilar" bolum 9.1-9.13 ile birebir.
> Her bolumun basindaki sahip etiketi paralel yazim icindir; bitince
> etiketler ve bu uyari silinecek.

## 9.1 Tasarim Ozeti  `[Berkin]`

Tasarimin kisa aciklamasi ve amaci; en ust seviye modul adi (`asic_top`);
temel giris/cikis arayuzleri; saat ve reset portlari (`clk_i`, `rst_ni`);
hedef saat frekanslari.

TBD - hedef frekans SD2 karariyla kesinlesecek; `config.yaml` CLOCK_PERIOD,
`constraints/design.sdc` create_clock, bu bolum ve sunum AYNI sayiyi
soylemek zorunda (bolum 9.13).

## 9.2 Arac ve Ortam Bilgileri  `[Berkin]`

Bkz. `asic/environment/versions.txt`. Referans surumden farkli kullanilan
arac/PDK/kutuphane varsa burada ayrica gerekcelendirilecek.

## 9.3 Akisin Calistirilmasi  `[Berk]`

Nix ortamini baslatma komutlari; `cd asic && make asic_run`; `run/` dizininin
nasil hazirlandigi; rapor ve ciktilarin nasil toplandigi; on kosullar ve
ortam degiskenleri; yaklasik calisma suresi; onerilen CPU/RAM/disk.

## 9.4 RTL ve Akis Girdileri  `[Berk]`

`asic/filelist.f` konumu ve yol tabani; include dizinleri; derleme
tanimlari (**`ASIC_SRAM_MACRO` ve `BOOTROM_CONTENT` zorunlu**); ana
yapilandirma dosyasi; kisit dosyasi; ucuncu taraf RTL konumlari; ana RTL
kaynaklarinin depodaki yerleri.

## 9.5 SRAM ve Fiziksel Makrolar  `[Berk]` + `[Berkin]`

Her makro icin: ad, instance adi, kaynak konumu, kapasite/veri
genisligi/kelime sayisi, GDSII/LEF/Verilog/Liberty konumlari, guc-toprak
pin adlari (`vccd1`/`vssd1`), PDN baglantisi, kullanilan Liberty modeli.

**Kose varsayimi (bu bolumun en onemli maddesi):** iki makro da yalniz
`TT_1p8V_25C` ile dagitiliyor. SS/FF analizi olculmus derate ile kapsaniyor
- `sky130_fd_sc_hd__dfxtp_1` clk->Q ortanca gecikmesi TT 0,4376 ns / SS
1,1642 ns, oran 2,661. Waiver degil, olcume dayali kotumser modelleme.

## 9.6 Zamanlama Kisitlari ve Istisnalari  `[Berk]`

Birincil saatler ve periyotlari; generated clock; saat alani iliskileri;
input/output delay; clock uncertainty; input transition; output load;
false path ve multicycle path tanimlari **gerekceleriyle**.

Bilinen tek istisna: `set_false_path -from [get_ports rst_ni]` - asenkron
assert / senkron release. Gerekcesi ve recovery/removal yaklasimi yazilacak.

## 9.7 Fiziksel Tasarim Yapilandirmasi  `[Berk]`

Die/core alanlari veya otomatik floorplan parametreleri; hedef utilization;
en boy orani; pin yerlesim yontemi; yonlendirme katmanlari; guc/toprak agi
isimleri; PDN yapilandirmasi; makro guc baglantilari; makro yerlesimi;
CTS yapilandirmasi; yardimci otomasyon dosyalari.

## 9.8 Lint Sonuclari ve Istisnalari  `[Berkin]`

Kullanilan waiver ve yapilandirma dosyalari; kapatilan/kabul edilen
uyarilar ve gerekceleri; inferred latch aciklamalari.
Waiver yoksa bu durum kisaca belirtilecek.

## 9.9 Bilinen Sorunlar ve Kabul Edilmis Istisnalar  `[Berk]` + `[Berkin]`

Bilinen hata/uyari/ihlaller; sonuclari etkileyebilecek arac veya akis
sorunlari; takim degerlendirmesi.

Su an bilinen: `metrics.json`'in ss/ff alanlari kosunun kendi `max.rpt`'si
ile tutmuyor (ss icin -91,57 vs -23,71). **Rapor dosyasi esastir**, metrik
alani degil.

## 9.10 Guc ve IR-Drop Analizi  `[Berk]`

Saat frekansi; timing/guc corner'lari; besleme gerilimi; switching activity
girdisi veya varsayimlar; ozel gerilim kaynagi konum dosyasi kullanilmadiysa
bu durum. Acik switching activity girdisi yoksa sonuclar **tahmini** olarak
isaretlenecek (bolum 5.7).

## 9.11 Signoff Sonuc Ozeti  `[Berk]`

Kullanilan signoff PVT corner'lari (tt_025C_1v80 / ss_100C_1v60 /
ff_n40C_1v95); setup ve hold WNS/TNS; Magic ve KLayout DRC; Netgen LVS;
anten, XOR, PDN ve baglantisiz pin sonuclari.

## 9.12 Rapor ve Cikti Konumlari  `[Berk]`

Ciktilarin uretildigi LibreLane kosu etiketi; esas alinan nihai GDSII ve
onu ureten arac; bolum 5 raporlarinin ve bolum 6 ciktilarinin konumlari; `run/`
dizininin kullanimi ve cikti toplama islemi (`asic/scripts/`).

## 9.13 Ucuncu Taraf Bilesenler ve Lisanslar  `[Berkin]`

Bkz. `asic/THIRD_PARTY.md` ve `asic/licenses/`.

---

**Tutarlilik kurali (bolum 9.13):** `asic/README.md`, `asic/environment/versions.txt`,
`asic/config.yaml`, teslim edilen raporlar ve nihai ciktilar arasinda celiskili
bilgi bulunamaz.
