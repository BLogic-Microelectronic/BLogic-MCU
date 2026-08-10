#!/usr/bin/env bash
# collect_outputs.sh RUN_DIR [DESIGN]
#
# LibreLane 3.0.6 kosu dizininden DDK "Final Istenen Ciktilar" Bolum 5
# raporlarini asic/reports/ altina, Bolum 6 ciktilarini asic/results/
# altina toplar (Tablo 8 yerlesimi, Tablo 9-18 onerilen adlar).
#
# Dosya adlari 3.0.6 kaynak kodundan dogrulandi (drc.magic.rpt,
# lvs.netgen.rpt, irdrop.rpt, summary.rpt, *-grid-errors.rpt vb. LibreLane'in
# kendi urettigi adlardir; DDK tablolari bu surume gore yazilmis).
#
# ZORUNLU bir dosya bulunamazsa liste basilir ve cikis kodu 1 olur
# (Bolum 8). Gelistirme kosulari icin: ALLOW_MISSING=1 make ... seklinde
# cagrildiginda eksikler yalnizca uyari olarak basilir.
set -euo pipefail

RUN_DIR=${1:?Kullanim: collect_outputs.sh RUN_DIR [DESIGN]}
DESIGN=${2:-asic_top}
ALLOW_MISSING=${ALLOW_MISSING:-0}

ASIC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ASIC_DIR"
[[ -d "$RUN_DIR" ]] || { echo "HATA: kosu dizini yok: $RUN_DIR" >&2; exit 1; }

MISSING=()
WARNED=()

# En son eslesen yolu dondurur (tekrarlanan adimlarda en yuksek sira no).
last() { compgen -G "$1" | sort | tail -1 || true; }

# req_cp "GLOB" HEDEF [YENI_AD]  - zorunlu kopya
req_cp() {
    local src; src=$(last "$1")
    if [[ -n "$src" ]]; then
        mkdir -p "$2"
        cp -r "$src" "$2/${3:-$(basename "$src")}"
    else
        MISSING+=("$1")
    fi
}

# opt_cp "GLOB" HEDEF [YENI_AD]  - istege bagli kopya
opt_cp() {
    local src; src=$(last "$1")
    if [[ -n "$src" ]]; then
        mkdir -p "$2"
        cp -r "$src" "$2/${3:-$(basename "$src")}"
    else
        WARNED+=("$1")
    fi
}

FINAL="$RUN_DIR/final"

# ------------------------------------------------------------
# Bolum 5.1 - Genel akis raporlari  -> reports/general/
# ------------------------------------------------------------
req_cp "$RUN_DIR/flow.log"        reports/general
req_cp "$RUN_DIR/warning.log"     reports/general
req_cp "$RUN_DIR/error.log"       reports/general
req_cp "$RUN_DIR/resolved.json"   reports/general
req_cp "$FINAL/metrics.csv"       reports/general
req_cp "$FINAL/metrics.json"      reports/general
opt_cp "environment/versions.txt" reports/general   # inceleme kolayligi

