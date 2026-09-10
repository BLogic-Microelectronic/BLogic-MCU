# Kaynak / Provenance
UVM kutuphanesinin build'in kullandigi kismi (src + lisans + sapma notlari),
juri tarafindan duz `git clone` ile tek adimda `make uvm` kosturulabilsin diye
yerinde vendor edilmistir.
- Upstream: https://github.com/verilator/uvm.git
- Commit:   656f20d (Add Verilator PLI for uvm-2020-3.1-vlt)
- Surum:    Accellera UVM 2020-3.1 (IEEE 1800.2-2020) + Verilator PLI/DPI eki
- Onceki:   795b5f2 (Verilator gecici cozumlu eski catal; main dalinda duruyor)
- Alinan icerik: src/, LICENSE.txt, NOTICE.txt, DEVIATIONS.md
- Derleyici: Verilator >= 5.052 (Makefile.uvm `check_verilator` ile zorlanir)
- Makefile.uvm: UVM_NO_DPI tanimli; src/dpi kaynaklari vendor edildi ama derlenmez
