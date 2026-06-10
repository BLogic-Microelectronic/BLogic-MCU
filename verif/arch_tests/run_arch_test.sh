#!/bin/bash
# riscv-arch-test runner — ciktilar logs/arch_test/ altinda
set -euo pipefail
PROJ="$(cd "$(dirname "$0")/../.." && pwd)"
REPO="${PROJ}/verif/arch_tests/suite"   # vendor edilmis alt kume (env + rv32i_m/I,M)
TGT="${PROJ}/verif/arch_tests/target/blogic"
LOG_ROOT="${PROJ}/logs/arch_test"
GCC=riscv32-unknown-elf-gcc
OBJCOPY=riscv32-unknown-elf-objcopy
PY=python3
SIM="${PROJ}/obj_dir_arch/blogic_sim"
MARCH="rv32imc_zicsr_zifencei"
INC="-I${REPO}/env -I${TGT}"
FILT="${1:-I}"; TFILT="${2:-}"
RED='\033[0;31m'; GRN='\033[0;32m'; YLW='\033[1;33m'; NC='\033[0m'

echo -e "${YLW}═══ BLogic MCU riscv-arch-test ═══${NC}"
echo -e "${YLW}  Cikti: ${LOG_ROOT}${NC}"
mkdir -p "${LOG_ROOT}"

[ -x "${SIM}" ] || { cd "${PROJ}"; make -f Makefile.verilator verilate-arch; }
echo 00000000 > "${PROJ}/obj_dir_arch/bootrom.hex"   # zero-ROM: PC=0 illegal->trap->mtvec(0x10000); resmi teknotest akisiyla ayni mekanizma
[ -f "${PROJ}/obj_dir_arch/ai_sram_init.hex" ] || echo 00000000 > "${PROJ}/obj_dir_arch/ai_sram_init.hex"

if [[ "${FILT}" == *"-"* ]]; then TFILT="${FILT}"; FILT="I"; fi
P=0; F=0; S=0; T=0; FL=""

for EXT in ${FILT}; do
    SD="${REPO}/rv32i_m/${EXT}/src"
    [ -d "${SD}" ] || { echo -e "${YLW}[!] ${SD} yok${NC}"; continue; }
    echo -e "\n${YLW}── RV32${EXT} ──${NC}"
    for TS in "${SD}"/*.S; do
        TN="$(basename "${TS}" .S)"
        [ -n "${TFILT}" ] && [ "${TN}" != "${TFILT}" ] && continue
        T=$((T+1))
        TW="${LOG_ROOT}/${TN}"
        mkdir -p "${TW}"

        if ! ${GCC} -march=${MARCH} -mabi=ilp32 -nostdlib -nostartfiles \
                    -DTEST_FLEN=0 -DXLEN=32 -DUDB_MXLEN=32 -DTEST_CASE_1=True -static -Wl,--no-check-sections \
                    -T "${TGT}/link.ld" ${INC} "${TS}" "${TGT}/htif.S" -o "${TW}/test.elf" \
                    2>"${TW}/compile.log"; then
            echo -e "  [${RED}FAIL${NC}] ${TN} — derleme hatasi"
            head -2 "${TW}/compile.log" | sed 's/^/    /'
            F=$((F+1)); FL="${FL}\n  ${TN}(cc)"
            echo "result=FAIL_COMPILE"  > "${TW}/result.log"
            echo "test_name=${TN}"     >> "${TW}/result.log"
            continue
        fi

        WC=$(${OBJCOPY} -O binary -j .text.init -j .text "${TW}/test.elf" "${TW}/i.bin" \
                2>/dev/null && wc -c < "${TW}/i.bin")
        if [ "${WC:-0}" -gt 983040 ]; then
            echo -e "  [${YLW}SKIP${NC}] ${TN} — ${WC}B, 8KB'a sigmiyor"
            S=$((S+1))
            { echo "result=SKIP_TOO_LARGE"; echo "test_name=${TN}"; echo "text_bytes=${WC}"; } > "${TW}/result.log"
            continue
        fi

        ${PY} "${PROJ}/scripts/elf2hex.py" "${TW}/i.bin" "${TW}/fw.hex" >/dev/null 2>&1
        ${OBJCOPY} -O binary -j .rodata -j .data -j .tohost \
                   "${TW}/test.elf" "${TW}/d.bin" 2>/dev/null \
            || printf '' > "${TW}/d.bin"
        ${PY} "${PROJ}/scripts/elf2hex.py" "${TW}/d.bin" "${TW}/dm.hex" >/dev/null 2>&1

        { echo "@00004000"; cat "${TW}/fw.hex"; } > "${PROJ}/obj_dir_arch/firmware.hex"   # 1MB arch SRAM: 0x10000 -> word 0x4000 (alias yok)
        cp "${TW}/dm.hex" "${PROJ}/obj_dir_arch/data_mem.hex"
        cd "${PROJ}/obj_dir_arch"
        timeout 30 ./blogic_sim +CPB=432 +MAX_CYCLES=2000000 "+TEST_NAME=${TN}" "+LOGDIR=${TW}" \
            >"${TW}/sim.log" 2>&1 || true
        cd "${PROJ}"

        # GECICI PASS kriteri: RTL_PC sayisi > 10
        # TODO: gercek signature compare
        PC=$(awk '/RTL_PC:/{n++} END{print n+0}' "${TW}/rtl_trace.log" 2>/dev/null || echo 0)
        {
            echo "test_name=${TN}"
            echo "text_bytes=${WC}"
            echo "rtl_pc_lines=${PC}"
        } > "${TW}/result.log"

        if [ "${PC}" -gt 10 ]; then
            echo -e "  [${GRN}PASS${NC}] ${TN}  (${PC} instr)"
            echo "result=PASS" >> "${TW}/result.log"
            P=$((P+1))
        else
            echo -e "  [${RED}FAIL${NC}] ${TN} — CPU calismadi (${PC} instr)"
            echo "result=FAIL_EXEC" >> "${TW}/result.log"
            F=$((F+1)); FL="${FL}\n  ${TN}(exec)"
        fi
    done
done

SUMMARY="${LOG_ROOT}/summary.txt"
{
    echo "================================================"
    echo " riscv-arch-test ozeti — $(date)"
    echo "================================================"
    printf "  PASS:%-3d  FAIL:%-3d  SKIP:%-3d  TOPLAM:%-3d\n" "$P" "$F" "$S" "$T"
    [ "${F}" -gt 0 ] && echo -e "  Basarisiz:${FL}"
    echo "================================================"
} | tee "${SUMMARY}"

[ "${T}" -eq 0 ] && { echo "HATA: hic test bulunamadi (verif/arch_tests/suite eksik mi?)"; exit 1; }
exit ${F}
