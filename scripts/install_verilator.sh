#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# scripts/install_verilator.sh - UVM 2020-3.1 akisi icin Verilator kurulumu
#
# deneme/uvm dalindaki UVM testleri (verif/uvm-lib: UVM 2020-3.1,
# verilator/uvm 656f20d) Verilator >= 5.052 ister. Bu betik Verilator'i
# sistemdeki surume DOKUNMADAN ~/tools/verilator-<surum> altina kurar;
# Makefile.uvm bu yolu kendiliginden bulur (VERILATOR=<yol> ile ezilebilir).
#
# Kullanim:  bash scripts/install_verilator.sh [etiket]   (varsayilan v5.052)
# Sure:      ~15-25 dk (hem optimize hem hata ayiklama ikilisi derlenir)
# ============================================
set -euo pipefail

TAG="${1:-v5.052}"
VER="${TAG#v}"
PREFIX="$HOME/tools/verilator-$VER"
SRC="$HOME/tools/src/verilator-$VER"

if [ -x "$PREFIX/bin/verilator" ]; then
    echo "Zaten kurulu: $("$PREFIX/bin/verilator" --version)  ($PREFIX)"
    exit 0
fi

for t in git autoconf flex bison help2man g++ make perl python3; do
    command -v "$t" >/dev/null || {
        echo "Eksik arac: $t"
        echo "  sudo apt install git autoconf flex bison help2man g++ make perl python3"
        exit 1
    }
done

# WSL'de yuksek paralellik bellek yetersizligi yapabiliyor: en fazla 8 is
JOBS=$(nproc)
[ "$JOBS" -gt 8 ] && JOBS=8

mkdir -p "$HOME/tools/src"
[ -d "$SRC/.git" ] || git clone --depth 1 --branch "$TAG" \
    https://github.com/verilator/verilator.git "$SRC"

cd "$SRC"
unset VERILATOR_ROOT
autoconf
./configure --prefix="$PREFIX"
make -j"$JOBS"
make install

"$PREFIX/bin/verilator" --version
echo "Kuruldu: $PREFIX"
echo "Artik 'make uvm' bu surumle derler (Makefile.uvm check_verilator ile dogrular)."
