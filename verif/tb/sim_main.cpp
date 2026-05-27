#include <verilated.h>
#include "Vsoc_top.h"
#include <cstdio>

class UartBitDecoder {
    enum State { IDLE, DATA, STOP };
    State st = IDLE;
    int clks = 0, bit = 0;
    uint8_t sr = 0;
    const int CPB;
public:
    explicit UartBitDecoder(int cpb) : CPB(cpb) {}
    bool tick(uint8_t rx_pin) {
        switch (st) {
        case IDLE:
            if (rx_pin == 0) { clks = CPB/2; st = DATA; bit = 0; sr = 0; }
            return false;
        case DATA:
            if (--clks == 0) {
                sr |= (rx_pin << bit);
                if (++bit == 8) { st = STOP; clks = CPB; }
                else            { clks = CPB; }
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

    // TEŞHİS DOĞRULTUSUNDA GÜNCELLENDİ: 54 * 8 = 432 clock vuruşu (1 bit)
    const int CPB = 432;
    const long MAX_CYC = 20000000L;  // 20M cycle limit

    UartBitDecoder uart(CPB);
    long cyc = 0;
    int got_chars = 0;
    long last_char_cyc = 0;
    int txd_low_count = 0;
    uint8_t prev_txd = 1;

    // Reset Akışı
    top->rst_ni = 0; top->clk_i = 0; top->uart_rxd_i = 1;
    for (int i = 0; i < 20; i++) {
        top->clk_i = !top->clk_i; top->eval();
    }
    top->rst_ni = 1;

    printf("[SIM] Reset released. Target Cycles Per Bit = %d\n", CPB);

    while (cyc < MAX_CYC) {
        top->clk_i = 1; top->eval();

        uint8_t cur_txd = top->uart_txd_o;
        // TX hattındaki düşen kenarları (Dallanmaları) sayalım
        if (cur_txd == 0 && prev_txd == 1) {
            txd_low_count++;
            if (txd_low_count <= 5)
                printf("\n[DBG] uart_txd_o went LOW (Start Bit active) at cycle %ld\n", cyc);
        }
        prev_txd = cur_txd;

        // Bit decoder tıklar
        if (uart.tick(cur_txd)) {
            uint8_t c = uart.byte();
            if (c >= 0x20 && c < 0x7F) printf("%c", c);
            else if (c == '\n')        printf("\n");
            else                       printf("[0x%02X]", c);
            fflush(stdout);
            got_chars++;
            last_char_cyc = cyc;
        }

        top->clk_i = 0; top->eval();
        cyc++;

        // Karakter basımı bittikten 100k cycle sonra otomatik kapat (Sonsuz döngüyü yakala)
        if (got_chars > 0 && (cyc - last_char_cyc) > 100000) {
            printf("\n[SIM] UART transmission completed. Stopping simulation.\n");
            break;
        }
    }

    if (cyc >= MAX_CYC) printf("\n[SIM] Timeout reached after %ld cycles.\n", MAX_CYC);
    printf("[SIM] Total Summary: %d chars received in %ld cycles.\n", got_chars, cyc);
    top->final();
    delete top;
    return 0;
}
