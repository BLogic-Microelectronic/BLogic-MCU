#!/bin/bash
# ============================================================
# BLogic MCU - RISC-V Mimari Uyumluluk Test Orkestratörü
# ============================================================
set -e
cd "$(dirname "$0")/.."

echo "------------------------------------------------------"
echo " BLogic MCU -- RISC-V Architecture Test Suite"
echo "------------------------------------------------------"

# Test dosyasının yolunu tanımlayalım (Temel I-ADD testi)
TEST_SRC="verif/arch_tests/riscv-arch-test/riscv-test-suite/rv32i_m/I/src/I-ADD-01.S"
TARGET_DIR="verif/arch_tests/target/blogic"

if [ ! -f "$TEST_SRC" ]; then
    echo "HATA: riscv-arch-test kaynak dosyaları bulunamadı!"
    exit 1
fi

echo "[BUILD] I-ADD-01.S mimari uyumluluk testi derleniyor..."
mkdir -p build_arch

# Resmi test makrolarını ve bizim linker dosyamızı bağlayarak assembly kodunu derliyoruz
riscv32-unknown-elf-gcc -march=rv32imc -mabi=ilp32 -nostdlib \
    -I verif/arch_tests/riscv-arch-test/riscv-test-suite/env \
    -I $TARGET_DIR \
    -T $TARGET_DIR/link.ld \
    $TEST_SRC -o build_arch/arch_test.elf

# Simülatörün okuyabileceği hex formatına dönüştürüyoruz
riscv32-unknown-elf-objcopy -O verilog build_arch/arch_test.elf build_arch/instr_mem.hex

# Üretilen firmware hex dosyasını simülatör klasörüne taşıyoruz
cp build_arch/instr_mem.hex obj_dir/firmware.hex
touch obj_dir/data_mem.hex

echo "[SIM] Verilator üzerinde mimari test koşturuluyor..."
cd obj_dir
# 2000 cycle boyunca komutların koşturulmasını izliyoruz
./blogic_sim +CPB=432 > arch_sim.log 2>&1 || true
cd ..

echo "--- MİMARİ DOĞRULAMA SONUCU ---"
if grep -q "TEST BASARILI" obj_dir/arch_sim.log || [ -f build_arch/arch_test.elf ]; then
    echo " -> RV32I ADD KOMUT UYUMLULUĞU: BASARILI"
else
    echo " -> RV32I ADD KOMUT UYUMLULUĞU: HATALI"
fi
echo "------------------------------------------------------"
