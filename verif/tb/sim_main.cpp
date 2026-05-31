// ============================================================
// BLogic MCU — Verilator Testbench (sim_main.cpp)
// TEKNOFEST 2026 Çip Tasarım Yarışması
// ============================================================
// Çalışma modları:
//   (varsayılan)   : UART self-checking test
//   --archtest     : riscv-arch-test modu (tohost izle, signature dump)
//
// Arch-test argümanları:
//   --archtest --sig-file <dosya>
//   --sig-begin <hex_addr>  (opsiyonel, ELF'den parse edilir)
//   --sig-end   <hex_addr>  (opsiyonel, ELF'den parse edilir)
//   --tohost    <hex_addr>  (varsayılan: otomatik)
//   --max-cycles <N>        (varsayılan: 500000)
// ============================================================

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <verilated.h>
#include "Vsoc_top.h"

// ── Sabitler ──
#define CLK_HALF_PERIOD   5
#define DATA_SRAM_BASE    0x20000u
#define DATA_SRAM_SIZE    8192u      // 8 KB
#define DEFAULT_MAX_CYC   10000000u
#define UART_CPB_DEFAULT  54         // 115200 baud @ 50 MHz

// ── UART baud hesabı ──
// Alex Forencich core: prescale = CPB, actual clocks/bit = CPB * 8
#define SIM_CLKS_PER_BIT(cpb)  ((cpb) * 8)

// ── Çalışma modu ──
enum SimMode { MODE_UART, MODE_ARCHTEST };

// ── Arch-test parametreleri ──
struct ArchTestCfg {
    uint32_t sig_begin;    // begin_signature adresi
    uint32_t sig_end;      // end_signature adresi
    uint32_t tohost_addr;  // tohost adresi
    uint64_t max_cycles;
    std::string sig_file;  // çıkış dosyası
    bool     sig_addrs_set; // adresler verildi mi?
};

// ── UART RX state ──
struct UartRx {
    int     state;       // 0=idle, 1=start, 2..9=bits, 10=stop
    int     clk_count;
    int     bit_idx;
    uint8_t shift_reg;
    int     cpb;
    std::string buffer;
};

static void uart_rx_tick(UartRx &rx, int txd_pin) {
    int cpb = SIM_CLKS_PER_BIT(rx.cpb);
    if (rx.state == 0) {
        if (txd_pin == 0) { // start bit
            rx.state = 1;
            rx.clk_count = cpb / 2; // sample at midpoint
            rx.bit_idx = 0;
            rx.shift_reg = 0;
        }
    } else {
        rx.clk_count--;
        if (rx.clk_count <= 0) {
            rx.clk_count = cpb;
            if (rx.state == 1) {
                // mid-start bit
                rx.state = 2;
            } else if (rx.state >= 2 && rx.state <= 9) {
                rx.shift_reg |= (txd_pin << rx.bit_idx);
                rx.bit_idx++;
                rx.state++;
            } else {
                // stop bit — karakter hazır
                char c = (char)rx.shift_reg;
                if (c >= 0x20 || c == '\n' || c == '\r')
                    rx.buffer += c;
                printf("%c", c);
                fflush(stdout);
                rx.state = 0;
            }
        }
    }
}

