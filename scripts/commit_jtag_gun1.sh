#!/bin/bash
# ============================================
# deneme/jtag Gun-1 isini JTAG_DENEME_PLANI.md'deki UC AYRI COMMIT'e boler.
# Makefile ve soc_top.sv'de FC-1 / i2c / JTAG degisiklikleri ic ice oldugundan
# ilk iki commit icin dosyanin "yalniz o degisikligi iceren" surumu HEAD'den
# yeniden kurulup stage'lenir; calisma agaci dosyasi hic degismez.
# Kullanim (deneme/jtag dalinda):
#   bash scripts/commit_jtag_gun1.sh --dry-run   # yalniz stage istatistigi, commit yok
#   bash scripts/commit_jtag_gun1.sh && git push
# ============================================
set -e
cd "$(git rev-parse --show-toplevel)"
[ "$(git branch --show-current)" = "deneme/jtag" ] || { echo "HATA: deneme/jtag dalinda degilsiniz"; exit 1; }
git diff --quiet --cached || { echo "HATA: index bos degil (git reset ile temizleyin)"; exit 1; }
DRY=0; [ "${1:-}" = "--dry-run" ] && DRY=1

TMP=$(mktemp -d); trap 'rm -rf "$TMP"' EXIT

# HEAD surumune yalniz verilen degisiklikleri uygulayip index'e koyar.
# $1=dosya, $2=python degisiklik betigi (stdin'den icerigi alir, stdout'a yazar)
stage_partial() {
    local f="$1" py="$2"
    git show "HEAD:$f" | python3 -c "$py" > "$TMP/partial"
    cmp -s "$TMP/partial" <(git show "HEAD:$f") && { echo "HATA: $f icin degisiklik uygulanamadi"; exit 1; }
    local blob; blob=$(git hash-object -w "$TMP/partial")
    git update-index --cacheinfo "100644,$blob,$f"
}

do_commit() {   # $1=mesaj dosyasi
    if [ "$DRY" = 1 ]; then
        echo "   [dry-run] stage edilen:"; git diff --cached --stat | sed "s/^/     /"; git reset -q
    else
        git commit -q -F "$1"; echo "   $(git log --oneline -1)"
    fi
}

# ---------------------------------------------------------------- 1/3 FC-1
echo "== 1/3 FC-1 =="
git add rtl/ai_accelerator/ai_accelerator.sv sw/tests/ai_boot_macro_test.c verif/tb/asic_top_boot_tb.sv
stage_partial Makefile '
import sys
s = sys.stdin.read()
old_c = """# Girdi flash 0x10000'"'"'deki yes_real vektoru; firmware conv_out bolgesini
# (1000 word) altin vektorun FNV-1a sagtoplamiyla karsilastirir ve yalniz
# bit-tam esitse "Hello World!" basar (self-checking).
# FC ARGMAX'"'"'I BILEREK KONTROL EDILMEZ: FC, conv_out okumasini >=3 cevrim
# gec tuketir; OpenRAM modeli dout'"'"'u her posedge X'"'"'ledigi icin makro simde
# FC bozulur (davranissalda rdata tutuldugundan maskelenir). Bu hedef o
# eksigi BULDU; ayrintili errata: asic/README.md "Known issue" bolumu.
"""
new_c = """# Girdi flash 0x10000'"'"'deki yes_real vektoru; firmware conv_out bolgesini
# (1000 word) altin vektorun FNV-1a sagtoplamiyla karsilastirir VE
# argmax==2'"'"'yi dogrular; ancak ikisi de tutarsa "Hello World!" basar.
# NOT (deneme/jtag): main'"'"'de FC-1 erratasi nedeniyle argmax kontrolu
# kapaliydi (bu hedef o eksigi BULDU - asic/README.md "Known issue FC-1").
# Bu dalda ai_accelerator.sv'"'"'deki tek satirlik duzeltmeyle FC de makro
# model sozlesmesine uyar; PASS, duzeltmenin kanitidir.
"""
old_e = "[ASIC-TOP-SIM] PASS - asic_top + 27 makro: flash boot + conv katmani bit-tam (FC erratasi: asic/README)"
new_e = "[ASIC-TOP-SIM] PASS - asic_top + 27 makro: flash boot + YZ cikarimi bit-tam, argmax dahil (FC-1 duzeltmesi bu dalda)"
assert old_c in s and old_e in s, "Makefile FC-1 kaliplari bulunamadi"
sys.stdout.write(s.replace(old_c, new_c).replace(old_e, new_e))
'
cat > "$TMP/m1" <<'MSG'
ai: FC-1 duzeltmesi - ST_FC_FETCH_W_WAIT boyunca co_re ayni adresle surulur

