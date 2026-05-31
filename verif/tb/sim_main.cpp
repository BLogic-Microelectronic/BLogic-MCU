// ============================================================
// BLogic MCU — Verilator Testbench
// TEKNOFEST 2026 Çip Tasarım Yarışması
// ============================================================
// Kullanım:
//   ./blogic_sim +CPB=432                    UART test (115200)
//   ./blogic_sim +CPB=5208                   UART test (9600)
//   ./blogic_sim +CPB=432 +TEST=LOOPBACK     Loopback test
// ============================================================

#include <verilated.h>
#include "Vsoc_top.h"
#include "Vsoc_top___024root.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

// ── UART Bit Decoder ──
class UartBitDecoder {
    enum State { IDLE, START_BIT, DATA, STOP };
    State st = IDLE;
    int clks = 0, bit = 0;
    uint8_t sr = 0;
    const int CPB;
public:
    explicit UartBitDecoder(int cpb) : CPB(cpb) {}
    bool tick(uint8_t rx_pin) {
        switch (st) {
        case IDLE:
            if (rx_pin == 0) { clks = CPB / 2; st = START_BIT; }
            return false;
        case START_BIT:
            if (--clks == 0) {
                if (rx_pin == 0) { clks = CPB; st = DATA; bit = 0; sr = 0; }
                else             { st = IDLE; }
            }
            return false;
        case DATA:
            if (--clks == 0) {
                sr |= (rx_pin << bit);
                clks = CPB;
                if (++bit == 8) { st = STOP; }
            }
            return false;
        case STOP:
            if (--clks == 0) { st = IDLE; return true; }
            return false;
        }
        return false;
    }
    uint8_t byte() const { return sr; }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* top = new Vsoc_top;

    // ── Varsayılan ayarlar ──
    int CPB = 432;
    std::string golden_string = "Hello World from BLogic MCU!\n";
    uint64_t max_cycles = 10000000;

    // ── Komut satırı argümanları ──
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg.find("+CPB=") == 0)
            CPB = std::stoi(arg.substr(5));
        if (arg == "+TEST=LOOPBACK")
            golden_string = "LOOPBACK SUCCESS\n";
    }

    UartBitDecoder uart_decoder(CPB);
    std::vector<uint8_t> rx_buf;
    uint64_t cyc = 0;

    // ── Reset ──
    top->clk_i = 0; top->rst_ni = 0; top->uart_rxd_i = 1;
    top->gpio_in_i = 0; top->qspi_io_i = 0;
    top->eval();
    for (int i = 0; i < 20; i++) { top->clk_i = !top->clk_i; top->eval(); }
    top->rst_ni = 1;

    // ── QSPI Flash Modeli ──
    bool last_sclk = false;
    int flash_bit_cnt = 0;

    // ── PC izleme ──
    uint32_t last_printed_pc = 0;

    while (cyc < max_cycles) {
        // Rising edge
        top->clk_i = 1;
        top->uart_rxd_i = top->uart_txd_o;  // loopback

        // ── QSPI Flash Model ──
        if (top->qspi_cs_no == 0) {
            bool current_sclk = top->qspi_sclk_o;
            if (!last_sclk && current_sclk) flash_bit_cnt++;
            last_sclk = current_sclk;
            if (flash_bit_cnt >= 32) {
                int data_bit_idx = 7 - ((flash_bit_cnt - 32) % 8);
                bool miso = (0xAA >> data_bit_idx) & 1;
                top->qspi_io_i = (miso << 1);
            } else {
                top->qspi_io_i = 0;
            }
        } else {
            last_sclk = false;
            flash_bit_cnt = 0;
            top->qspi_io_i = 0;
        }

        top->eval();

        // ── PC izleme ──
        uint32_t current_pc = top->rootp->soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id;
        if (current_pc != last_printed_pc && current_pc >= 0x10000 && current_pc < 0x20000) {
            // RTL_PC logunu dosyaya yaz (ekran gürültüsünü azalt)
            printf("RTL_PC: 0x%08X\n", current_pc);
            last_printed_pc = current_pc;
        }

        // ── UART karakter yakalama ──
        if (uart_decoder.tick(top->uart_txd_o)) {
            uint8_t c = uart_decoder.byte();
            rx_buf.push_back(c);

            // Golden string buffer'da göründüyse dur
            std::string buf_str(rx_buf.begin(), rx_buf.end());
            if (buf_str.find(golden_string) != std::string::npos) break;
        }

        // Falling edge
        top->clk_i = 0; top->eval();
        cyc++;
    }

    // ── UART çıktısını göster ──
    std::string full_output(rx_buf.begin(), rx_buf.end());
    std::cout << "\n=== UART CIKTISI ===" << std::endl;
    std::cout << full_output << std::endl;
    std::cout << "====================" << std::endl;

    // ── Test sonucu ──
    std::cout << "\n======== TEST SONUCU ========" << std::endl;
    bool match = (full_output.find(golden_string) != std::string::npos);

    if (match) {
        std::cout << ">>> [PASS] TEST BASARILI <<<" << std::endl;
        delete top;
        return 0;
    } else {
        std::cout << ">>> [FAIL] TEST BASARISIZ <<<" << std::endl;
        printf("\n[DIAG] --- KOK HATA TESHIS RAPORU ---\n");
        printf("[DIAG] Son Karakter Sayisi : %zu\n", rx_buf.size());
        printf("[DIAG] Toplam Cycle        : %llu\n", (unsigned long long)cyc);
        printf("[DIAG] Islemci PC (pc_id)  : 0x%08X\n",
            top->rootp->soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id);
        printf("[DIAG] QSPI Durum          : CS_N=%d SCLK=%d\n",
            top->qspi_cs_no, top->qspi_sclk_o);
        printf("[DIAG] QSPI FSM            : STATE=%d BUSY=%d DONE=%d\n",
            top->rootp->soc_top__DOT__i_qspi__DOT__spi_state,
            top->rootp->soc_top__DOT__i_qspi__DOT__sta_busy,
            top->rootp->soc_top__DOT__i_qspi__DOT__sta_done);
        printf("[DIAG] ---------------------------------\n");
        delete top;
        return 1;
    }
}
