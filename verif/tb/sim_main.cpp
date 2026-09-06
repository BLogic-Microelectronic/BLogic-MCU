// ============================================
// Ostim BLogic Mikroelektronik
// sim_main.cpp  -  Verilator testbench
// ============================================

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

// UART hattina bayt SUREN taraf - host benzetimi.
// Neden gerekli: sim_main.cpp UART0'i loopback'e bagliyordu, host'tan veri
// enjekte etmenin yolu yoktu. ai_uart_load_test.c'nin BLG1 cercevesini
// bekleyen dongusu bu yuzden simulasyonda hic beslenemedi.
// UartBitDecoder ile birebir zamanlama modeli: her bit tam CPB cevrim.
class UartBitDriver {
    enum State { IDLE, START, DATA, STOP };
    State st = IDLE;
    int clks = 0, bit = 0;
    uint8_t sr = 0;
    const int CPB;
    std::vector<uint8_t> buf;
    size_t idx = 0;
    uint64_t delay;
    bool trig_armed = true;   // tetik istenmezse bastan acik
public:
    UartBitDriver(int cpb, std::vector<uint8_t> data, uint64_t start_delay)
        : CPB(cpb), buf(std::move(data)), delay(start_delay) {}

    // Tetik modu: TX'te beklenen dizge gorulene kadar hat bosta kalir.
    // Sabit gecikme kirilgan - firmware'in RX dongusune giris ani
    // banner uzunluguna ve cikarim suresine bagli.
    void needTrigger() { trig_armed = false; }
    void arm() { trig_armed = true; }
    bool armed() const { return trig_armed; }
    bool done() const { return st == IDLE && idx >= buf.size() && trig_armed; }
    size_t sent() const { return idx; }
    size_t total() const { return buf.size(); }

    // Bir saat cevrimi ilerlet; o cevrimde hatta surulecek seviyeyi dondur.
    uint8_t tick() {
        if (!trig_armed) return 1;              // tetik beklenirken hat bosta
        if (delay > 0) { delay--; return 1; }   // tetik SONRASI bekleme
        switch (st) {
        case IDLE:
            if (idx < buf.size()) {
                sr = buf[idx++]; st = START; clks = CPB; bit = 0;
                return 0;
            }
            return 1;
        case START: {
            uint8_t lvl = 0;
            if (--clks == 0) { st = DATA; bit = 0; clks = CPB; }
            return lvl;
        }
        case DATA: {
            uint8_t lvl = (sr >> bit) & 1u;
            if (--clks == 0) {
                clks = CPB;
                if (++bit == 8) { st = STOP; }
            }
            return lvl;
        }
        case STOP: {
            if (--clks == 0) { st = IDLE; }
            return 1;
        }
        }
        return 1;
    }
};

