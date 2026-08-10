# Ucuncu Taraf Bilesenler ve Lisanslar

DDK "Final Istenen Ciktilar" bolum 9.13 ve bolum 10 geregi. Lisans metinleri
`asic/licenses/` altinda; kaynak agaclarindaki telif basliklari
degistirilmeden korunmustur.

## RTL ve IP

| Bilesen | Kaynak | Surum / commit | Lisans | Lisans dosyasi | Bizim degisikligimiz |
|---|---|---|---|---|---|
| CV32E40P | https://github.com/openhwgroup/cv32e40p | `6033d2b1be3295ec774d17ac4cf226faacfdeb08` (master; gitlink kaydi 8808914^) | Solderpad HL 0.51 | `rtl/core/cv32e40p/LICENSE` | `cv32e40p_sim_clock_gate` yerine `rtl/asic/cv32e40p_clock_gate_asic.sv`; `cv32e40p_register_file_latch.sv` dosya listesine alinmadi, FF varyanti kullaniliyor |
| pulp common_cells | https://github.com/pulp-platform/common_cells | 1.20.0 (`common_cells.core`) | Solderpad HL 0.51 | ust dizinde LICENSE yok; **her kaynak dosya tam SHL-0.51 basligi tasiyor** | Alt kume vendor edildi (12 dosya), icerik degismedi |
| pulp axi | https://github.com/pulp-platform/axi | `e286bb1a4aba6fc145f3cb41bd78665c5868e2a9` (master, v0.39.9 sonrasi; agactaki VERSION=0.39.9) | Solderpad HL 0.51 | `rtl/bus/axi/LICENSE` | Degisiklik yok |
| pulp fpnew | https://github.com/pulp-platform/fpnew | cv32e40p `6033d2b1be32` agaci icinde vendorlanmis (ayri pin yok) | Solderpad HL 0.51 / Apache-2.0 | `.../pulp_platform_fpnew/LICENSE.solderpad`, `LICENSE.apache` | Yalnizca `fpnew_pkg.sv`; FPU devre disi (`FPU=0`) |
| verilog-uart | https://github.com/alexforencich/verilog-uart | `1b867e53af738e4a8bc7c839ca2f1c07f40382dc` (master; 3 RTL dosyasi upstream ile bayt-birebir dogrulandi) | MIT (c) 2014-2017 Alex Forencich | `rtl/peripherals/verilog-uart/COPYING` | `uart.v`, `uart_rx.v`, `uart_tx.v` degismedi; AXI-Lite sarmalayici (`uart_axil.sv`) bize ait |

## Fiziksel makrolar ve PDK

| Bilesen | Kaynak | Surum / commit | Lisans | Bizim degisikligimiz |
|---|---|---|---|---|
| sky130A PDK | https://github.com/fossi-foundation/open-pdks | `8afc8346a57fe1ab7934ba5a6056ea8b43078e71` | Apache-2.0 | Yok |
| `sky130_sram_2kbyte_1rw1r_32x512_8` | PDK `libs.ref/sky130_sram_macros/` | PDK ile birlikte | Apache-2.0 | **Yok** - fiziksel ve mantiksal gorunumler bolum 1.3 geregi degistirilmedi |
| `sky130_sram_1kbyte_1rw1r_32x256_8` | PDK `libs.ref/sky130_sram_macros/` | PDK ile birlikte | Apache-2.0 | **Yok** - ayni |
| LibreLane | https://github.com/librelane/librelane | v3.0.6 / `ba7193bff33d68941683b2963b90aa30cea117d1` | Apache-2.0 | Yok - akis araci |

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
- cv32e40p / axi / verilog-uart commit kimlikleri, submodule->klasor
  donusumu oncesindeki gitlink kayitlarindan kurtarildi
  (`git ls-tree 8808914^`) ve uc SHA'nin da ilgili upstream depolarinin
  master dalinda oldugu dogrulandi (11 Agu 2026). Kalan tek TBD:
  riscv-arch-test.
