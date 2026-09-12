#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_arch_test.sh  -  riscv-arch-test kosturucu
# ============================================
# riscv-arch-test runner — ciktilar logs/arch_test/ altinda
set -euo pipefail
PROJ="$(cd "$(dirname "$0")/../.." && pwd)"
REPO="${PROJ}/verif/arch_tests/suite"   # vendor alt kume: env + rv32i_m/I,M,C
TGT="${PROJ}/verif/arch_tests/target/blogic"
LOG_ROOT="${PROJ}/logs/arch_test"
KNOWN="${PROJ}/verif/arch_tests/known_diffs.txt"   # analiz edilmis imza farklari
GCC=riscv32-unknown-elf-gcc
OBJCOPY=riscv32-unknown-elf-objcopy
NM=riscv32-unknown-elf-nm
PY=python3
SIM="${PROJ}/obj_dir_arch/blogic_sim"
MARCH="rv32imc_zicsr_zifencei"
INC="-I${REPO}/env -I${TGT}"
FILT="${1:-I}"; TFILT="${2:-}"
RED='\033[0;31m'; GRN='\033[0;32m'; YLW='\033[1;33m'; NC='\033[0m'

# zicsr/zifencei ayri uzanti adi olarak binutils 2.36+ (2021) ile geldi. Daha eski
# zincirler (orn. crosstool-NG gcc 10.2.0) 'zifencei'yi tanimayip derlemeyi kesiyor.
# fence.i eski spec'te temel I'nin parcasi oldugu icin son ek dusunce islev degismez.
# Geri dusum SESSIZ OLMAMALI: iki makine farkli -march ile derlerse ve bu hicbir
# yerde gorunmezse K8/K9/K14'un kalibi tekrarlanir (ortam farki sessizce farkli sonuc
# uretir). Tetiklendiginde ekrana basilir; kullanilan deger result.log'a da yazilir.
if ! ${GCC} -march=${MARCH} -mabi=ilp32 -c -x assembler /dev/null -o /dev/null 2>/dev/null; then
    _march_full="${MARCH}"
    MARCH="rv32imc_zicsr"
    _gccv=$(${GCC} -dumpversion 2>/dev/null || echo "?")
    echo -e "${YLW}  [UYARI] arac zinciri '${_march_full}' dizgesini reddetti -> '${MARCH}' kullaniliyor${NC}"
    echo -e "${YLW}          (gcc ${_gccv}: zicsr/zifencei ayri uzanti adi binutils 2.36+ ile geldi)${NC}"
    echo -e "${YLW}          Imza esdegerligi spike'li makinede dogrulanmalidir.${NC}"
fi

echo -e "${YLW}═══ BLogic MCU riscv-arch-test ═══${NC}"
echo -e "${YLW}  Cikti: ${LOG_ROOT}${NC}"
mkdir -p "${LOG_ROOT}"

# Yeniden derleme yalnizca "ikili yok" kosuluna baglanirsa, TB/RTL degistiginde
# bayat ikili sessizce kullanilir ve yeni plusarg'lar (+TOHOST, +SIG_*) yutulur —
# testler kosar ama kapi hic devreye girmez. Kaynaklardan yeni olani da tetiklesin.
_stale=0
[ -x "${SIM}" ] || _stale=1
if [ -x "${SIM}" ]; then
    for _s in "${PROJ}/verif/tb/sim_main.cpp" $(find "${PROJ}/rtl" -name '*.sv' -newer "${SIM}" -print -quit 2>/dev/null); do
        [ "${_s}" -nt "${SIM}" ] && { _stale=1; break; }
    done
fi
[ "${_stale}" -eq 0 ] || { cd "${PROJ}"; make -f Makefile.verilator verilate-arch; }
echo 00000000 > "${PROJ}/obj_dir_arch/bootrom.hex"   # zero-ROM: PC=0 illegal -> trap -> mtvec(0x10000)
[ -f "${PROJ}/obj_dir_arch/ai_sram_init.hex" ] || echo 00000000 > "${PROJ}/obj_dir_arch/ai_sram_init.hex"

