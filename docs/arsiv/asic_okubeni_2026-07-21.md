> **ARSIV — GECERSIZ.** 21 Temmuz 2026'da, DDK'nin arac/PDK duyurusundan
> once yazildi. Ticari EDA (Synopsys/Cadence), pad ring ve 7 adimli akis
> anlatiyor; DDK "Final Istenen Ciktilar" bolum 1.1 LibreLane Classic'i
> zorunlu tutuyor ve bolum 2 pad ring'i kapsam disi birakiyor.
> **Guncel belge: `asic/README.md`.** Bu dosya yalnizca karar gecmisi icin
> saklaniyor; icerigi teslim iddiasi degildir.

# ASIC (Çip) Akışı — Hazırlık ve Plan

> **Durum (21 Temmuz 2026):** DDK'nın sağlayacağı ticari EDA aracı + PDK + sunucu erişimi
> henüz duyurulmadı. Bu dizin, erişim geldiği gün akışın **aynı gün** koşturulabilmesi için
> hazırlanan araç-bağımsız girdileri içerir. Şartname gereği çip akışı toplam puanın %20'sidir.

## Bu dizindekiler

| Dosya | Amaç |
|---|---|
| `soc_top.sdc` | Sentez/STA kısıtları (50 MHz, I/O bütçeleri, tek saat domeni). `[PDK]` işaretli satırlar araç/PDK netleşince güncellenecek. |
| `OKUBENI.md` | Bu dosya — akış planı ve hazırlık durumu. |

## Planlanan akış (7 adım — DTR Bölüm 3 ile uyumlu)

1. **Sentez** — `soc_files.f` kaynak listesi (FPGA akışıyla ortak; `cv32e40p_register_file_latch.sv`
   hariç — bkz. `rtl/fpga/build_genesys2.tcl` içindeki not) + `asic/soc_top.sdc`.
   Üst modül: `soc_top` (FPGA sarmalayıcısı `fpga_top` ve MMCM ASIC'e girmez).
2. **Floorplan** — SRAM makro yerleşimi (BootROM 1KB, ISRAM 8KB, DSRAM 8KB, AI SRAM 30KB),
   pad halkası, güç şeritleri.
3. **Placement** — standart hücre yerleşimi + tıkanıklık analizi.
4. **CTS** — saat ağacı sentezi; `set_clock_uncertainty` rafine edilir.
5. **Routing** — sinyal serimi + parazitik çıkarım (SPEF).
6. **Signoff** — STA (setup/hold), DRC, LVS, ERC, güç analizi.
7. **GDSII + LEF/DEF çıktıları** — teslim formatı: şartname "Fiziksel Tasarım Akışı" listesi.

## Hazırlık durumu (araçsız yapılabilecek her şey yapıldı)

- ✅ **RTL sentezlenebilirliği kanıtlı:** aynı kaynak listesi Vivado'da 0 hatayla sentezleniyor,
  FPGA'da 50 MHz'de timing met (WNS +1.744 ns) ve kartta çalışıyor — `rtl/fpga/reports/`.
- ✅ **SDC taslağı hazır:** `asic/soc_top.sdc` — saat, reset, I/O bütçeleri, tasarım kuralları.
- ✅ **CDC analizi:** tasarım tek saat domenli (`clk_i`); FPGA'daki MMCM `soc_top` dışında.
  CDC yolu yok → CDC aracı raporu beklenen bulgu: 0 geçiş. RDC: tek reset (`rst_ni`),
  asenkron assert / senkron release stratejisi üst seviyede.
- ✅ **Latch temizliği:** register file FF varyantı kullanılıyor (latch varyantı bilinçli dışlandı);
  RTL'de kasıtlı latch yok.
- ⬜ **SRAM makroları:** `axi_sram_wrapper` içindeki diziler PDK SRAM derleyicisi
  makrolarıyla değiştirilecek (PDK gelince ilk iş).
- ⬜ **Pad halkası / IO hücreleri:** PDK pad kütüphanesine göre üst seviye sarmalayıcı yazılacak.
- ⬜ **Sentez/P&R script'leri:** araç (Synopsys/Cadence/Siemens) duyurulunca bu dizine eklenecek;
  jüri için OKUBENİ ile dokümante edilecek (şartname otomasyon kuralı).

## Erişim duyurusu geldiğinde ilk gün planı

1. Araç + PDK sürümlerini bu dosyaya işle; `soc_top.sdc` `[PDK]` satırlarını doldur.
2. SRAM makrolarını üret/entegre et (`axi_sram_wrapper` parametrik sarmalayıcı zaten hazır).
3. Sentez koştur → temiz log + alan/zamanlama raporunu commit'le.
4. P&R + signoff adımlarını sırayla; her adımın raporu `asic/reports/` altına.
5. GDSII/LEF/DEF çıktıları + akış scriptleri commit → sunum Slayt 18 "plan"dan "sonuç"a döner.
