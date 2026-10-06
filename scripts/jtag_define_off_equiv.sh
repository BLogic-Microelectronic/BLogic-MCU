#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# jtag_define_off_equiv.sh  -  IZOLASYON KANITI: JTAG_DEBUG/FC1_FIX/I2C_SDA_SYNC
#                              tanimsizken RTL == 73d8dcd (14 Agu imzali kosunun RTL'i).
#                              JTAG teslim cipinin parcasi; ifdef'ler bu kanit icindir.
# ============================================
# Ne yapar:
#   1. Referans dosyalari 'git show $EQUIV_REF:<yol>' ile build/jtag_equiv/main/
#      altina cikarir. EQUIV_REF varsayilani 73d8dcd = imzali ASIC kosunun
#      (RUN_teslim_2026-08-14) RTL'ini tasiyan, JTAG birlesmesi ONCESI son main
#      commit'i. 'main' dal adi BILEREK kullanilmaz: birlesme sonrasi main ==
#      HEAD oldugundan 'git show main:' kapiyi kendi kendisiyle karsilastirir,
#      yani kapi anlamsizlasir. (Windows worktree'de WSL git calismaz -> .git
#      dosyasindaki gitdir yolu /mnt/<surucu>/... bicimine cevrilir.)
#      JTAG_MAIN_DIR verilmisse git olsa bile o dizin referans olarak kullanilir
#      (73d8dcd checkout'u ya da main deposunun calisma agaci).
#   2. Her iki surumu de TANIM VERMEDEN (JTAG_DEBUG YOK) 'verilator -E -P' ile
#      onisler.
#   3. calisma agaci ciktisina scripts/jtag_equiv_expected.sed normalizasyonunu
#      uygular: sabit-0 dm telleri, sys_rst_n takma adi, "&& !x_to_dm" terimleri,
#      dm_halt_addr/dm_exc_addr/dbg_req sabitleri (hepsi sentezde sabit katlama).
#   4. Kalan diff ciktisini, dosya basina SAKLANAN BEKLENEN DIFF ile BIREBIR
#      karsilastirir: scripts/jtag_equiv_expected_diffs/<dosya>.diff
#      Bir satir bile farkliysa (yeni fark, kaybolan fark, degisen icerik) FAIL.
#
# NEDEN birebir diff? (3 Eylul 2026 gozden gecirme bulgusu)
#   Onceki surum, kalan diff satirlarini bir ERE listesiyle ("^ *end$",
#   "^ *if \(!rst_ni\) begin$" gibi COK GENEL oruntuler) esliyordu. Boyle bir
#   liste, bilerek yapilmis farklarla ilgisi olmayan GERCEK bir degisikligi de
#   sessizce "beklenen" sayabilirdi -> kapi delikti. Artik beklenen fark tam
#   metniyle depoda durur; kapi "diff'lerin diff'i"dir.
#   Bilerek yapilan farklarin GEREKCESI: scripts/jtag_equiv_known_diffs.txt
#   (yalniz belge; eslemede KULLANILMAZ).
#
# Beklenen diff'i BILEREK guncellemek (yeni bir kosulsuz fark eklendiginde):
#   bash scripts/jtag_define_off_equiv.sh --kaydet
#   ...ve uretilen .diff dosyalarini gozden gecirip commit'leyin. Kaydetme
#   ASLA otomatik degildir; kapinin anlami budur.
#
# Kullanim:  make jtag-equiv      (esdegeri: bash scripts/jtag_define_off_equiv.sh)
#            EQUIV_REF=<commit> make jtag-equiv   (baska bir referans commit)
#            JTAG_MAIN_DIR=/yol/referans_agaci make jtag-equiv
# Not: WSL'de kosar (verilator orada); git Windows tarafinda, bkz. adim 1.

set -u

cd "$(dirname "$0")/.." || exit 1
# Referans commit: imzali kosunun RTL'ini tasiyan son main commit'i (bkz. baslik).
EQUIV_REF=${EQUIV_REF:-73d8dcd}
OUT=build/jtag_equiv
MAIN="$OUT/main"
SEDRULES=scripts/jtag_equiv_expected.sed
EXPDIR=scripts/jtag_equiv_expected_diffs
RATIONALE=scripts/jtag_equiv_known_diffs.txt

SAVE=0
[ "${1:-}" = "--kaydet" ] && SAVE=1

# referans commit'te de var olan, JTAG_DEBUG ile dokunulmus RTL dosyalari
FILES="rtl/soc_top.sv rtl/bus/soc_axi_interconnect.sv rtl/asic/asic_top.sv \
rtl/fpga_top.sv rtl/ai_accelerator/ai_accelerator.sv"

INCDIRS="+incdir+rtl/bus/axi/include +incdir+rtl/asic \
+incdir+rtl/core/cv32e40p/rtl/include \
+incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include"

log() { echo "[JTAG-EQUIV] $*"; }

command -v verilator >/dev/null 2>&1 || { log "ERROR: verilator was not found"; exit 1; }
[ -f "$SEDRULES" ] || { log "ERROR: $SEDRULES does not exist"; exit 1; }
mkdir -p "$EXPDIR"