int main(int argc, char** argv) {
    // --- K4: riscv-arch-test imza dokumu + tohost kapisi ---
    const uint32_t K4_DSRAM_BASE = 0x00020000u;
    uint32_t k4_sig_start = 0, k4_sig_end = 0, k4_tohost = 0;
    std::string k4_sig_file;

    Verilated::commandArgs(argc, argv);
    auto* top = new Vsoc_top;

    int CPB = 432;
    std::string golden_string = "Hello World from BLogic MCU!\n";
    std::string log_dir = "../logs/sim/default";
    std::string test_name = "default";
    uint64_t max_cycles = 10000000;
    std::vector<int> sweep_cpbs;   // +SWEEP= ile dolan CPB listesi
    std::string uart_rx_file;      // +UART_RX_FILE= : hosttan surulecek ham baytlar
    uint64_t uart_rx_delay = 0;    // +UART_RX_DELAY= : surmeden once beklenecek cevrim
    std::string golden_file;       // +GOLDEN_FILE= : beklenen dizge (bosluk icerebilir)
    std::string trigger_file;      // +UART_RX_TRIGGER_FILE= : RX gonderimini baslatan TX dizgesi
    std::string ai_dump_file;      // +AI_SRAM_DUMP= : kosu sonunda AI SRAM giris bolgesi
    std::string gpio_log_file;     // +GPIO_LOG= : gpio_out_o her degistiginde "cevrim deger" (OLED bit-bang izi)

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if      (arg.rfind("+CPB=", 0)       == 0) CPB = std::stoi(arg.substr(5));
        else if (arg.rfind("+GPIO_LOG=", 0)  == 0) gpio_log_file = arg.substr(10);
        else if (arg == "+TEST=LOOPBACK")          golden_string = "LOOPBACK SUCCESS\n";
        else if (arg.rfind("+MAX_CYCLES=", 0) == 0) max_cycles = std::stoull(arg.substr(12));
        else if (arg.rfind("+LOGDIR=", 0)    == 0) log_dir = arg.substr(8);
        else if (arg.rfind("+TEST_NAME=", 0) == 0) test_name = arg.substr(11);
        else if (arg.rfind("+SIG_START=", 0) == 0) k4_sig_start = std::stoul(arg.substr(11), nullptr, 0);
        else if (arg.rfind("+SIG_END=", 0)   == 0) k4_sig_end   = std::stoul(arg.substr(9),  nullptr, 0);
        else if (arg.rfind("+SIG_FILE=", 0)  == 0) k4_sig_file  = arg.substr(10);
        else if (arg.rfind("+TOHOST=", 0)    == 0) k4_tohost    = std::stoul(arg.substr(8),  nullptr, 0);
        else if (arg.rfind("+UART_RX_FILE=", 0)  == 0) uart_rx_file  = arg.substr(14);
        else if (arg.rfind("+UART_RX_DELAY=", 0) == 0) uart_rx_delay = std::stoull(arg.substr(15));
        else if (arg.rfind("+GOLDEN_FILE=", 0)   == 0) golden_file   = arg.substr(13);
        else if (arg.rfind("+UART_RX_TRIGGER_FILE=", 0) == 0) trigger_file = arg.substr(22);
        else if (arg.rfind("+AI_SRAM_DUMP=", 0) == 0) ai_dump_file = arg.substr(14);
        else if (arg.rfind("+SWEEP=", 0)     == 0) {
            // virgul ayrili CPB listesi, orn: +SWEEP=434,50,5208
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

    // baud sweep modu: her fazda alici CPB'yi degistirip marker bekler
    size_t sweep_done  = 0;
    size_t search_from = 0;
    if (!sweep_cpbs.empty()) {
        golden_string = "BAUD-OK\n";
        CPB = sweep_cpbs[0];
    }

    std::cout << "[SIM] start  test=" << test_name
              << "  cpb=" << CPB
              << "  logdir=" << log_dir << std::endl;

    // +GOLDEN_FILE: bosluk iceren beklenen dizgeler plusarg'a sigmiyor,
    // dosyadan okunuyor. Sondaki tek newline kirpilir (editor ekliyor).
    if (!golden_file.empty()) {
        std::ifstream gf(golden_file, std::ios::binary);
        if (!gf) { std::cerr << "[SIM] HATA: golden dosyasi acilamadi: "
                             << golden_file << std::endl; return 2; }
        std::string g((std::istreambuf_iterator<char>(gf)),
                       std::istreambuf_iterator<char>());
        if (!g.empty() && g.back() == '\n') g.pop_back();
        if (g.empty()) { std::cerr << "[SIM] HATA: golden dosyasi bos" << std::endl; return 2; }
        golden_string = g;
        std::cout << "[SIM] golden (dosyadan): \"" << golden_string << "\"" << std::endl;
    }

    // +UART_RX_FILE: host tarafini benzet. Dosya verilirse UART0 loopback'i
    // KAPANIR - aksi halde MCU kendi ciktisini RX'te gorur ve protokol bozulur.
    UartBitDriver* uart_driver = nullptr;
    if (!uart_rx_file.empty()) {
        std::ifstream rf(uart_rx_file, std::ios::binary);
        if (!rf) { std::cerr << "[SIM] HATA: RX dosyasi acilamadi: "
                             << uart_rx_file << std::endl; return 2; }
        std::vector<uint8_t> d((std::istreambuf_iterator<char>(rf)),
                                std::istreambuf_iterator<char>());
        if (d.empty()) { std::cerr << "[SIM] HATA: RX dosyasi bos" << std::endl; return 2; }
        std::cout << "[SIM] UART RX enjeksiyonu: " << d.size() << " bayt, CPB=" << CPB
                  << ", gecikme=" << uart_rx_delay << " cevrim (loopback KAPALI)" << std::endl;
        uart_driver = new UartBitDriver(CPB, std::move(d), uart_rx_delay);
    }

    std::string uart_trigger;
    if (uart_driver && !trigger_file.empty()) {
        std::ifstream tf(trigger_file, std::ios::binary);
        if (!tf) { std::cerr << "[SIM] HATA: tetik dosyasi acilamadi: "
                             << trigger_file << std::endl; return 2; }
        std::string s((std::istreambuf_iterator<char>(tf)),
                       std::istreambuf_iterator<char>());
        if (!s.empty() && s.back() == '\n') s.pop_back();
        if (s.empty()) { std::cerr << "[SIM] HATA: tetik dosyasi bos" << std::endl; return 2; }
        uart_trigger = s;
        uart_driver->needTrigger();
        std::cout << "[SIM] RX tetigi: \"" << uart_trigger
                  << "\" gorulene kadar hat bosta" << std::endl;
    }

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
    top->uart1_rxd_i = 1;   // UART_1 hatti bosta '1'
    top->gpio_in_i = 0; top->qspi_io_i = 0;
    top->eval();
    for (int i = 0; i < 20; i++) { top->clk_i = !top->clk_i; top->eval(); }
    top->rst_ni = 1;

    uint64_t rx_flag_rises = 0;   // cfg_rx_done yukselen kenar = teslim edilen bayt
    uint8_t  prev_rx_flag  = 0;
    std::vector<uint8_t> rx_first;   // ilk 16 teslim edilen bayt
    bool last_sclk = false;
    int  flash_bit_cnt = 0;
    uint32_t last_printed_pc = 0;

    // +GPIO_LOG: GPIO cikis yazmacinin her degisimi (demo firmware'in OLED SPI
    // bit-bang'i ve LED bitleri host tarafinda cozulebilsin diye)
    std::ofstream gpio_log;
    uint32_t last_gpio_out = 0;
    if (!gpio_log_file.empty()) gpio_log.open(gpio_log_file);

    while (cyc < max_cycles) {
        top->clk_i = 1;
        // RX dosyasi verildiyse hat surucuden gelir; yoksa eski loopback.
        top->uart_rxd_i = uart_driver ? uart_driver->tick() : top->uart_txd_o;
        top->uart1_rxd_i = top->uart1_txd_o;   // UART_1 TX->RX loopback (strm DMA testi)

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

        if (gpio_log.is_open() && top->gpio_out_o != last_gpio_out) {
            last_gpio_out = top->gpio_out_o;
            gpio_log << cyc << ' ' << last_gpio_out << '\n';
        }

        {
            uint8_t f = top->rootp->soc_top__DOT__i_uart_0__DOT__cfg_rx_done;
            if (f && !prev_rx_flag) {
                rx_flag_rises++;
                if (rx_first.size() < 16)
                    rx_first.push_back((uint8_t)top->rootp->soc_top__DOT__i_uart_0__DOT__uart_rdr);
            }
            prev_rx_flag = f;
        }
        uint32_t current_pc  = top->rootp->soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id;
        // Lockstep icin: pc_id sadece commit-time'da loglansin. id_valid && is_decoding
        // birlikte HIGH iken instruction retire ediliyor (bkz cv32e40p_id_stage.sv:1639
        // -> minstret = id_valid_o && is_decoding_o && !illegal/ebrk/ecall).
        // Aksi takdirde taken branch sonrasi pre-fetch'lenip flush'lanan PC de loga
        // dusuyor ve Spike (committed-only) ile lockstep ayrisiyor.
        uint8_t  id_valid    = top->rootp->soc_top__DOT__i_cpu__DOT__core_i__DOT__id_valid;
        uint8_t  is_decoding = top->rootp->soc_top__DOT__i_cpu__DOT__core_i__DOT__is_decoding;
        if (id_valid && is_decoding &&
            current_pc != last_printed_pc &&
            current_pc >= 0x10000 && current_pc < 0x100000) {
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
            if (uart_driver && !uart_trigger.empty() && !uart_driver->armed()
                && buf_str.find(uart_trigger) != std::string::npos) {
                uart_driver->arm();
                std::cout << "[SIM] tetik goruldu (cycle=" << cyc
                          << "), " << uart_rx_delay << " cevrim sonra gonderim basliyor"
                          << std::endl;
            }
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

    // --- K4: imza bolgesini dok, tohost'u oku (arch-test disinda etkisiz) ---
    if (k4_tohost >= K4_DSRAM_BASE) {
        uint32_t tv = top->rootp->soc_top__DOT__i_data_sram__DOT__mem[(k4_tohost - K4_DSRAM_BASE) >> 2];
        char kb[40];
        snprintf(kb, sizeof(kb), "tohost=0x%08X\n", tv);
        result_log << kb;
    }
    if (!k4_sig_file.empty() && k4_sig_end > k4_sig_start && k4_sig_start >= K4_DSRAM_BASE) {
        std::ofstream k4_sig(k4_sig_file);
        for (uint32_t a = k4_sig_start; a < k4_sig_end; a += 4) {
            char sb[16];
            snprintf(sb, sizeof(sb), "%08x\n",
                     top->rootp->soc_top__DOT__i_data_sram__DOT__mem[(a - K4_DSRAM_BASE) >> 2]);
            k4_sig << sb;
        }
    }

    // AI SRAM giris bolgesi: 490 word = 1960 bayt. UART'tan kac bayt
    // yerine ulasti sorusunun tek dogrudan cevabi.
    if (!ai_dump_file.empty()) {
        std::ofstream ad(ai_dump_file);
        for (int i = 0; i < 490; i++) {
            char b[16];
            snprintf(b, sizeof(b), "%08x\n",
                     top->rootp->soc_top__DOT__i_ai_sram__DOT__mem[i]);
            ad << b;
        }
        std::cout << "[SIM] AI SRAM dokuldu -> " << ai_dump_file << std::endl;
        {
            std::cout << "[SIM] RTL ilk 16 bayt:";
            for (size_t i = 0; i < rx_first.size(); i++) {
                char b[8]; snprintf(b, sizeof(b), " %02X", rx_first[i]);
                std::cout << b;
            }
            std::cout << std::endl;
        }
        std::cout << "[SIM] UART_0 son durum:"
                  << "  cfg_rx_done=" << (int)top->rootp->soc_top__DOT__i_uart_0__DOT__cfg_rx_done
                  << "  cfg_tx_done=" << (int)top->rootp->soc_top__DOT__i_uart_0__DOT__cfg_tx_done
                  << "  cfg_tx_en="   << (int)top->rootp->soc_top__DOT__i_uart_0__DOT__cfg_tx_en
                  << "  RTL_teslim=" << rx_flag_rises
                  << "  uart_rdr=0x"  << std::hex
                  << (unsigned)top->rootp->soc_top__DOT__i_uart_0__DOT__uart_rdr
                  << std::dec << std::endl;
    }

    result_log << "test_name="     << test_name        << "\n"
               << "test_logdir="   << log_dir          << "\n"
               << "result="        << result           << "\n"
               << "cycles="        << cyc              << "\n"
               << "uart_bytes="    << rx_buf.size()    << "\n"
               << "wall_time_s="   << wall_s           << "\n"
               << "cpb="           << CPB              << "\n";
    if (uart_driver) {
        result_log << "uart_rx_file="  << uart_rx_file << "\n"
                   << "uart_rx_armed=" << (uart_driver->armed() ? "yes" : "no") << "\n"
                   << "uart_rx_sent="  << uart_driver->sent()
                   << "/" << uart_driver->total() << "\n"
                   << "uart_rx_done="  << (uart_driver->done() ? "yes" : "no") << "\n";
    }
    result_log
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
    delete uart_driver;
    delete top;
    return match ? 0 : 1;
}
