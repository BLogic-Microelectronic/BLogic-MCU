#include <verilated.h>
#include "Vsoc_top.h"
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

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

    int CPB = 432;
    std::string golden_string = "Hello World from BLogic MCU!\n";

    // Komut satırı argüman analizi (+TEST=LOOPBACK kontrolü)
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg.find("+CPB=") == 0) {
            CPB = std::stoi(arg.substr(5));
        }
        if (arg == "+TEST=LOOPBACK") {
            golden_string = "LOOPBACK SUCCESS\n";
        }
    }

    UartBitDecoder uart_decoder(CPB);
    std::vector<uint8_t> rx_buf;
    uint64_t cyc = 0;
    uint64_t max_cycles = 10000000;

    // Reset Akışı
    top->clk_i = 0; top->rst_ni = 0; top->uart_rxd_i = 1; top->eval();
    for (int i = 0; i < 20; i++) { top->clk_i = !top->clk_i; top->eval(); }
    top->rst_ni = 1;

    std::cout << "[SIM] Reset released. Mode Target = " << golden_string;

    while (cyc < max_cycles) {
        top->clk_i = 1;
        top->uart_rxd_i = top->uart_txd_o; // Donanımsal Hat Kısadevre Tel Loopback!
        top->eval();

        if (uart_decoder.tick(top->uart_txd_o)) {
            uint8_t c = uart_decoder.byte();
            rx_buf.push_back(c);
            std::cout << (char)c; std::cout.flush();
            if (rx_buf.size() == golden_string.length()) break;
        }

        top->clk_i = 0; top->eval();
        cyc++;
    }

    std::cout << "\n======== TEST SONUCU ========" << std::endl;
    bool match = (rx_buf.size() == golden_string.length());
    for (size_t i = 0; i < rx_buf.size() && match; i++) {
        if (rx_buf[i] != (uint8_t)golden_string[i]) match = false;
    }

    if (match) {
        std::cout << ">>> [PASS] TEST BASARILI <<<" << std::endl;
        delete top;
        return 0;
    } else {
        std::cout << ">>> [FAIL] TEST BASARISIZ <<<" << std::endl;
        delete top;
        return 1;
    }
}
