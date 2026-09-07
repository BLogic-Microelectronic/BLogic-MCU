# Demo günü kontrol listesi — TEKNOFEST jüri test aracı (demo_harness.py 1.0.2)

Jüri, kartı kendi Python aracına bağlar: **stream UART** üzerinden 1960 baytlık
vektörleri gönderir, **core UART**'tan `RESULT: <sınıf>` satırını okur, golden
uyumunu, gecikmeyi ve 11 sağlamlık senaryosunu raporlar. Bizim tarafımızda
firmware v2 (`sw/demo/demo_main.c`), ICD `sw/demo/team_icd.json`, simülasyon
kanıtı `make demo-harness-sim` (README §12.6).

**Durum (8 Eylül 00:53):** kartta jüri aracıyla public set 156/156 golden uyumu, 0 timeout, sağlamlık 11/11,
gecikme ~43 ms; CP2102 adaptör (COM8) + kart FT232 (COM7) ile. Rapor: `sw/demo/harness_results/2026-09-08_public_dataset/`.

## 1. Yanımızda olacaklar

- Genesys 2 + güç adaptörü, USB-JTAG kablosu, USB-UART için USB-A kablosu (COM7).
- **2 adet 3,3 V USB-TTL adaptör** (FTDI TTL-232R-3V3 / FT231X / CP2102) + dişi-dişi jumper.
  5 V mantık seviyeli adaptör kullanılmaz (Pmod bankı LVCMOS33).
- Laptop: Vivado HW manager, `rtl/fpga/fpga_top.bit`, flash'ta firmware v2.
- USB bellek: `demo_program` klasörü (kısa yola kopyalanmış, örn. `C:\demo`), `team_icd.json`,
  FTDI VCP ve CP210x sürücü kurulum dosyaları, basılı ICD + kablolama şeması.

## 2. Kablolama (Pmod JA, üst sıra)

| Adaptör | Pmod JA | FPGA | Not |
|---|---|---|---|
| TXD | **JA1** | U27 `ja[0]` = UART1 RXD | tek zorunlu hat (kart stream üzerinden göndermez) |
| RXD | **JA2** | U28 `ja[1]` = UART1 TXD | echo/deneme için |
| GND | **JA5** | GND | şart |
| VCC | bağlanmaz | | |

Core UART = karttaki FT232 (COM7). Adaptör takılınca ikinci COM portu çıkar
(`python demo_harness.py ports`).

## 2b. Adaptörsüz ön test (jumper)

USB-TTL adaptör gelmeden UART1 hattı ve ayrıştırıcı kartta denenebilir: **JA1 ile JA2'yi bir
jumper telle birleştir**, COM7 terminalinde `l` gönder. Firmware kendi golden vektörünü
harness çerçevesi olarak JA2'den yollar, JA1'den geri alır ve `[DEMO] loopback frame received`
+ `RESULT: yes` basar. Başarısızsa `[DEMO] loopback FAILED` yazar (jumper, sw2/hız).
Adaptör takılıyken jumper ÇIKARILIR.

## 3. Sıra

1. `fpga_top.bit` yükle, **R19**'a bas. COM7'de banner + açılış çıkarımı görünür
   (`python demo_harness.py probe --core-port COM7 --core-baud 115200 --seconds 20`).
2. `team_icd.json` içinde yalnız iki port adını düzelt (`stream.port.port`, `core.port.port`).
   Stream hızı: **sw2 aşağı = 115200** (ICD `115200`), sw2 yukarı = 230400 (ICD `230400`).
   1 Mbps kullanma (UART bölücüsü 8'in katına yuvarlar, +%4,2 hata).
3. `python demo_harness.py validate -c team_icd.json` → `Valid` (1 uyarı normal: baud < 921600).
4. Isınma: `python demo_harness.py run -c team_icd.json -n 20 -o C:\demo\results` → timeout 0.
5. Public set: `python demo_harness.py run -c team_icd.json --manifest public_dataset\manifest.csv -o C:\demo\results`
   → beklenen **Golden agreement 156/156**, timeouts 0 (SW referansı offline 156/156 eşleşti).
6. Jürinin gizli seti aynı komutla; ardından `--only-robustness` → 11/11
   (`peripheral_interleave` bizde `r` komutuyla PASS).
7. `results\BLogic_Mikroelektronik_<zaman>\` klasörünü USB'ye ve laptopa kopyala:
   `report.md`, `summary.json`, `samples.csv`, `robustness.csv`, `transcript.log`, `config_used.json`.

## 4. Firmware'in beklediği / verdiği

- Çerçeve: `"BLG1"` + uzunluk 2 bayt LE (1960) + 1960 int8 + CRC16-CCITT 2 bayt LE (payload).
- Cevap (COM7): `RESULT: yes` satırı, ardından `[DEMO] class = yes  HW cycle = 459065 ...` (panel bunu okur).
- Kesik/fazla baytlı çerçeve: alıcı tampon içindeki bir sonraki `BLG1`'e kayar; 100 ms sessizlikte
  yarım çerçeveyi atar. Art arda çerçeveler: her bekleme döngüsü UART1'i boşaltır (256 B halka).
- Hook'lar: `?` → `BLogic MCU` banner'ı (boot hook), `r` → `REPORT: SW baseline ...` (interleave hook).
- Kart 4 skoru vermez (hızlandırıcı yalnız argmax yazar); aracın skor hatası metriği boş kalır, puanlanmaz.

## 5. Sorun olursa

| Belirti | Sebep / çözüm |
|---|---|
| İkinci port görünmüyor | adaptör sürücüsü; USB bellekteki kurulumu yükle, `ports` ile tekrar bak |
| Tüm vektörler timeout | JA1/GND kablosu, ICD'de stream portu ile core portu yer değiştirmiş, sw2 ile ICD hızı uyuşmuyor |
| İlk kare tamam, sonrakiler timeout | COM7'yi başka bir terminal açık tutuyor (PuTTY/panel) — kapat |
| `Boot NOT DETECTED` uyarısı | zararsız (rapora girmez); `?` gönderildiğinde banner basılır, flush sonrası 200 ms kaybolabilir |
| Rapor klasörü yazılamadı | uzun yol (OneDrive); `-o C:\demo\results` kullan |
| Panel ile aynı anda çalışmaz | jüri aracı COM7'yi kullanırken paneli açma; ek demolar araç kapandıktan sonra |

Yedek: `fpga_top_m2_demo.bit` (SRAM boot) eski firmware taşır, jüri aracıyla uyumlu DEĞİL;
yalnız flash boot başarısızsa ve panel demosu için.
