# Kaynak / Provenance
UVM kutuphanesinin build'in kullandigi alt kumesi (src + lisans), juri
tarafindan duz `git clone` ile tek adimda `make uvm` kosturulabilsin
diye yerinde vendor edilmistir (URL'siz gitlink temiz klonda bos kaliyordu).
- Upstream: https://github.com/verilator/uvm.git
- Commit:   795b5f2
- Alinan icerik: src/, LICENSE* (Makefile.uvm: UVM_NO_DPI, yalniz src kullanilir)