# ------------------------------------------------------------
# Bolum 5.2 - Lint  -> reports/lint/verilator_lint.log
# ------------------------------------------------------------
LINT_DIR=$(last "$RUN_DIR/*-verilator-lint")
if [[ -n "$LINT_DIR" ]]; then
    mkdir -p reports/lint
    cat "$LINT_DIR"/*.log > reports/lint/verilator_lint.log 2>/dev/null \
        || MISSING+=("$LINT_DIR/*.log")
else
    MISSING+=("$RUN_DIR/*-verilator-lint")
fi

# ------------------------------------------------------------
# Bolum 5.3 - Sentez  -> reports/synthesis/
# ------------------------------------------------------------
SYN_DIR=$(last "$RUN_DIR/*-yosys-synthesis")
if [[ -n "$SYN_DIR" ]]; then
    req_cp "$SYN_DIR/reports/stat.json"          reports/synthesis
    opt_cp "$SYN_DIR/reports/stat.rpt"           reports/synthesis
    req_cp "$SYN_DIR/reports/pre_synth_chk.rpt"  reports/synthesis
    req_cp "$SYN_DIR/reports/chk.rpt"            reports/synthesis
    opt_cp "$SYN_DIR/reports/latch.rpt"          reports/synthesis
else
    MISSING+=("$RUN_DIR/*-yosys-synthesis")
fi

# ------------------------------------------------------------
# Bolum 5.5 - Zamanlama (STAPostPNR)  -> reports/timing/
# Bolum 5.7 - Guc (corner power.rpt)  -> reports/power/<corner>/
# ------------------------------------------------------------
STA_DIR=$(last "$RUN_DIR/*-openroad-stapostpnr")
if [[ -n "$STA_DIR" ]]; then
    req_cp "$STA_DIR/summary.rpt" reports/timing
    corner_found=0
    for cdir in "$STA_DIR"/*/; do
        [[ -d "$cdir" ]] || continue
        c=$(basename "$cdir")
        mkdir -p "reports/timing/$c"
        cp "$cdir"/*.rpt "reports/timing/$c/" 2>/dev/null || true
        if [[ -f "$cdir/power.rpt" ]]; then
            mkdir -p "reports/power/$c"
            cp "$cdir/power.rpt" "reports/power/$c/power.rpt"
        fi
        corner_found=1
    done
    [[ $corner_found -eq 1 ]] || MISSING+=("$STA_DIR/<corner>/")
else
    MISSING+=("$RUN_DIR/*-openroad-stapostpnr")
fi

# ------------------------------------------------------------
# Bolum 5.7 - IR-drop  -> reports/power/
# ------------------------------------------------------------
IRD_DIR=$(last "$RUN_DIR/*-openroad-irdropreport")
if [[ -n "$IRD_DIR" ]]; then
    req_cp "$IRD_DIR/irdrop.rpt" reports/power
    for f in "$IRD_DIR"/net-*.csv; do
        [[ -e "$f" ]] && { mkdir -p reports/power; cp "$f" reports/power/; }
    done
else
    MISSING+=("$RUN_DIR/*-openroad-irdropreport")
fi

# ------------------------------------------------------------
# Bolum 5.4 - Fiziksel tasarim  -> reports/routing/
# ------------------------------------------------------------
req_cp "$RUN_DIR/*-odb-reportwirelength/wire_lengths.csv"    reports/routing
opt_cp "$RUN_DIR/*-openroad-detailedrouting/*.drc"           reports/routing "$DESIGN.drc"

# ------------------------------------------------------------
# Bolum 5.6 - Fiziksel signoff
# ------------------------------------------------------------
req_cp "$RUN_DIR/*-magic-drc/reports/drc.magic.rpt"          reports/drc
req_cp "$RUN_DIR/*-magic-drc/reports/drc.magic.lyrdb"        reports/drc
req_cp "$RUN_DIR/*-klayout-drc/reports/drc.klayout.lyrdb"    reports/drc
req_cp "$RUN_DIR/*-klayout-drc/reports/drc.klayout.json"     reports/drc
req_cp "$RUN_DIR/*-netgen-lvs/reports/lvs.netgen.rpt"        reports/lvs
req_cp "$RUN_DIR/*-netgen-lvs/reports/lvs.netgen.json"       reports/lvs
req_cp "$RUN_DIR/*-openroad-checkantennas*/reports/antenna.rpt"          reports/antenna
req_cp "$RUN_DIR/*-openroad-checkantennas*/reports/antenna_summary.rpt"  reports/antenna
# PDN grid hata raporlari (birden fazla olabilir: her guc agi icin)
PDN_DIR=$(last "$RUN_DIR/*-openroad-generatepdn")
if [[ -n "$PDN_DIR" ]]; then
    found=0
    for f in "$PDN_DIR"/*-grid-errors.rpt; do
        [[ -e "$f" ]] && { mkdir -p reports/pdn; cp "$f" reports/pdn/; found=1; }
    done
    [[ $found -eq 1 ]] || MISSING+=("$PDN_DIR/*-grid-errors.rpt")
else
    MISSING+=("$RUN_DIR/*-openroad-generatepdn")
fi
req_cp "$RUN_DIR/*-odb-reportdisconnectedpins/full_disconnected_pins_table.txt" reports/signoff
req_cp "$RUN_DIR/*-klayout-xor/xor.xml"                       reports/signoff
req_cp "$RUN_DIR/*-misc-reportmanufacturability/manufacturability.rpt" reports/signoff
opt_cp "$FINAL/metrics.csv"   reports/signoff
opt_cp "$FINAL/metrics.json"  reports/signoff

# ------------------------------------------------------------
# Bolum 6.1 - Zorunlu fiziksel gorunumler  -> results/{gds,lef,def}
# ------------------------------------------------------------
req_cp "$FINAL/gds/*.gds"  results/gds
req_cp "$FINAL/lef/*.lef"  results/lef
req_cp "$FINAL/def/*.def"  results/def

# ------------------------------------------------------------
# Bolum 6.2 - Zorunlu ek ciktilar
# ------------------------------------------------------------
if [[ -n "$SYN_DIR" ]]; then
    req_cp "$SYN_DIR/*.nl.v" results/netlist "${DESIGN}_synth.v"
fi
req_cp "$FINAL/nl/*.v"     results/netlist "${DESIGN}_pnr.v"
req_cp "$FINAL/pnl/*.v"    results/netlist "${DESIGN}_powered.v"
# PnR ve signoff ayni SDC'yi kullaniyor -> tek dosya yeterli (Bolum 6.2).
req_cp "$FINAL/sdc/*"      results/sdc
if [[ -d "$FINAL/spef" ]]; then
    mkdir -p results/spef
    cp -r "$FINAL/spef/." results/spef/
else
    MISSING+=("$FINAL/spef")
fi
req_cp "$FINAL/spice/*.spice"  results/spice
req_cp "$RUN_DIR/resolved.json" results/config
req_cp "$FINAL/metrics.csv"    results/metrics
req_cp "$FINAL/metrics.json"   results/metrics

# ------------------------------------------------------------
# Bolum 6.3 - Onerilen ek ciktilar (varsa)
# ------------------------------------------------------------
opt_cp "$FINAL/odb/*.odb"      results/odb
opt_cp "$FINAL/sdf/*"          results/sdf
opt_cp "$FINAL/lib/*"          results/lib
opt_cp "$FINAL/mag/*.mag"      results/mag
opt_cp "$FINAL/mag_gds/*.gds"     results/gds "${DESIGN}_magic.gds"
opt_cp "$FINAL/klayout_gds/*.gds" results/gds "${DESIGN}_klayout.gds"
opt_cp "$FINAL/png/*.png"      results/images "${DESIGN}.png"
opt_cp "$FINAL/render/*.png"   results/images "${DESIGN}.png"

# ------------------------------------------------------------
# Onerilen: SHA-256 (Bolum 6.3) - zorunlu ciktilar uzerinden
# ------------------------------------------------------------
mkdir -p checksums
( find results -type f ! -name '.gitkeep' -print0 | sort -z | \
  xargs -0 sha256sum ) > checksums/SHA256SUMS

# ------------------------------------------------------------
# Sonuc
# ------------------------------------------------------------
if [[ ${#WARNED[@]} -gt 0 ]]; then
    echo "[collect] Istege bagli / bulunamayan kalemler:"
    printf '  (opsiyonel) %s\n' "${WARNED[@]}"
fi
if [[ ${#MISSING[@]} -gt 0 ]]; then
    echo "[collect] ZORUNLU kalemler eksik:"
    printf '  EKSIK: %s\n' "${MISSING[@]}"
    if [[ "$ALLOW_MISSING" == "1" ]]; then
        echo "[collect] ALLOW_MISSING=1: eksiklere ragmen devam edildi (gelistirme kosusu)."
    else
        echo "[collect] Teslim icin bu dosyalar gerekli (Bolum 5/6). Cikis kodu: 1"
        exit 1
    fi
fi
echo "[collect] TAMAM: reports/ ve results/ guncellendi. checksums/SHA256SUMS yazildi."
