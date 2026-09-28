<!--
SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
SPDX-License-Identifier: GPL-3.0-only
Licensed under the GNU General Public License version 3 only.
See the LICENSE file in the repository root for the full license text.
-->

# Demo günü kontrol listesi — TEKNOFEST jüri test aracı (demo_harness.py 1.0.2)

Jüri, kartı kendi Python aracına bağlar: **stream UART** üzerinden 1960 baytlık
vektörleri gönderir, **core UART**'tan `RESULT: <sınıf>` satırını okur, golden
uyumunu, gecikmeyi ve 11 sağlamlık senaryosunu raporlar. Bizim tarafımızda
firmware v2 (`sw/demo/demo_main.c`), ICD `sw/demo/team_icd.json`, simülasyon
kanıtı `make demo-harness-sim` (README §12.6).

**Durum (8 Eylül 00:53):** kartta jüri aracıyla public set 156/156 golden uyumu, 0 timeout, sağlamlık 11/11,
gecikme ~43 ms; CP2102 adaptör (COM8) + kart FT232 (COM7) ile. Rapor: `sw/demo/harness_results/2026-09-08_public_dataset/`.
Ek: jüri aracı biçiminde **1000 vektörlük rastgele set** (`make demo-harness-dataset`, `C:\demo\random_dataset`);
kartta 8 Eylül 03:05: **200/200**, 23:56: **2000/2000 golden, 0 timeout, 11/11**, gecikme medyanı 43,34 ms
(`sw/demo/harness_results/2026-09-08_random_dataset_n200/` ve `…_n2000/`).
Aracın grafik arayüzü (`demo_gui.py`) aynı ICD ile denendi (aşağıda adım 8).

Aracın README §11 ön-demo listesi madde madde: validate hatasız ✔ · iki ayrı fiziksel UART aynı anda ✔ (COM7 + COM8) ·
50+ vektörde 0 timeout ✔ (156) · her sonuç ayrıştırıldı ✔ (predicted 156/156) · zorunlu sağlamlık senaryoları ✔ (11/11) ·
interleave hook'u ✔ (`r`) · boot banner algılandı ✔ (`?` → `BLogic MCU`, transcript ilk satır) · payload encoding int8 ✔ ·
public set golden uyumu ✔ (156/156) · skor bildirimi yok (kart argmax basar, metrik puanlanmaz) · kendi büyük regresyon seti ✔
(RTL simde 1000/1000 `ai-batch1000`, kartta 1000/1000 sweep, jüri biçiminde rastgele set) · teslim edilen ICD = test edilen ICD ✔.

## 1. Yanımızda olacaklar

- Genesys 2 + güç adaptörü, USB-JTAG kablosu, USB-UART için USB-A kablosu (COM7).
- **2 adet 3,3 V USB-TTL adaptör** (FTDI TTL-232R-3V3 / FT231X / CP2102) + dişi-dişi jumper.
  5 V mantık seviyeli adaptör kullanılmaz (Pmod bankı LVCMOS33).