if [[ "${FILT}" == *"-"* ]]; then TFILT="${FILT}"; FILT="I"; fi
P=0; F=0; S=0; T=0; K=0; FL=""; KL=""

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

        # Kaynak hazirligi (RV32C icin gerekli; I/M testlerinde ikisi de etkisiz,
        # I/M kaynaklarinda .org yok ve 'def' tanimi yalniz cebreak-01'de var):
        # (1) RV32C vendor testleri .text.init basina '.org 0x80' koyuyor. link.ld'de
        #     .text.init 0x10000'dan basliyor ve cekirdek oraya tuzakla giriyor; 0x80
        #     baytlik sifir dolgu c.unimp olarak tuzaklanip yine mtvec=0x10000'a doner,
        #     test hic baslamaz. .org yalniz giris noktasini kaydirir; imza
        #     begin_signature etiketinden okundugu icin satiri silmek imzayi degistirmez.
        # (2) RVTEST_CASE icindeki 'def X=True' tanimlari riscof'un -D ile verdigi
        #     makrolardir; bu kosturucu onlari okumuyordu. cebreak-01
        #     'def rvtest_mtrap_routine=True' istiyor (c.ebreak tuzagini imzaya yazan
        #     tuzak rutini) - kaynaktan okunup DUT ve spike derlemesine ayni verilir.
        # (3) cebreak-01 bu hedefte imza esitligine ULASAMAZ; fark analiz edilip
        #     known_diffs.txt'e yazildi (bkz. o dosya). Ozet: c.ebreak dogru tuzaklaniyor
        #     (mcause=3 ve goreli mepc imzada spike ile esit), ama cercevenin tuzak rutini
        #     (a) mtval'i kod/veri bolgesine gore konumlandirip bolge disindaysa testi
        #     durduruyor - CV32E40P'de mtval salt-okunur 0 (priv spec izin veriyor),
        #     spike ebreak'te mtval=PC yaziyor; (b) SKIP_MTVAL ile bu atlansa bile ozel
        #     isleyici tablosunu KOD bellegindeki bir tablodan veri yuklemesiyle okuyor;
        #     SoC Harvard: veri portu 0x0001_xxxx'i OKUYAMAZ (soc_axi_interconnect.sv
        #     :194-203,242-245, buyruk SRAM'i veri tarafindan yalniz yazilir), tablo 0
        #     okunur ve rutin abort_tests'e gider. Iki durumda da tuzak sonrasi 2 sw kosmaz.
        SRC_S="${TW}/src.S"
        sed '/^[[:space:]]*\.org[[:space:]]/d' "${TS}" > "${SRC_S}"
        XDEF=""
        if grep -q 'def rvtest_mtrap_routine=True' "${TS}"; then XDEF="-Drvtest_mtrap_routine=True"; fi

        if ! ${GCC} -march=${MARCH} -mabi=ilp32 -nostdlib -nostartfiles \
                    -DTEST_FLEN=0 -DXLEN=32 -DUDB_MXLEN=32 -DTEST_CASE_1=True ${XDEF} -static -Wl,--no-check-sections \
                    -T "${TGT}/link.ld" ${INC} "${SRC_S}" "${TGT}/htif.S" -o "${TW}/test.elf" \
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
                   -DTEST_FLEN=0 -DXLEN=32 -DUDB_MXLEN=32 -DTEST_CASE_1=True ${XDEF} \
                   -static -Wl,--no-check-sections \
                   -T "${TGT}/link_spike.ld" ${INC} "${SRC_S}" "${TGT}/htif.S" \
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
                    # Bilinen fark yalniz test adi VE diff ciktisinin birebir ozeti
                    # known_diffs.txt ile eslesirse kabul edilir: farkin tek bir sozcugu
                    # degisse ozet tutmaz ve test yine FAIL olur.
                    DH=$( { diff "${TW}/ref.sig" "${TW}/dut.sig" 2>/dev/null || true; } | md5sum | cut -c1-32)
                    echo "${DH}" > "${TW}/sig_diff.md5"
                    if grep -q "^${TN} ${DH}" "${KNOWN}" 2>/dev/null; then
                        SIGDIFF="BILINEN_FARK(${ND:-0} word)"
                    fi
                fi
            else
                SIGDIFF="ref_yok"
            fi
        fi
        echo "sig_diff=${SIGDIFF}" >> "${TW}/result.log"
        echo "march=${MARCH}" >> "${TW}/result.log"
        if [ "${SIGDIFF}" = "ESIT" ]; then
            echo "gate=tohost+signature" >> "${TW}/result.log"
        else
            echo "gate=tohost_write" >> "${TW}/result.log"
        fi

        if [ -n "${TOH_V}" ] && [ "${TOH_V}" != "0x00000000" ] \
           && { [ "${SIGDIFF}" = "ESIT" ] || [ "${SIGDIFF}" = "atlandi" ]; }; then
            echo -e "  [${GRN}PASS${NC}] ${TN}  (${PC} instr, imza ${SIGW} word, ${SIGDIFF})"
            echo "result=PASS" >> "${TW}/result.log"
            P=$((P+1))
        elif [ -n "${TOH_V}" ] && [ "${TOH_V}" != "0x00000000" ] \
             && [[ "${SIGDIFF}" == BILINEN_FARK* ]]; then
            echo -e "  [${YLW}BILINEN${NC}] ${TN}  (${SIGDIFF}; aciklama: verif/arch_tests/known_diffs.txt)"
            echo "result=KNOWN_DIFF" >> "${TW}/result.log"
            K=$((K+1)); KL="${KL}\n  ${TN}"
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
    printf "  PASS:%-3d  FAIL:%-3d  SKIP:%-3d  BILINEN_FARK:%-3d  TOPLAM:%-3d\n" "$P" "$F" "$S" "$K" "$T"
    [ "${F}" -gt 0 ] && echo -e "  Basarisiz:${FL}"
    [ "${K}" -gt 0 ] && echo -e "  Bilinen fark (verif/arch_tests/known_diffs.txt):${KL}"
    echo "================================================"
} | tee "${SUMMARY}"

[ "${T}" -eq 0 ] && { echo "HATA: hic test bulunamadi (verif/arch_tests/suite eksik mi?)"; exit 1; }
exit ${F}
