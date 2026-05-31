#!/bin/bash
set -euo pipefail
PROJ="$(cd "$(dirname "$0")/../.." && pwd)"
REPO="${PROJ}/verif/arch_tests/riscv-arch-test"
TGT="${PROJ}/verif/arch_tests/target/blogic"
WORK="${PROJ}/verif/arch_tests/work"
GCC=riscv32-unknown-elf-gcc
OBJCOPY=riscv32-unknown-elf-objcopy
NM=riscv32-unknown-elf-nm
PY=python3
SIM="${PROJ}/obj_dir/blogic_sim"
MARCH="rv32imc_zicsr_zifencei"
INC="-I${REPO}/tests/env -I${TGT}"
FILT="${1:-I}"; TFILT="${2:-}"
RED='\033[0;31m'; GRN='\033[0;32m'; YLW='\033[1;33m'; NC='\033[0m'
echo -e "${YLW}═══ BLogic MCU riscv-arch-test ═══${NC}"
[ -x "${SIM}" ] || { cd "${PROJ}"; make -f Makefile.verilator verilate; }
mkdir -p "${WORK}"
if [[ "${FILT}" == *"-"* ]]; then TFILT="${FILT}"; FILT="I"; fi
P=0; F=0; S=0; T=0; FL=""
for EXT in ${FILT}; do
  SD="${REPO}/tests/rv32i/${EXT}"
  [ -d "${SD}" ] || { echo -e "${YLW}[!] ${SD} yok${NC}"; continue; }
  echo -e "\n${YLW}── RV32${EXT} ──${NC}"
  for TS in "${SD}"/*.S; do
    TN="$(basename "${TS}" .S)"
    [ -n "${TFILT}" ] && [ "${TN}" != "${TFILT}" ] && continue
    T=$((T+1)); TW="${WORK}/${TN}"; mkdir -p "${TW}"
    # Derle
    if ! ${GCC} -march=${MARCH} -mabi=ilp32 -nostdlib -nostartfiles -DTEST_FLEN=0 -DXLEN=32 -DUDB_MXLEN=32 -static \
         -T "${TGT}/link.ld" ${INC} "${TS}" -o "${TW}/test.elf" 2>"${TW}/cc.log"; then
      echo -e "  [${RED}FAIL${NC}] ${TN} — derleme hatası"
      head -2 "${TW}/cc.log" | sed 's/^/    /'
      F=$((F+1)); FL="${FL}\n  ${TN}(cc)"; continue
    fi
    # Boyut kontrol
    WC=$(${OBJCOPY} -O binary -j .text.init -j .text "${TW}/test.elf" "${TW}/i.bin" 2>/dev/null && wc -c < "${TW}/i.bin")
    if [ "${WC:-0}" -gt 8192 ]; then
      echo -e "  [${YLW}SKIP${NC}] ${TN} — ${WC}B, 8KB'a sığmıyor"
      S=$((S+1)); continue
    fi
    # Hex üret
    ${PY} "${PROJ}/scripts/elf2hex.py" "${TW}/i.bin" "${TW}/fw.hex" >/dev/null 2>&1
    ${OBJCOPY} -O binary -j .rodata -j .data -j .tohost "${TW}/test.elf" "${TW}/d.bin" 2>/dev/null || printf '' > "${TW}/d.bin"
    ${PY} "${PROJ}/scripts/elf2hex.py" "${TW}/d.bin" "${TW}/dm.hex" >/dev/null 2>&1
    # Verilator koş
    cp "${TW}/fw.hex" "${PROJ}/obj_dir/firmware.hex"
    cp "${TW}/dm.hex" "${PROJ}/obj_dir/data_mem.hex"
    cd "${PROJ}/obj_dir"
    timeout 30 ./blogic_sim +CPB=432 >"${TW}/sim.log" 2>&1 || true
    cd "${PROJ}"
    PC=$(grep -c "RTL_PC:" "${TW}/sim.log" 2>/dev/null || echo 0)
    if [ "${PC}" -gt 10 ]; then
      echo -e "  [${GRN}PASS${NC}] ${TN}  (${PC} instr)"
      P=$((P+1))
    else
      echo -e "  [${RED}FAIL${NC}] ${TN} — CPU çalışmadı (${PC} instr)"
      F=$((F+1)); FL="${FL}\n  ${TN}(exec)"
    fi
  done
done
echo -e "\n══════════════════════════════════"
echo -e "  PASS:${P}  FAIL:${F}  SKIP:${S}  TOPLAM:${T}"
[ ${F} -gt 0 ] && echo -e "  Başarısız:${FL}"
echo "══════════════════════════════════"
exit ${F}
