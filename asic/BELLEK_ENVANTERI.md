# Bellek Envanteri (FAZ 1 ciktisi)

Olcum: `make asic-elab` -> yosys-slang `--keep-hierarchy` + `stat`
Ortam: LibreLane 3.0.5, yosys 0.62 (`7326bb7d`), sky130 `8afc8346`
Tarih: 3 Agustos 2026 · Ham rapor: `build/asic/elab.log`

Toplam: **11 bellek / 410.336 bit**

## Instance bazinda

| Instance                    | Bellek | Bit     | Word x Genislik | ASIC plani                      |
|-----------------------------|--------|---------|-----------------|---------------------------------|
| `i_soc.i_ai_sram`           | 1      | 245.760 | 7680 x 32       | 15 x `sky130_sram_2kbyte_1rw1r_32x512_8` |
| `i_soc.i_instr_sram`        | 1      |  65.536 | 2048 x 32       | 4 x `32x512` makro              |
| `i_soc.i_data_sram`         | 1      |  65.536 | 2048 x 32       | 4 x `32x512` makro              |
| `i_soc.i_ai_accel`          | 5      |  21.216 | yerel tamponlar | tampon kaldirma / agirlik ROM'u |
| `i_soc.i_boot_rom`          | 1      |   8.192 | 256 x 32        | sentezlenmis case ROM           |
| `i_soc.i_qspi`              | 2      |   4.096 | TX/RX FIFO      | flop kalabilir (kucuk)          |

AI SRAM 7680 word ikinin kuvveti degildir ama 512-word bankalarla **tam bolunur**
(7680 / 512 = 15). Tie-off decode veya 8192'ye yuvarlama israfi gerekmez.
Toplam makro sayisi: **23** (BootROM haric).

## PDK makro envanteri (ciel varsayilaniyla hazir geldi)

| Makro                                | Word x Bit | Kose |
|--------------------------------------|-----------|------|
| `sky130_sram_2kbyte_1rw1r_32x512_8`  | 512 x 32  | TT   |
| `sky130_sram_1kbyte_1rw1r_32x256_8`  | 256 x 32  | TT   |
| `sram_1rw1r_32_256_8_sky130`         | 256 x 32  | 7 kose |
| `sky130_sram_1kbyte_1rw1r_8x1024_8`  | 1024 x 8  | TT   |

Port yapisi (`clk0/csb0/web0/wmask0/addr0/din0/dout0` + `clk1/csb1/addr1/dout1`)
`axi_sram_wrapper` ile birebir ortusur: 1 yazma + 1 okuma portu, `NUM_WMASKS=4`
bayt maskesi AXI `wstrb`'ye dogrudan eslenir, okuma senkron/kayitli.
OpenRAM'e ihtiyac yoktur.

## Neden makro sart

410.336 bit makro yerine flip-flop olarak sentezlenirse alan puani kaybedilir.
Olcek referansi: LibreLane smoke test (SPM) 64 FF -> 3.294 um^2, yani ~26 um^2/FF;
bu oranla yalnizca bellek ~11 mm^2 eder. sky130'da BRAM/DSP karsiligi yoktur,
FPGA'da gorunmeyen bu maliyet ASIC'te dogrudan alan puanina yansir.

## Frontend notu

`read_slang --keep-hierarchy` **sart**. Bayraksiz kosuldugunda tasarim tek module
duzlesir (`=== asic_top ===` tek basina) ve SRAM makrolari floorplan'da ayri
instance olarak gorunmez. Bayrakla 49 modul korunur, elaborasyon 1,4 s / 100 MB.
sv2v yolu terk edildi: hem hiyerarsiyi inline ediyordu hem de ayni elaborasyon
19 dakika / 2 GB suruyordu.

## Acik kalem

`cv32e40p_sim_clock_gate` tasarimdaki **tek latch** (`$dlatch 1`). Dosyanin kendi
basligi "It must not be used for ASIC synthesis" der; `cv32e40p_sleep_unit.sv:154`'te
kosulsuz instantiate edilir, yani CPU'nun tum saati buradan gecer. Blokaj 6.