rm -rf "$OUT"; mkdir -p "$MAIN"

# ---- 1) referans kaynaklarini al ----
# Oncelik: JTAG_MAIN_DIR (verilmisse git olsa bile o kullanilir) > git show $EQUIV_REF:
GITARGS=""
SRC_DESC=""
if [ -n "${JTAG_MAIN_DIR:-}" ] && [ -d "${JTAG_MAIN_DIR:-}" ]; then
    SRC_DESC="JTAG_MAIN_DIR=$JTAG_MAIN_DIR"
elif git rev-parse --git-dir >/dev/null 2>&1; then
    SRC_DESC="git show $EQUIV_REF:"
elif [ -f .git ]; then
    raw=$(sed -n 's/^gitdir: //p' .git | tr -d '\r')
    conv=$(printf '%s' "$raw" | sed -e 's|\\|/|g' -e 's|^\([A-Za-z]\):|/mnt/\l\1|')
    if [ -d "$conv" ]; then
        GITARGS="--git-dir=$conv"
        SRC_DESC="git --git-dir=<worktree> show $EQUIV_REF:"
    fi
fi
[ -n "$SRC_DESC" ] || {
    log "ERROR: cannot get the reference sources (no git and JTAG_MAIN_DIR is not set)"
    exit 1
}
log "Reference sources: $SRC_DESC"

for f in $FILES; do
    mkdir -p "$MAIN/$(dirname "$f")"
    if [ "${SRC_DESC#JTAG_MAIN_DIR}" != "$SRC_DESC" ]; then
        cp "$JTAG_MAIN_DIR/$f" "$MAIN/$f" || { log "ERROR: cannot get $f"; exit 1; }
    else
        # shellcheck disable=SC2086
        git $GITARGS show "$EQUIV_REF:$f" > "$MAIN/$f" 2>/dev/null || {
            log "ERROR: 'git show $EQUIV_REF:$f' failed"; exit 1; }
    fi
done

# ---- 2/3/4) onisle, normalize et, beklenen diff ile birebir karsilastir ----
overall=0
total_exp=0
echo "----------------------------------------------------------------------"
printf '%-42s %10s %10s %10s\n' "file" "raw-diff" "expected" "deviation"
echo "----------------------------------------------------------------------"
for f in $FILES; do
    b=$(echo "$f" | tr '/' '_')
    exp="$EXPDIR/$b.diff"
    # shellcheck disable=SC2086
    verilator -E -P $INCDIRS "$f"        > "$OUT/cur_$b"  2> "$OUT/err_cur_$b"  || {
        log "ERROR: preprocessing failed (working tree): $f"; cat "$OUT/err_cur_$b"; exit 1; }
    # shellcheck disable=SC2086
    verilator -E -P $INCDIRS "$MAIN/$f"  > "$OUT/main_$b" 2> "$OUT/err_main_$b" || {
        log "ERROR: preprocessing failed (reference): $f"; cat "$OUT/err_main_$b"; exit 1; }

    raw=$(diff "$OUT/main_$b" "$OUT/cur_$b" | grep -c '^[<>]')
    sed -f "$SEDRULES" "$OUT/cur_$b" > "$OUT/norm_$b"
    diff "$OUT/main_$b" "$OUT/norm_$b" > "$OUT/diff_$b"
    nexp=$(grep -c '^[<>]' "$OUT/diff_$b")

    if [ "$SAVE" = "1" ]; then
        cp "$OUT/diff_$b" "$exp"
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "$nexp" "SAVED"
        total_exp=$((total_exp + nexp))
        continue
    fi

    if [ ! -f "$exp" ]; then
        log "ERROR: expected diff missing: $exp  (create it on purpose with '--kaydet')"
        overall=1
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "?" "NO FILE"
        continue
    fi

    if diff -u "$exp" "$OUT/diff_$b" > "$OUT/sapma_$b" 2>&1; then
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "$nexp" "0"
        total_exp=$((total_exp + nexp))
    else
        overall=1
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "$nexp" "DEVIATES"
        echo "  -- DEVIATION FROM THE EXPECTED DIFF ($f) --"
        echo "     (- = expected but no longer present, + = new or changed difference)"
        sed -n '3,40p' "$OUT/sapma_$b" | sed 's/^/     /'
    fi
done
echo "----------------------------------------------------------------------"

log "Normalisation rules: $SEDRULES"
log "Expected diffs: $EXPDIR/  (reasons: $RATIONALE)"
log "Intermediate files: $OUT/ (cur_*, main_*, norm_*, diff_*, sapma_*)"

if [ "$SAVE" = "1" ]; then
    log "SAVED: $total_exp diff lines written to $EXPDIR/; review them before committing"
    exit 0
fi
if [ "$overall" = "0" ]; then
    log "VERDICT: PASS: with JTAG_DEBUG undefined, the RTL equals the reference ($SRC_DESC, the RTL of the signed run) apart from constant folding and $total_exp intended diff lines"
    exit 0
fi
log "VERDICT: FAIL: the RTL deviates from the expected diff (see above)"
exit 1
