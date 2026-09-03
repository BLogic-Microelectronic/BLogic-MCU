#!/usr/bin/env bash
# ============================================
# Ostim BLogic Mikroelektronik
# jtag_define_off_equiv.sh  -  "JTAG_DEBUG tanimsizken main ile ozdes" iddiasinin
#                              BETIKLENMIS kaniti (deneme/jtag dali)
# ============================================
# Ne yapar:
#   1. main dalindaki dosyalari 'git show main:<yol>' ile build/jtag_equiv/main/
#      altina cikarir (Windows worktree'de WSL git calismaz -> .git dosyasindaki
#      gitdir yolu /mnt/<surucu>/... bicimine cevrilir; olmazsa JTAG_MAIN_DIR
#      cevre degiskeniyle main checkout'u gosterilebilir).
#   2. Her iki surumu de TANIM VERMEDEN (JTAG_DEBUG YOK) 'verilator -E -P' ile
#      onisler.
#   3. deneme/jtag ciktisina scripts/jtag_equiv_expected.sed normalizasyonunu
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
# Not: WSL'de kosar (verilator orada); git Windows tarafinda, bkz. adim 1.

set -u

cd "$(dirname "$0")/.." || exit 1
OUT=build/jtag_equiv
MAIN="$OUT/main"
SEDRULES=scripts/jtag_equiv_expected.sed
EXPDIR=scripts/jtag_equiv_expected_diffs
RATIONALE=scripts/jtag_equiv_known_diffs.txt

SAVE=0
[ "${1:-}" = "--kaydet" ] && SAVE=1

# main'de de var olan, JTAG_DEBUG ile dokunulmus RTL dosyalari
FILES="rtl/soc_top.sv rtl/bus/soc_axi_interconnect.sv rtl/asic/asic_top.sv \
rtl/fpga_top.sv rtl/ai_accelerator/ai_accelerator.sv"

INCDIRS="+incdir+rtl/bus/axi/include +incdir+rtl/asic \
+incdir+rtl/core/cv32e40p/rtl/include \
+incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include"

log() { echo "[JTAG-EQUIV] $*"; }

command -v verilator >/dev/null 2>&1 || { log "HATA: verilator bulunamadi"; exit 1; }
[ -f "$SEDRULES" ] || { log "HATA: $SEDRULES yok"; exit 1; }
mkdir -p "$EXPDIR"

rm -rf "$OUT"; mkdir -p "$MAIN"

# ---- 1) main kaynaklarini al ----
GITARGS=""
SRC_DESC=""
if git rev-parse --git-dir >/dev/null 2>&1; then
    SRC_DESC="git show main:"
elif [ -f .git ]; then
    raw=$(sed -n 's/^gitdir: //p' .git | tr -d '\r')
    conv=$(printf '%s' "$raw" | sed -e 's|\\|/|g' -e 's|^\([A-Za-z]\):|/mnt/\l\1|')
    if [ -d "$conv" ]; then
        GITARGS="--git-dir=$conv"
        SRC_DESC="git --git-dir=<worktree> show main:"
    fi
fi
if [ -z "$SRC_DESC" ] && [ -n "${JTAG_MAIN_DIR:-}" ] && [ -d "${JTAG_MAIN_DIR:-}" ]; then
    SRC_DESC="JTAG_MAIN_DIR=$JTAG_MAIN_DIR"
fi
[ -n "$SRC_DESC" ] || {
    log "HATA: main dali kaynaklari alinamadi (git yok ve JTAG_MAIN_DIR tanimsiz)"
    exit 1
}
log "main kaynagi: $SRC_DESC"

for f in $FILES; do
    mkdir -p "$MAIN/$(dirname "$f")"
    if [ "${SRC_DESC#JTAG_MAIN_DIR}" != "$SRC_DESC" ]; then
        cp "$JTAG_MAIN_DIR/$f" "$MAIN/$f" || { log "HATA: $f alinamadi"; exit 1; }
    else
        # shellcheck disable=SC2086
        git $GITARGS show "main:$f" > "$MAIN/$f" 2>/dev/null || {
            log "HATA: 'git show main:$f' basarisiz"; exit 1; }
    fi
done

# ---- 2/3/4) onisle, normalize et, beklenen diff ile birebir karsilastir ----
overall=0
total_exp=0
echo "----------------------------------------------------------------------"
printf '%-42s %10s %10s %10s\n' "dosya" "ham-fark" "beklenen" "sapma"
echo "----------------------------------------------------------------------"
for f in $FILES; do
    b=$(echo "$f" | tr '/' '_')
    exp="$EXPDIR/$b.diff"
    # shellcheck disable=SC2086
    verilator -E -P $INCDIRS "$f"        > "$OUT/cur_$b"  2> "$OUT/err_cur_$b"  || {
        log "HATA: onisleme basarisiz (deneme/jtag): $f"; cat "$OUT/err_cur_$b"; exit 1; }
    # shellcheck disable=SC2086
    verilator -E -P $INCDIRS "$MAIN/$f"  > "$OUT/main_$b" 2> "$OUT/err_main_$b" || {
        log "HATA: onisleme basarisiz (main): $f"; cat "$OUT/err_main_$b"; exit 1; }

    raw=$(diff "$OUT/main_$b" "$OUT/cur_$b" | grep -c '^[<>]')
    sed -f "$SEDRULES" "$OUT/cur_$b" > "$OUT/norm_$b"
    diff "$OUT/main_$b" "$OUT/norm_$b" > "$OUT/diff_$b"
    nexp=$(grep -c '^[<>]' "$OUT/diff_$b")

    if [ "$SAVE" = "1" ]; then
        cp "$OUT/diff_$b" "$exp"
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "$nexp" "KAYDEDILDI"
        total_exp=$((total_exp + nexp))
        continue
    fi

    if [ ! -f "$exp" ]; then
        log "HATA: beklenen diff yok: $exp  ('--kaydet' ile bilerek olusturun)"
        overall=1
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "?" "DOSYA YOK"
        continue
    fi

    if diff -u "$exp" "$OUT/diff_$b" > "$OUT/sapma_$b" 2>&1; then
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "$nexp" "0"
        total_exp=$((total_exp + nexp))
    else
        overall=1
        printf '%-42s %10s %10s %10s\n' "$f" "$raw" "$nexp" "SAPMA"
        echo "  -- BEKLENEN DIFF'TEN SAPMA ($f) --"
        echo "     (- = beklenen ama artik yok, + = yeni ya da degismis fark)"
        sed -n '3,40p' "$OUT/sapma_$b" | sed 's/^/     /'
    fi
done
echo "----------------------------------------------------------------------"

log "normalizasyon kurallari: $SEDRULES"
log "beklenen diff'ler: $EXPDIR/  (gerekce: $RATIONALE)"
log "ara ciktilar: $OUT/ (cur_*, main_*, norm_*, diff_*, sapma_*)"

if [ "$SAVE" = "1" ]; then
    log "KAYDEDILDI: $total_exp diff satiri $EXPDIR/ altina yazildi - GOZDEN GECIRIP commit'leyin"
    exit 0
fi
if [ "$overall" = "0" ]; then
    log "VERDICT: PASS - JTAG_DEBUG TANIMSIZ derleme, sabit katlama + $total_exp satirlik BILEREK fark disinda main ile birebir AYNI"
    exit 0
fi
log "VERDICT: FAIL - beklenen diff ile sapma var (yukarida)"
exit 1
