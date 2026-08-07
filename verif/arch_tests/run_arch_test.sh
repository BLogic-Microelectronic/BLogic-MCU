#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_arch_test.sh  -  riscv-arch-test kosturucu
# ============================================
# riscv-arch-test runner — ciktilar logs/arch_test/ altinda
set -euo pipefail
PROJ="$(cd "$(dirname "$0")/../.." && pwd)"
REPO="${PROJ}/verif/arch_tests/suite"   # vendor alt kume: env + rv32i_m/I,M
TGT="${PROJ}/verif/arch_tests/target/blogic"
LOG_ROOT="${PROJ}/logs/arch_test"
GCC=riscv32-unknown-elf-gcc
OBJCOPY=riscv32-unknown-elf-objcopy
NM=riscv32-unknown-elf-nm
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
echo 00000000 > "${PROJ}/obj_dir_arch/bootrom.hex"   # zero-ROM: PC=0 illegal -> trap -> mtvec(0x10000)
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
            echo -e "  [${YLW}SKIP${NC}] ${TN} — ${WC}B, 960KB buyruk penceresine sigmiyor"
            S=$((S+1))
            { echo "result=SKIP_TOO_LARGE"; echo "test_name=${TN}"; echo "text_bytes=${WC}"; } > "${TW}/result.log"
            continue
        fi

        ${PY} "${PROJ}/scripts/elf2hex.py" "${TW}/i.bin" "${TW}/fw.hex" >/dev/null 2>&1
        ${OBJCOPY} -O binary -j .rodata -j .data -j .tohost \
                   "${TW}/test.elf" "${TW}/d.bin" 2>/dev/null \
            || printf '' > "${TW}/d.bin"
        ${PY} "${PROJ}/scripts/elf2hex.py" "${TW}/d.bin" "${TW}/dm.hex" >/dev/null 2>&1

        { echo "@00004000"; cat "${TW}/fw.hex"; } > "${PROJ}/obj_dir_arch/firmware.hex"   # 0x10000 -> word 0x4000
        cp "${TW}/dm.hex" "${PROJ}/obj_dir_arch/data_mem.hex"
        # K4: imza ve tohost sembollerini ELF'ten cek
        SIG_B=$(${NM} "${TW}/test.elf" 2>/dev/null | awk '$3=="begin_signature"{print "0x"$1}')
        SIG_E=$(${NM} "${TW}/test.elf" 2>/dev/null | awk '$3=="end_signature"{print "0x"$1}')
        TOH_A=$(${NM} "${TW}/test.elf" 2>/dev/null | awk '$3=="tohost"{print "0x"$1}')

        cd "${PROJ}/obj_dir_arch"
        timeout 30 ./blogic_sim +CPB=432 +MAX_CYCLES=2000000 "+TEST_NAME=${TN}" "+LOGDIR=${TW}" \
            ${SIG_B:+"+SIG_START=${SIG_B}"} ${SIG_E:+"+SIG_END=${SIG_E}"} \
            ${SIG_B:+"+SIG_FILE=${TW}/dut.sig"} ${TOH_A:+"+TOHOST=${TOH_A}"} \
            >"${TW}/sim.log" 2>&1 || true
        cd "${PROJ}"

        # sim'in yazdigi tohost'u result.log ezilmeden once al
        TOH_V=$(awk -F= '/^tohost=/{print $2}' "${TW}/result.log" 2>/dev/null | head -1)

        # K4 Kademe 1: kapi artik "test sonuna kadar kostu mu" olcutunde.
        # RVMODEL_HALT tohost'a 1 yazar; yazma yoksa test tamamlanmamistir.
        # Kademe 2: dut.sig <-> spike referans imzasi diff'i eklenecek.
        PC=$(awk '/RTL_PC:/{n++} END{print n+0}' "${TW}/rtl_trace.log" 2>/dev/null || echo 0)
        SIGW=$( [ -f "${TW}/dut.sig" ] && wc -l < "${TW}/dut.sig" || echo 0 )
        {
            echo "test_name=${TN}"
            echo "text_bytes=${WC}"
            echo "rtl_pc_lines=${PC}"
            echo "tohost=${TOH_V:-yok}"
            echo "sig_words=${SIGW}"
            echo "gate=tohost_write"
        } > "${TW}/result.log"

        # K4 Kademe 2: spike referans imzasi ile karsilastir.
        # RVMODEL_HALT sonsuz donguye giriyor, HTIF bizim bellek haritamizda
        # devreye girmiyor -> --instructions ile sinirla (testler <5k buyruk).
        SIGDIFF="atlandi"
        if command -v spike >/dev/null 2>&1 && [ -s "${TW}/dut.sig" ]; then
            # Referans ELF AYRI yerlesimle derlenir (link_spike.ld):
            # SoC Harvard-ayrik oldugu icin link.ld'de INST_RAM (0x10000+960K) ile
            # DATA_RAM (0x20000) ust uste biner - DUT'ta sorun degil, iki ayri SRAM.
            # Spike'in bellegi BIRLESIK: .data metni eziyor, kod c.unimp'e donuyor,
            # mtvec=0 -> 0x0'da sonsuz tuzak. Olculdu: bltu-01'de spike 5421 buyrukta
            # takiliyor, DUT 6860'ta bitiriyor. Veri bolgesi 0x400000'e tasindi.
            ${GCC} -march=${MARCH} -mabi=ilp32 -nostdlib -nostartfiles \
                   -DTEST_FLEN=0 -DXLEN=32 -DUDB_MXLEN=32 -DTEST_CASE_1=True \
                   -static -Wl,--no-check-sections \
                   -T "${TGT}/link_spike.ld" ${INC} "${TS}" "${TGT}/htif.S" \
                   -o "${TW}/spike.elf" 2>"${TW}/spike_cc.log" || true
            spike --isa=rv32imc_zicsr_zifencei -m0x10000:0x800000 \
                  --instructions=5000000 \
                  +signature="${TW}/ref.sig" +signature-granularity=4 \
                  "${TW}/spike.elf" >"${TW}/spike.log" 2>&1 || true
            if [ -s "${TW}/ref.sig" ]; then
                if diff -q "${TW}/ref.sig" "${TW}/dut.sig" >/dev/null 2>&1; then
                    SIGDIFF="ESIT"
                else
                    ND=$(diff "${TW}/ref.sig" "${TW}/dut.sig" 2>/dev/null | grep -c '^<' || true)
                    SIGDIFF="FARKLI(${ND:-0} word)"
                fi
            else
                SIGDIFF="ref_yok"
            fi
        fi
        echo "sig_diff=${SIGDIFF}" >> "${TW}/result.log"

        if [ -n "${TOH_V}" ] && [ "${TOH_V}" != "0x00000000" ] \
           && { [ "${SIGDIFF}" = "ESIT" ] || [ "${SIGDIFF}" = "atlandi" ]; }; then
            echo -e "  [${GRN}PASS${NC}] ${TN}  (${PC} instr, imza ${SIGW} word, ${SIGDIFF})"
            echo "result=PASS" >> "${TW}/result.log"
            echo "gate=tohost+signature" >> "${TW}/result.log"
            P=$((P+1))
        elif [ -n "${TOH_V}" ] && [ "${TOH_V}" != "0x00000000" ]; then
            echo -e "  [${RED}FAIL${NC}] ${TN} — imza uyusmuyor (${SIGDIFF})"
            echo "result=FAIL_SIGNATURE" >> "${TW}/result.log"
            F=$((F+1)); FL="${FL}\n  ${TN}(imza)"
        else
            echo -e "  [${RED}FAIL${NC}] ${TN} — test sonuna ulasmadi (${PC} instr, tohost=${TOH_V:-yok})"
            echo "result=FAIL_HALT" >> "${TW}/result.log"
            F=$((F+1)); FL="${FL}\n  ${TN}(halt)"
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