Teslim edilen OpenRAM modeli dout'u okumayi izleyen posedge'de X'ler; FC
asamasi conv_out okumasini mem_done'a bagli olarak >=3 cevrim gec
tuketiyordu (main: asic/README 9.5 "Known issue FC-1"). Bekleme boyunca
yeniden okuyunca ST_FC_MAC daima T+1 verisi tuketir; davranissal dalda
ayni adresin tekrar okunmasi sonucu degistirmez.
Kanit: make asic-top-sim, argmax kontrolu YENIDEN ACIK -> PASS
(asic_top + 27 makro modeli, conv bit-tam VE argmax==2).
Yalniz deneme/jtag dali; imzali ASIC kosusu ve main degismedi.
MSG
do_commit "$TMP/m1"

# ---------------------------------------------------------------- 2/3 i2c
echo "== 2/3 i2c 2FF =="
stage_partial rtl/soc_top.sv '
import sys
s = sys.stdin.read()
anchor = "    // I2C master (0x4000_0400)\n"
block = """    // i2c_sda_i 2FF senkronizatoru (yalniz deneme/jtag dali; asic/README
    // 9.9/3 gozden gecirme notu): asenkron pad girisi gpio_in_i ile ayni
    // desene esitlenir. Reset degeri 1'"'"'b1 - SDA bosta pull-up'"'"'la yuksektir;
    // 0'"'"'la baslamak SCL yuksekken sahte START kosulu gibi gorunurdu.
    // 2 cevrimlik ek gecikme (40 ns @50 MHz) us-mertebesindeki I2C bit
    // suresi yaninda ihmal edilebilir.
    logic i2c_sda_sync1, i2c_sda_sync2;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            i2c_sda_sync1 <= 1'"'"'b1;
            i2c_sda_sync2 <= 1'"'"'b1;
        end else begin
            i2c_sda_sync1 <= i2c_sda_i;
            i2c_sda_sync2 <= i2c_sda_sync1;
        end
    end

"""
old_p = ".sda_i(i2c_sda_i)"
new_p = ".sda_i(i2c_sda_sync2)"
assert s.count(anchor) == 1 and s.count(old_p) == 1, "soc_top i2c kaliplari bulunamadi"
sys.stdout.write(s.replace(anchor, block + anchor).replace(old_p, new_p))
'
cat > "$TMP/m2" <<'MSG'
soc: i2c_sda_i girisine 2FF senkronizator (asic/README 9.9/3 notu)

Asenkron SDA pad girisi gpio_in_i ile ayni desene esitlendi. Reset degeri
1'b1 (SDA bosta pull-up; 0'la baslamak SCL yuksekken sahte START gibi
gorunurdu). +2 cevrim (40 ns) I2C bit suresi yaninda ihmal edilebilir.
Kanit: make i2c-sys PASS; make sim FW_SRC=sw/tests/i2c_soc_test.c PASS;
yamali/yamasiz A/B diag farki yok.
MSG
do_commit "$TMP/m2"

# ---------------------------------------------------------------- 3/3 JTAG
echo "== 3/3 JTAG =="
git add -A
cat > "$TMP/m3" <<'MSG'
debug: riscv-dbg JTAG entegrasyonu (ifdef JTAG_DEBUG) - Gun 1, 7/7 smoke PASS

- Vendor: riscv-dbg @21a5fbe, common_cells v1.38.0 (cdc_2phase_clearable
  zinciri + basliklar), tech_cells_generic v0.2.3 (tc_clk); rtl/debug/VENDOR.md,
  rtl/debug/jtag_files.f (soc_files.f DEGISMEDI, asic/ dokunulmadi).
- soc_axi_interconnect: DM bolgesi 0x0004_0000 icin buyruk (3. AR bacagi,
  3-yollu R mux) ve veri (AW/W/AR bacaklari, kayitli wr/rd_to_dm) yollari;
  define yokken bit-aynilik verilator -E diff'iyle ispatli (make sim, lint,
  regression 6/6).
- axi_dm_slave (yeni): iki AXI portu -> dm_top tek bellek portu, sabit
  oncelikli tahkim, adres son istekte tutulur, yazma rd_pending ile kapili,
  AW/W atomik, 2 SVA sozlesme denetimi.
- soc_top: jtag_* portlari, dmi_jtag + dm_top, debug_req/halt 0x40800/
  exception 0x40810, SBA hata-tamamlayan tie-off (progbuf-only),
  IDCODE 0x0B1061C1, dmi_rst_no -> dmi_rst_ni.
- make jtag-sim + verif/tb/jtag_smoke_tb.sv (7 asama): UART, IDCODE, DTMCS,
  DMI->DM, halt (core debug_halted_o), abstract cmd GPR yaz/oku + progbuf
  sw/lw DSRAM + dpc, resume (core running, pc_id firmware, cmderr=0): 7/7 PASS.
- rtl/debug/openocd/blogic_sim.cfg (remote_bitbang, set_mem_access progbuf).
- JTAG_DENEME_PLANI.md: Gun-1 durum gunlugu + inceleme sonuclari.
MSG
do_commit "$TMP/m3"
[ "$DRY" = 1 ] && echo "DRY-RUN TAMAM (commit atilmadi)" || echo "TAMAM - 3 commit hazir; push icin: git push"
