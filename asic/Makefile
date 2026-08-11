# ============================================================
# Ostim BLogic Mikroelektronik - asic/Makefile
# DDK "Final Istenen Ciktilar" Bolum 8: zorunlu asic_run hedefi +
# onerilen asic_verify / asic_clean hedefleri.
#
# Referans komut (asic/ icinden):   make asic_run
#
# Bolum 8 sartlari ve karsiliklari:
#   * run/ temiz calisma alani olarak hazirlanir        -> asic_run 1. adim
#   * LibreLane Classic gecici dosyalari run/ altinda   -> --force-run-dir
#   * Bolum 5 raporlari asic/reports/ altina toplanir   -> collect_outputs.sh
#   * Bolum 6 ciktilari asic/results/ altina toplanir   -> collect_outputs.sh
#   * Kullanici etkilesimi / grafik arayuz yok          -> tum adimlar batch
#   * Mutlak yerel yol yok                              -> tum yollar goreli
#   * Basarisizlikta sifirdan farkli cikis kodu         -> make + set -e
#
# Ortam: hedefler once PATH'te librelane arar; yoksa komutu
# environment/ altindaki Nix flake icinde calistirir (run_in_env.sh).
# On kosullar (Nix kurulumu, PDK) icin bkz. README.md Bolum 9.3.
# ============================================================

DESIGN      ?= asic_top
TAG         ?= RUN_$(shell date +%Y-%m-%d_%H-%M-%S)
RUN_DIR      = run/$(TAG)
ENV          = ./scripts/run_in_env.sh
PDK_COMMIT   = 8afc8346a57fe1ab7934ba5a6056ea8b43078e71

.PHONY: asic_run asic_verify asic_clean check_filelist pdk help

# ------------------------------------------------------------
# ZORUNLU HEDEF (Bolum 8)
# ------------------------------------------------------------
asic_run: check_filelist
	@echo "[asic_run] run/ temiz calisma alani olarak hazirlaniyor..."
	find run -mindepth 1 ! -name '.gitkeep' -delete
	mkdir -p $(RUN_DIR)
	@echo "[asic_run] LibreLane Classic basliyor: $(RUN_DIR)"
# Akis bilinen/kabul edilmis ihlallerle (README 9.9) sifir-disi cikabilir.
# Bolum 8 IKISINI birden istiyor: raporlar toplanacak VE hata durumunda cikis
# kodu sifir-disi olacak. Bu yuzden collect cikis kodundan BAGIMSIZ kosar,
# ardindan librelane'in kodu aynen yeniden yukseltilir.
	@set +e; \
	$(ENV) librelane config.yaml --flow Classic --force-run-dir $(RUN_DIR); \
	rc=$$?; \
	echo "[asic_run] Rapor ve ciktilar toplaniyor (akis cikis kodu: $$rc)..."; \
	ALLOW_MISSING=1 ./scripts/collect_outputs.sh "$(RUN_DIR)" "$(DESIGN)"; \
	if [ $$rc -ne 0 ]; then \
		echo "[asic_run] Akis $$rc ile bitti (bilinen ihlaller icin bkz. README 9.9)."; \
		echo "[asic_run] Raporlar ve ciktilar yine de toplandi. Kosu etiketi: $(TAG)"; \
	else \
		echo "[asic_run] TAMAM. Kosu etiketi: $(TAG)  (README 9.12'ye islenecek)"; \
	fi; \
	exit $$rc

# ------------------------------------------------------------
# ONERILEN HEDEFLER (Bolum 8)
# ------------------------------------------------------------
# Teslim edilen rapor ve ciktilarin varligini kontrol eder, temel
# sonuclari (WNS/TNS, DRC/LVS/anten sayilari) ozetler.
asic_verify:
	./scripts/verify_outputs.sh "$(DESIGN)"

# run/ altindaki yeniden uretilebilir calisma ve gecici dosyalari temizler.
asic_clean:
	find run -mindepth 1 ! -name '.gitkeep' -delete
	@echo "[asic_clean] run/ temizlendi (.gitkeep korundu)."

# ------------------------------------------------------------
# YARDIMCI HEDEFLER
# ------------------------------------------------------------
# config.yaml VERILOG_FILES <-> filelist.f uyum denetimi (DDK sayfa 20).
check_filelist:
	$(ENV) python3 scripts/check_filelist.py

# Referans PDK'yi ciel ile kurar/etkinlestirir (Bolum 1.2). Ag erisimi
# gerektirir; asic_run oncesi BIR KEZ calistirilmasi yeterlidir.
pdk:
	$(ENV) ciel enable --pdk-family sky130 $(PDK_COMMIT)

help:
	@echo "make asic_run       - ASIC akisini temiz run/ altinda kosar, rapor/ciktilari toplar (ZORUNLU hedef)"
	@echo "make asic_verify    - reports/ ve results/ altindaki zorunlu dosyalari denetler, ozet basar"
	@echo "make asic_clean     - run/ gecici calisma alanini temizler"
	@echo "make check_filelist - config.yaml <-> filelist.f uyum denetimi"
	@echo "make pdk            - referans PDK'yi (Open PDKs $(PDK_COMMIT)) ciel ile etkinlestirir"
	@echo ""
	@echo "Degiskenler: DESIGN=$(DESIGN)  TAG=$(TAG)"
	@echo "Ornek: make asic_run TAG=RUN_final_teslim"