- Laptop: Vivado HW manager, `rtl/fpga/fpga_top.bit`, flash'ta firmware v2.
- USB bellek: `demo_program` klasörü (kısa yola kopyalanmış, örn. `C:\demo`), `team_icd.json`,
  FTDI VCP ve CP210x sürücü kurulum dosyaları, basılı ICD + kablolama şeması,
  `C:\demo\random_dataset` (1000 vektör, seed 31082026; `py -3 sw/demo/make_harness_dataset.py --n 1000 --out <dizin>`
  ile 1 dakikada yeniden üretilir) ve `sw/demo/harness_results/` rapor setleri.

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
4. Isınma (aracın README'sindeki 50+ vektör koşulu): `python demo_harness.py run -c team_icd.json -n 50 -o C:\demo\results`
   → timeout 0, her satır ayrıştı ("no golden column" uyarısı normal: sentetik vektörlerin golden'ı yok).
5. Public set: `python demo_harness.py run -c team_icd.json --manifest public_dataset\manifest.csv -o C:\demo\results`
   → beklenen **Golden agreement 156/156**, timeouts 0 (SW referansı offline 156/156 eşleşti).
6. Jürinin gizli seti aynı komutla; ardından `--only-robustness` → 11/11
   (`peripheral_interleave` bizde `r` komutuyla PASS).
7. `results\BLogic_Mikroelektronik_<zaman>\` klasörünü USB'ye ve laptopa kopyala:
   `report.md`, `summary.json`, `samples.csv`, `robustness.csv`, `transcript.log`, `config_used.json`.
8. **Vakit kalırsa (aracın README'sindeki ek öneriler):**
   - Rastgele set: `python demo_harness.py run -c team_icd.json --manifest C:\demo\random_dataset_2000\manifest.csv -n 200 -o C:\demo\results`
     (`-n 0` = setin tamamı; 2000 vektör ~9 dk, kartta 2000/2000 ölçüldü). Golden sütunu bit-exact SW
     referansından; beklenen uyum N/N. Set yoksa 90 saniyede yeniden üretilir:
     `py -3 sw\demo\make_harness_dataset.py --n 2000 --seed 31082026 --out C:\demo\random_dataset_2000`.
   - Grafik arayüz: `python demo_harness.py gui -c team_icd.json` → pencere başlığında `[PARTICIPANT]` + 1.0.2 →
     **Validate** (yalnız baud uyarısı) → **Run** sekmesi: *Manifest CSV* seçili, dosya `public_dataset\manifest.csv`
     ya da `random_dataset\manifest.csv`, *Sample count* 0 (hepsi), *Output directory* `C:\demo\results`, **START**;
     uyarı kutusuna *Yes*; sonunda "Run complete" kutusu (golden agreement, timeouts, robustness) ve **Open Report**.
     *Synthetic (test only)* SEÇİLMESİN: GUI sentetik vektörlere döngüsel yapay bir golden etiketi yazar,
     uyum ~%25 görünür (aracın kendi özelliği, kartla ilgisi yok). **Probe (listen 20 s)** düğmesi Log sekmesinde
     banner'ı gösterir (`?` göndermez; R19'a basılınca banner + açılış çıkarımı görünür).
   - Panel demosu (RANDOM SWEEP, OLED, JTAG) ancak jüri aracı kapandıktan sonra (COM7 tek kullanıcı).

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
| Tüm vektörler timeout | JA1/GND kablosu, ICD'de stream portu ile core portu yer değiştirmiş, sw2 ile ICD hızı uyuşmuyor. **Ayırt etmek için** COM7'ye `r` gönder: `[DEMO] stream frames … rx-bytes=` satırı. **rx-bytes=0** → kabloya bayt gelmiyor: adaptör **JB'ye takılmış** (8 Eylül 03:01 provasında olan buydu; yanlış Pmod'da banner yine gelir, core UART ayrı), tel JA1 değil, GND yok. rx-bytes>0 ama bad-crc/bad-len artıyor → sw2 ile ICD hızı uyuşmuyor |
| İlk kare tamam, sonrakiler timeout | COM7'yi başka bir terminal açık tutuyor (PuTTY/panel) — kapat |
| `Boot NOT DETECTED` uyarısı | zararsız (rapora girmez); `?` gönderildiğinde banner basılır, flush sonrası 200 ms kaybolabilir |
| Rapor klasörü yazılamadı | uzun yol (OneDrive); `-o C:\demo\results` kullan |
| Panel ile aynı anda çalışmaz | jüri aracı COM7'yi kullanırken paneli açma; ek demolar araç kapandıktan sonra |
| GUI'de golden uyumu ~%25 | *Synthetic* veri seçilmiş; *Manifest CSV* ile public set ya da `random_dataset` seçilir |
| GUI START'ta "Invalid configuration" | port adı listede yok (adaptör takılı değil / sürücü); ICD sekmesinde **Scan Ports** sonra portu seç |

Yedek: `fpga_top_m2_demo.bit` (SRAM boot) eski firmware taşır, jüri aracıyla uyumlu DEĞİL;
yalnız flash boot başarısızsa ve panel demosu için.
