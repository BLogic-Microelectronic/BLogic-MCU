// ============================================================
// BLogic MCU — Verilator Testbench (file-based logging)
// ============================================================
// Kullanim:
//   ./blogic_sim +CPB=432 +TEST_NAME=foo +LOGDIR=../logs/sim/foo
//
// Log cikti'lari (LOGDIR altinda):
//   result.log     -> YAPISAL ozet (key=value)
//   uart.log       -> sadece UART byte'lari
//   rtl_trace.log  -> RTL_PC satirlari
//   diag.log       -> sadece FAIL'de
//
// Stdout: tek satirlik karar.
// ============================================================

#include <verilated.h>
#include <verilated_cov.h>
#include "Vsoc_top.h"
#include "Vsoc_top___024root.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <vector>

static void mkdir_p(const std::string& path) {
    if (path.empty()) return;
    std::string acc;
    for (char c : path) {
        acc += c;
        if (c == '/' && !acc.empty()) mkdir(acc.c_str(), 0755);
    }
    mkdir(path.c_str(), 0755);
}

static std::string iso_now() {
    char buf[32]; time_t t = time(nullptr);
    strftime(buf, sizeof(buf), "%Y-%m-%dT%H:%M:%S", localtime(&t));
    return std::string(buf);
}

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
    std::string log_dir = "../logs/sim/default";
    std::string test_name = "default";
    uint64_t max_cycles = 10000000;
    std::vector<int> sweep_cpbs;   // +SWEEP= ile dolan EK-2 cok-baud CPB listesi

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if      (arg.rfind("+CPB=", 0)       == 0) CPB = std::stoi(arg.substr(5));
        else if (arg == "+TEST=LOOPBACK")          golden_string = "LOOPBACK SUCCESS\n";
        else if (arg.rfind("+MAX_CYCLES=", 0) == 0) max_cycles = std::stoull(arg.substr(12));
        else if (arg.rfind("+LOGDIR=", 0)    == 0) log_dir = arg.substr(8);
        else if (arg.rfind("+TEST_NAME=", 0) == 0) test_name = arg.substr(11);
        else if (arg.rfind("+SWEEP=", 0)     == 0) {
            // EK-2 cok-baud kaniti: +SWEEP=434,50,5208 (virgul ayrili CPB listesi)
            std::string lst = arg.substr(7);
            size_t p = 0;
            while (p <= lst.size()) {
                size_t q = lst.find(',', p);
                if (q == std::string::npos) q = lst.size();
                if (q > p) sweep_cpbs.push_back(std::stoi(lst.substr(p, q - p)));
                p = q + 1;
            }
        }
    }

    mkdir_p(log_dir);
    std::ofstream uart_log     (log_dir + "/uart.log");
    std::ofstream rtl_trace_log(log_dir + "/rtl_trace.log");
    std::ofstream diag_log     (log_dir + "/diag.log");
    std::ofstream result_log   (log_dir + "/result.log");

    // --- EK-2 baud sweep modu ---
    // Firmware her fazda UART0->CPB'yi yeniden programlar ve "BAUD-OK\n" basar.
    // Alici faz k'da sweep_cpbs[k] ile dinler; marker yakalaninca k+1'e gecer.
    size_t sweep_done  = 0;   // tamamlanan faz sayisi
    size_t search_from = 0;   // rx_buf icinde bir sonraki aramanin baslangici
    if (!sweep_cpbs.empty()) {
        golden_string = "BAUD-OK\n";
        CPB = sweep_cpbs[0];
    }

    std::cout << "[SIM] start  test=" << test_name
              << "  cpb=" << CPB
              << "  logdir=" << log_dir << std::endl;

    UartBitDecoder* uart_decoder = new UartBitDecoder(CPB);
    if (!sweep_cpbs.empty()) {
        std::cout << "[SIM] SWEEP modu: " << sweep_cpbs.size() << " faz, CPB listesi:";
        for (size_t i = 0; i < sweep_cpbs.size(); ++i) std::cout << " " << sweep_cpbs[i];
        std::cout << std::endl;
    }
    std::vector<uint8_t> rx_buf;
    uint64_t cyc = 0;
    std::string t_start_iso = iso_now();
    time_t     t_start_s   = time(nullptr);

    top->clk_i = 0; top->rst_ni = 0; top->uart_rxd_i = 1;
    top->gpio_in_i = 0; top->qspi_io_i = 0;
    top->eval();
    for (int i = 0; i < 20; i++) { top->clk_i = !top->clk_i; top->eval(); }
    top->rst_ni = 1;

    bool last_sclk = false;
    int  flash_bit_cnt = 0;
    uint32_t last_printed_pc = 0;

    while (cyc < max_cycles) {
        top->clk_i = 1;
        top->uart_rxd_i = top->uart_txd_o;

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

        uint32_t current_pc = top->rootp->soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id;
        if (current_pc != last_printed_pc && current_pc >= 0x10000 && current_pc < 0x100000) {
            char buf[32];
            snprintf(buf, sizeof(buf), "RTL_PC: 0x%08X\n", current_pc);
            rtl_trace_log << buf;
            last_printed_pc = current_pc;
        }

        if (uart_decoder->tick(top->uart_txd_o)) {
            uint8_t c = uart_decoder->byte();
            rx_buf.push_back(c);
            uart_log.put((char)c);
            std::string buf_str(rx_buf.begin(), rx_buf.end());
            if (sweep_cpbs.empty()) {
                if (buf_str.find(golden_string) != std::string::npos) break;
            } else {
                size_t pos = buf_str.find(golden_string, search_from);
                if (pos != std::string::npos) {
                    search_from = pos + golden_string.size();
                    sweep_done++;
                    std::cout << "[SIM] SWEEP faz " << sweep_done << "/" << sweep_cpbs.size()
                              << " OK (alici CPB=" << sweep_cpbs[sweep_done - 1]
                              << ", cycle=" << cyc << ")" << std::endl;
                    if (sweep_done == sweep_cpbs.size()) break;
                    delete uart_decoder;
                    uart_decoder = new UartBitDecoder(sweep_cpbs[sweep_done]);
                }
            }
        }

        top->clk_i = 0; top->eval();
        cyc++;
    }

    uart_log.flush();
    rtl_trace_log.flush();

    std::string t_end_iso = iso_now();
    long wall_s = (long)(time(nullptr) - t_start_s);

    std::string full_output(rx_buf.begin(), rx_buf.end());
    bool match = sweep_cpbs.empty()
        ? (full_output.find(golden_string) != std::string::npos)
        : (sweep_done == sweep_cpbs.size());
    const char* result = match ? "PASS" : "FAIL";

    result_log << "test_name="     << test_name        << "\n"
               << "test_logdir="   << log_dir          << "\n"
               << "result="        << result           << "\n"
               << "cycles="        << cyc              << "\n"
               << "uart_bytes="    << rx_buf.size()    << "\n"
               << "wall_time_s="   << wall_s           << "\n"
               << "cpb="           << CPB              << "\n"
               << "started_at="    << t_start_iso      << "\n"
               << "finished_at="   << t_end_iso        << "\n";
    if (!sweep_cpbs.empty()) {
        result_log << "sweep_cpbs=";
        for (size_t i = 0; i < sweep_cpbs.size(); ++i)
            result_log << (i ? "," : "") << sweep_cpbs[i];
        result_log << "\n"
                   << "sweep_phases_done=" << sweep_done << "/" << sweep_cpbs.size() << "\n";
    }
    result_log.flush();

    if (!match) {
        diag_log << "=== KOK HATA TESHIS RAPORU ===\n";
        diag_log << "rx_byte_count="  << rx_buf.size() << "\n";
        diag_log << "total_cycles="   << cyc           << "\n";
        diag_log << "wall_time_s="    << wall_s        << "\n";
        char b[64];
        snprintf(b, sizeof(b), "pc_id=0x%08X\n",
            top->rootp->soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id);
        diag_log << b;
        snprintf(b, sizeof(b), "qspi_cs_n=%d  qspi_sclk=%d\n",
            top->qspi_cs_no, top->qspi_sclk_o);
        diag_log << b;
        snprintf(b, sizeof(b), "qspi_state=%d  qspi_busy=%d  qspi_done=%d\n",
            top->rootp->soc_top__DOT__i_qspi__DOT__spi_state,
            top->rootp->soc_top__DOT__i_qspi__DOT__sta_busy,
            top->rootp->soc_top__DOT__i_qspi__DOT__sta_done);
        diag_log << b;
        diag_log << "uart_tail=\"";
        size_t start = rx_buf.size() > 64 ? rx_buf.size() - 64 : 0;
        for (size_t i = start; i < rx_buf.size(); ++i) {
            unsigned char c = rx_buf[i];
            if (c >= 32 && c < 127) diag_log.put((char)c);
            else { snprintf(b, sizeof(b), "\\x%02X", c); diag_log << b; }
        }
        diag_log << "\"\n";
        diag_log.flush();
    }

    std::cout << "[SIM] " << result
              << "  cycles=" << cyc
              << "  bytes="  << rx_buf.size()
              << "  -> "     << log_dir
              << (match ? "/result.log" : "/diag.log")
              << std::endl;

    top->final();
#if VM_COVERAGE
    Verilated::threadContextp()->coveragep()->write((log_dir + "/coverage.dat").c_str());
    std::cout << "[COV] " << log_dir << "/coverage.dat yazildi" << std::endl;
#endif
    delete uart_decoder;
    delete top;
    return match ? 0 : 1;
}
