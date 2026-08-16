#!/usr/bin/env bash
# verify_outputs.sh [DESIGN]
#
# make asic_verify arka ucu (DDK Bolum 8 onerilen hedef):
# reports/ ve results/ altindaki zorunlu kalemlerin varligini kontrol
# eder ve metrics.json'dan temel sonuclari ozetler. Eksik zorunlu kalem
# varsa cikis kodu 1.
set -euo pipefail

DESIGN=${1:-asic_top}
ASIC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ASIC_DIR"

MISSING=()
need() { [[ -e $1 ]] || MISSING+=("$1"); }

echo "== Bolum 5 zorunlu raporlar =="
need reports/general/flow.log
need reports/general/warning.log
need reports/general/error.log
need reports/general/resolved.json
need reports/general/metrics.csv
need reports/general/metrics.json
need reports/lint/verilator_lint.log
need reports/synthesis/stat.json
need reports/synthesis/pre_synth_chk.rpt
need reports/synthesis/chk.rpt
need reports/general/versions.txt
need reports/synthesis/stat.rpt
need reports/synthesis/latch.rpt
need reports/drc/drc.magic.lyrdb
need reports/drc/drc.klayout.json
need reports/lvs/lvs.netgen.json
# DDK 5.4: detailed routing DRC isaretleri (Tablo 12)
{ compgen -G "reports/routing/*.drc" >/dev/null; } || MISSING+=("reports/routing/*.drc")
# DDK 5.7: dugum bazli gerilim sonuclari, konum olarak zorunlu
{ compgen -G "reports/power/net-*.csv" >/dev/null \
  || compgen -G "reports/power/net-*.csv.gz*" >/dev/null; } \
  || MISSING+=("reports/power/net-<net>.csv[.gz]")

need reports/timing/summary.rpt
# DDK 5.5 Tablo 13: kose basina zorunlu rapor seti (dizin varligi yetmez)
STA_ZORUNLU=(max.rpt min.rpt checks.rpt skew.max.rpt skew.min.rpt
             ws.max.rpt ws.min.rpt wns.max.rpt wns.min.rpt
             tns.max.rpt tns.min.rpt violator_list.rpt
             clock.rpt unpropagated.rpt)
for c in nom_tt_025C_1v80 nom_ss_100C_1v60 nom_ff_n40C_1v95; do
    need "reports/timing/$c"
    for r in "${STA_ZORUNLU[@]}"; do
        need "reports/timing/$c/$r"
    done
    need "reports/power/$c/power.rpt"
done
need reports/power/irdrop.rpt
need reports/routing/wire_lengths.csv
need reports/drc/drc.magic.rpt
need reports/drc/drc.klayout.lyrdb
need reports/lvs/lvs.netgen.rpt
need reports/antenna/antenna.rpt
need reports/antenna/antenna_summary.rpt
need reports/signoff/full_disconnected_pins_table.txt
need reports/signoff/xor.xml
need reports/signoff/manufacturability.rpt
compgen -G "reports/pdn/*-grid-errors.rpt" >/dev/null || MISSING+=("reports/pdn/*-grid-errors.rpt")

echo "== Bolum 6 zorunlu ciktilar =="
{ compgen -G "results/gds/*.gds" >/dev/null || compgen -G "results/gds/*.gds.gz*" >/dev/null; } || MISSING+=("results/gds/*.gds[.gz]")
compgen -G "results/lef/*.lef" >/dev/null || MISSING+=("results/lef/*.lef")
{ compgen -G "results/def/*.def" >/dev/null || compgen -G "results/def/*.def.gz*" >/dev/null; } || MISSING+=("results/def/*.def[.gz]")
need "results/netlist/${DESIGN}_synth.v"
need "results/netlist/${DESIGN}_pnr.v"
need "results/netlist/${DESIGN}_powered.v"
compgen -G "results/sdc/*"  >/dev/null || MISSING+=("results/sdc/*")
compgen -G "results/spef/*" >/dev/null || MISSING+=("results/spef/*")
{ compgen -G "results/spice/*.spice" >/dev/null || compgen -G "results/spice/*.spice.gz*" >/dev/null; } || MISSING+=("results/spice/*.spice[.gz]")
need results/config/resolved.json
need results/metrics/metrics.csv
need results/metrics/metrics.json

echo "== Temel sonuclar (results/metrics/metrics.json) =="
if [[ -f results/metrics/metrics.json ]]; then
    python3 - <<'PY'
import json
m = json.load(open("results/metrics/metrics.json"))
keys = ["timing__setup__ws", "timing__hold__ws",
        "timing__setup__tns", "timing__hold__tns",
        "magic__drc_error__count", "klayout__drc_error__count",
        "design__lvs_error__count", "route__antenna_violation__count",
        "antenna__violating__nets", "design__disconnected_pin__count",
        "design__xor_difference__count", "power__total"]
hits = 0
for k in sorted(m):
    if any(s in k for s in keys):
        print(f"  {k} = {m[k]}")
        hits += 1
if hits == 0:
    print("  (beklenen metrik anahtarlari bulunamadi - metrics.json'i elle kontrol et)")
PY
else
    echo "  metrics.json yok - once make asic_run"
fi

if [[ ${#MISSING[@]} -gt 0 ]]; then
    echo ""
    echo "[verify] EKSIK zorunlu kalemler (${#MISSING[@]}):"
    printf '  %s\n' "${MISSING[@]}"
    exit 1
fi
echo ""
echo "[verify] TAMAM: tum zorunlu rapor ve ciktilar mevcut."
