#!/usr/bin/env bash
# guard_large_files.sh — GitHub 100 MB tek-dosya limiti korumasi.
# collect_outputs.sh SONRASI, commit ONCESI kosulur. Idempotent.
# 95 MB uzeri her results/ ve reports/ dosyasi icin: orijinal SHA-256 kaydet -> gzip -9;
# hala 95 MB uzeriyse 90 MB parcalara bol (<ad>.gz.partNN) ve gz'yi sil.
# Geri birlestirme talimati results/BUYUK_DOSYALAR.md'ye yazilir.
# git-lfs BILEREK kullanilmiyor (temiz-klon juri sarti, README 9.12).
set -euo pipefail
LIMIT_MB=95
ASIC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ASIC_DIR"
DOC=results/BUYUK_DOSYALAR.md

# reports/ de taranir: DDK 5.7'nin zorunlu kildigi dugum-bazli gerilim
# dosyalari (reports/power/net-<net>.csv) bu tasarimda 137 MB'tir ve
# yalniz results/ taranirsa limite takilip push'u reddettirir (olculdu,
# RUN_teslim_2026-08-14).
mapfile -t BIG < <(find results reports -type f ! -name '.gitkeep' ! -name '*.gz' \
    ! -name '*.gz.part*' ! -name '*.sha256' ! -name 'BUYUK_DOSYALAR.md' \
    -size +"${LIMIT_MB}"M | sort)

if [[ ${#BIG[@]} -eq 0 ]]; then
    echo "[guard] ${LIMIT_MB} MB uzeri dosya yok — islem gerekmedi."
    exit 0
fi

{
    echo "# Buyuk dosya paketlemesi (GitHub 100 MB limiti)"
    echo ""
    echo "Asagidaki dosyalar ${LIMIT_MB} MB uzerinde oldugu icin gzip -9 ile"
    echo "sikistirildi; gerekenler 90 MB parcalara bolundu. Orijinal SHA-256"
    echo "degerleri yanlarindaki .sha256 dosyalarindadir. Geri elde etmek icin:"
    echo ""
    echo '    cat <ad>.gz.part* | gunzip > <ad>     # parcalanmissa'
    echo '    gunzip -k <ad>.gz                     # tek parcaysa'
    echo ""
    echo "Dogrulama: sha256sum -c <ad>.sha256"
    echo ""
} > "$DOC"

for f in "${BIG[@]}"; do
    echo "[guard] $f ($(du -m "$f" | cut -f1) MB)"
    sha256sum "$f" > "$f.sha256"
    gzip -9 "$f"                                   # f -> f.gz
    if [[ $(du -m "$f.gz" | cut -f1) -gt $LIMIT_MB ]]; then
        split -b 90m -d "$f.gz" "$f.gz.part"
        rm "$f.gz"
        n=$(ls "$f".gz.part* | wc -l)
        echo "- \`$f\` -> gzip + split (${n} parca); orijinal SHA-256: \`$f.sha256\`" >> "$DOC"
    else
        echo "- \`$f\` -> \`$f.gz\`; orijinal SHA-256: \`$f.sha256\`" >> "$DOC"
    fi
done

# results/ degisti -> checksum manifesti yeniden uretilir (collect ile ayni kural)
mkdir -p checksums
( find results -type f ! -name '.gitkeep' -print0 | sort -z | xargs -0 sha256sum ) \
    > checksums/SHA256SUMS
echo "[guard] TAMAM — $DOC yazildi, checksums/SHA256SUMS yeniden uretildi."