// ── DATA_SRAM'den kelime okuma (Verilator public erişim) ──
// axi_sram_wrapper i_data_sram içindeki mem dizisine erişir.
// Yol: soc_top.i_data_sram.mem[offset/4]
static uint32_t read_data_sram(Vsoc_top *top, uint32_t byte_addr) {
    uint32_t offset = byte_addr - DATA_SRAM_BASE;
    if (offset >= DATA_SRAM_SIZE) {
        fprintf(stderr, "[TB] HATA: Adres 0x%08X DATA_SRAM dışında!\n", byte_addr);
        return 0xDEADBEEF;
    }
    // Verilator -public-flat-rw ile iç sinyallere erişim
    // Not: Verilator modeline göre yol değişebilir
    // Aşağıdaki yol soc_top → i_data_sram → mem[] dizisine karşılık gelir
    uint32_t word_idx = offset / 4;

    // ── DİKKAT: Bu satır Verilator modelinin gerçek hiyerarşisine bağlıdır ──
    // Verilator build'inde soc_top__DOT__i_data_sram__DOT__mem gibi bir yol olacak.
    // public-flat-rw ile erişim: top->soc_top__DOT__i_data_sram__DOT__... 
    // Bu kısım build sonrası Vsoc_top.h'den doğrulanmalıdır.
    //
    // Alternatif: axi_sram_wrapper DPI-C export ile erişim sağlanabilir.
    // Şimdilik placeholder — gerçek yolu build sonrası ayarlayacağız.
    (void)top;
    (void)word_idx;
    fprintf(stderr, "[TB] UYARI: read_data_sram() henüz bağlanmadı. Vsoc_top.h'den yol kontrol edilmeli.\n");
    return 0;
}

// ── Signature dump ──
static int dump_signature(Vsoc_top *top, const ArchTestCfg &cfg) {
    FILE *f = fopen(cfg.sig_file.c_str(), "w");
    if (!f) {
        fprintf(stderr, "[TB] HATA: Signature dosyası açılamadı: %s\n", cfg.sig_file.c_str());
        return 1;
    }
    printf("\n[TB] Signature dump: 0x%08X – 0x%08X → %s\n",
           cfg.sig_begin, cfg.sig_end, cfg.sig_file.c_str());

    for (uint32_t addr = cfg.sig_begin; addr < cfg.sig_end; addr += 4) {
        uint32_t val = read_data_sram(top, addr);
        fprintf(f, "%08x\n", val);
    }
    fclose(f);
    return 0;
}

// ── Komut satırı parse ──
static void parse_args(int argc, char **argv,
                       SimMode &mode, ArchTestCfg &acfg, int &uart_cpb)
{
    mode = MODE_UART;
    acfg.sig_begin = 0;
    acfg.sig_end = 0;
    acfg.tohost_addr = 0;
    acfg.max_cycles = DEFAULT_MAX_CYC;
    acfg.sig_file = "DUT_signature.txt";
    acfg.sig_addrs_set = false;
    uart_cpb = UART_CPB_DEFAULT;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--archtest") == 0) {
            mode = MODE_ARCHTEST;
        } else if (strcmp(argv[i], "--sig-file") == 0 && i + 1 < argc) {
            acfg.sig_file = argv[++i];
        } else if (strcmp(argv[i], "--sig-begin") == 0 && i + 1 < argc) {
            acfg.sig_begin = strtoul(argv[++i], nullptr, 16);
            acfg.sig_addrs_set = true;
        } else if (strcmp(argv[i], "--sig-end") == 0 && i + 1 < argc) {
            acfg.sig_end = strtoul(argv[++i], nullptr, 16);
            acfg.sig_addrs_set = true;
        } else if (strcmp(argv[i], "--tohost") == 0 && i + 1 < argc) {
            acfg.tohost_addr = strtoul(argv[++i], nullptr, 16);
        } else if (strcmp(argv[i], "--max-cycles") == 0 && i + 1 < argc) {
            acfg.max_cycles = strtoull(argv[++i], nullptr, 10);
        } else if (strcmp(argv[i], "--cpb") == 0 && i + 1 < argc) {
            uart_cpb = atoi(argv[++i]);
        }
    }
}

