#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# gen_asic_verilog.sh - SystemVerilog -> duz Verilog (ASIC sentez girdisi)
# ============================================
# LibreLane/Yosys SV interface'leri (AXI_BUS.Slave) okuyamaz; sv2v sart.
# On-isleme: translate_off bloklari ve $display satirlari siyrilir,
# -DSYNTHESIS ile ifndef SYNTHESIS guard'lari devre disi kalir.
set -e
cd "$(dirname "$0")/.."
PP=build/asic/rtl_pp
rm -rf $PP && mkdir -p $PP build/asic
FLIST=$(grep -v '^#' asic/soc_files_asic.f | grep -v '^+' | grep -v '^$' | grep -v 'verif/')
for f in $FLIST; do
  mkdir -p $PP/$(dirname $f)
  awk 'BEGIN{keep=1} /\$display/{next} /pragma translate_off|synthesis translate_off/{keep=0} keep{print} /pragma translate_on|synthesis translate_on/{keep=1}' $f > $PP/$f
done
cp -r rtl/core/cv32e40p/rtl/include $PP/rtl/core/cv32e40p/rtl/
cp -r rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include $PP/rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/
cp -r rtl/bus/axi/include $PP/rtl/bus/axi/
# sv2v uyumlulugu: axi_pkg fonksiyon-ici typedef
sed -i 's/^      typedef shortint unsigned SU;$//; s/SU'"'"'(/shortint'"'"'(/g' $PP/rtl/bus/axi/src/axi_pkg.sv
sv2v -DSYNTHESIS \
     -I $PP/rtl/core/cv32e40p/rtl/include \
     -I $PP/rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include \
     -I $PP/rtl/bus/axi/include \
     $(echo "$FLIST" | sed "s|^|$PP/|") > build/asic/soc_asic.v
echo "[+] build/asic/soc_asic.v: $(wc -l < build/asic/soc_asic.v) satir"
