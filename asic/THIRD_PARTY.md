# Ucuncu Taraf Bilesenler ve Lisanslar

DDK "Final Istenen Ciktilar" bolum 9.13 ve bolum 10 geregi. Lisans metinleri
`asic/licenses/` altinda; kaynak agaclarindaki telif basliklari
degistirilmeden korunmustur.

## RTL ve IP

| Bilesen | Kaynak | Surum / commit | Lisans | Lisans dosyasi | Bizim degisikligimiz |
|---|---|---|---|---|---|
| CV32E40P | https://github.com/openhwgroup/cv32e40p | TBD (commit) | Solderpad HL 0.51 | `rtl/core/cv32e40p/LICENSE` | `cv32e40p_sim_clock_gate` yerine `rtl/asic/cv32e40p_clock_gate_asic.sv`; `cv32e40p_register_file_latch.sv` dosya listesine alinmadi, FF varyanti kullaniliyor |
| pulp common_cells | https://github.com/pulp-platform/common_cells | 1.20.0 (`common_cells.core`) | Solderpad HL 0.51 | ust dizinde LICENSE yok; **her kaynak dosya tam SHL-0.51 basligi tasiyor** | Alt kume vendor edildi (12 dosya), icerik degismedi |
| pulp axi | https://github.com/pulp-platform/axi | 0.39.9 (`VERSION`) | Solderpad HL 0.51 | `rtl/bus/axi/LICENSE` | Degisiklik yok |
| pulp fpnew | https://github.com/pulp-platform/fpnew | TBD | Solderpad HL 0.51 / Apache-2.0 | `.../pulp_platform_fpnew/LICENSE.solderpad`, `LICENSE.apache` | Yalnizca `fpnew_pkg.sv`; FPU devre disi (`FPU=0`) |
| verilog-uart | https://github.com/alexforencich/verilog-uart | TBD | MIT (c) 2014-2017 Alex Forencich | `rtl/peripherals/verilog-uart/COPYING` | `uart.v`, `uart_rx.v`, `uart_tx.v` degismedi; AXI-Lite sarmalayici (`uart_axil.sv`) bize ait |

## Fiziksel makrolar ve PDK

| Bilesen | Kaynak | Surum / commit | Lisans | Bizim degisikligimiz |
|---|---|---|---|---|
| sky130A PDK | https://github.com/fossi-foundation/open-pdks | `8afc8346a57fe1ab7934ba5a6056ea8b43078e71` | Apache-2.0 | Yok |
| `sky130_sram_2kbyte_1rw1r_32x512_8` | PDK `libs.ref/sky130_sram_macros/` | PDK ile birlikte | Apache-2.0 | **Yok** - fiziksel ve mantiksal gorunumler bolum 1.3 geregi degistirilmedi |
| `sky130_sram_1kbyte_1rw1r_32x256_8` | PDK `libs.ref/sky130_sram_macros/` | PDK ile birlikte | Apache-2.0 | **Yok** - ayni |
| LibreLane | https://github.com/librelane/librelane | TBD (bkz. `environment/versions.txt`) | Apache-2.0 | Yok - akis araci |

## Dogrulama altyapisi (ASIC akisina girmez)

| Bilesen | Kaynak | Surum / commit | Lisans | Lisans dosyasi | Bizim degisikligimiz |
|---|---|---|---|---|---|
| UVM (Verilator uyarlamasi) | https://github.com/verilator/uvm | `795b5f2` | Apache-2.0 | `verif/uvm-lib/LICENSE.txt`, `NOTICE.txt` | `src/` alt kumesi yerinde vendor edildi (URL'siz gitlink temiz klonda bos kaliyordu); provenance: `verif/uvm-lib/KAYNAK.md` |
| riscv-arch-test | https://github.com/riscv-non-isa/riscv-arch-test | TBD | BSD-3 / Apache-2.0 / CC | `verif/arch_tests/suite/COPYING.{BSD,APACHE,CC}` | Suite vendor edildi; kosum betigi (`run_arch_test.sh`) bize ait |

## Notlar

- `common_cells` icin ust dizin lisans dosyasi vendor edilen alt kumede
  bulunmuyor. bolum 10'un istedigi "mevcut lisans ve telif bildirimlerinin
  korunmasi" sarti saglaniyor: her `.sv` dosyasi tam SHL-0.51 basligini
  tasiyor. Ust lisans metni `asic/licenses/` altina eklenmek istenirse
  upstream depodan alinabilir.
- TBD isaretli commit kimlikleri vendor edilirken kaydedilmemis. Bunlar
  bolum 10'a gore "mumkun oldugunca" istendigi icin teslimi gecersiz kilmaz,
  ancak kapatilmasi tercih edilir.
- Bu dosya `asic/README.md` bolum 9.13'ten referans verilir.