// ══════════════════════════════════════════════════════════════
//                         MAIN
// ══════════════════════════════════════════════════════════════
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    SimMode mode;
    ArchTestCfg acfg;
    int uart_cpb;
    parse_args(argc, argv, mode, acfg, uart_cpb);

    Vsoc_top *top = new Vsoc_top;

    // ── Reset ──
    top->clk_i = 0;
    top->rst_ni = 0;
    top->uart_rxd_i = 1;
    top->gpio_in_i = 0;
    top->qspi_io_i = 0;

    for (int i = 0; i < 20; i++) {
        top->clk_i ^= 1;
        top->eval();
    }
    top->rst_ni = 1;

    // ── UART RX state ──
    UartRx urx = {};
    urx.cpb = uart_cpb;

    // ── PC izleme (RTL_PC) ──
    uint32_t prev_pc = 0xFFFFFFFF;

    // ── Simülasyon döngüsü ──
    uint64_t cycle = 0;
    uint64_t max_cyc = (mode == MODE_ARCHTEST) ? acfg.max_cycles : DEFAULT_MAX_CYC;
    bool     test_done = false;

    if (mode == MODE_ARCHTEST) {
        printf("═══ BLogic MCU riscv-arch-test Modu ═══\n");
        printf("  Max cycles : %llu\n", (unsigned long long)max_cyc);
        printf("  Sig dosyasi: %s\n", acfg.sig_file.c_str());
        if (acfg.sig_addrs_set)
            printf("  Sig araligi: 0x%08X – 0x%08X\n", acfg.sig_begin, acfg.sig_end);
        if (acfg.tohost_addr)
            printf("  tohost addr: 0x%08X\n", acfg.tohost_addr);
        printf("═══════════════════════════════════════\n");
    } else {
        printf("═══ BLogic MCU UART Test Modu ═══\n");
        printf("  UART CPB   : %d (baud ~ %d)\n", uart_cpb,
               50000000 / (uart_cpb * 8));
        printf("═════════════════════════════════\n\n");
    }

    while (cycle < max_cyc && !test_done) {
        // Rising edge
        top->clk_i = 1;
        top->eval();

        // ── UART karakter yakalama (her iki modda da aktif) ──
        uart_rx_tick(urx, top->uart_txd_o);

        // ── Arch-test: tohost izleme ──
        // tohost adresi DATA_SRAM içinde ise, o bellek hücresini izle.
        // Not: Verilator'da doğrudan bellek erişimi gerektirir (public-flat-rw).
        // Bu kısım build sonrası ayarlanacak — şimdilik PC tabanlı heuristic:
        //
        // riscv-arch-test RVMODEL_HALT makrosu şunu üretir:
        //   li t0, 1
        //   la t1, tohost
        //   sw t0, 0(t1)
        //   j .          ← sonsuz döngü (PC değişmez)
        //
        // Heuristic: aynı PC'de 100+ cycle kalırsa test bitti demek.
        if (mode == MODE_ARCHTEST) {
            // Verilator'dan pc_id'yi oku (public-flat-rw gerekli)
            // Yol: top->soc_top__DOT__i_cpu__DOT__... 
            // Şimdilik placeholder — build sonrası ayarlanacak.
            // Alternatif olarak: sim süresi + UART çıkışı ile de çalışır.
        }

        // Falling edge
        top->clk_i = 0;
        top->eval();
        cycle++;
    }

    printf("\n\n[TB] Simulasyon bitti. Toplam cycle: %llu\n", (unsigned long long)cycle);

    // ── Arch-test: signature dump ──
    if (mode == MODE_ARCHTEST && acfg.sig_addrs_set) {
        dump_signature(top, acfg);
    }

    // ── UART modu: golden string karşılaştırma ──
    if (mode == MODE_UART) {
        const char *golden = "BLogic MCU UART OK\r\n";
        if (urx.buffer.find(golden) != std::string::npos) {
            printf("\n[TB] *** PASS *** Golden string eslesti!\n");
        } else {
            printf("\n[TB] *** FAIL *** Golden string bulunamadi.\n");
            printf("  Alinan: \"%s\"\n", urx.buffer.c_str());
        }
    }

    delete top;
    return test_done ? 0 : (cycle >= max_cyc ? 1 : 0);
}
