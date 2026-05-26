/*
 * BLogic MCU - Verilator Testbench (sim_main.cpp)
 *
 * Bu dosya soc_top modülünü simüle eder:
 *   1. 50 MHz clock üretir (periyot = 20 ns)
 *   2. Başlangıçta reset uygular (10 cycle)
 *   3. Belirli süre simülasyon koşturur
 *   4. VCD dalga formu dosyası üretir (GTKWave ile açılabilir)
 *   5. UART TX pinini dinleyip terminale yazdırır
 *
 * Derleme: Verilator Makefile tarafından otomatik yapılır
 * Çalıştırma: ./obj_dir/Vsoc_top
 */

#include <cstdio>
#include <cstdlib>
#include "Vsoc_top.h"            // Verilator'un soc_top'tan ürettiği C++ header
#include "verilated.h"
#include "verilated_vcd_c.h"     // VCD waveform kaydı için

/* Simülasyon ayarları */
#define CLK_PERIOD_NS   20       // 50 MHz = 20 ns periyot
#define RESET_CYCLES    10       // Reset süresi (cycle cinsinden)
#define MAX_SIM_CYCLES  500000   // Maksimum simülasyon uzunluğu

/* Global simülasyon zamanı (Verilator bunu kullanır) */
vluint64_t sim_time = 0;

/*
 * UART TX Pin Decoder
 *
 * uart_txd_o sinyalini cycle-by-cycle dinleyerek
 * UART frame'lerini (start bit, 8 data bit, stop bit)
 * çözümler ve terminale karakter olarak yazdırır.
 *
 * Bu, donanımdan gelen çıktıyı görmemizi sağlayan
 * en temel "sanal logic analyzer" fonksiyonudur.
 */
class UartMonitor {
public:
    /* Baud rate'e göre bir bit'in kaç clock cycle sürdüğü.
     * 50 MHz clock, prescale=27 → baud ≈ 115200
     * Bir bit = 50_000_000 / 115200 ≈ 434 cycle */
    static const int CLKS_PER_BIT = 434;

    int state = 0;          // 0=idle, 1=start, 2-9=data bits, 10=stop
    int bit_counter = 0;
    int clk_counter = 0;
    unsigned char rx_byte = 0;

    void tick(int txd_pin) {
        switch (state) {
        case 0: // IDLE: TX hattı normalde HIGH
            if (txd_pin == 0) {
                // Start bit algılandı (HIGH→LOW geçişi)
                state = 1;
                clk_counter = 0;
            }
            break;

        case 1: // START BIT: ortasına kadar bekle
            clk_counter++;
            if (clk_counter >= CLKS_PER_BIT / 2) {
                // Start bit'in ortasındayız, data bitlerine geç
                state = 2;
                bit_counter = 0;
                clk_counter = 0;
                rx_byte = 0;
            }
            break;

        case 2: case 3: case 4: case 5:
        case 6: case 7: case 8: case 9: // DATA BITS (8 adet)
            clk_counter++;
            if (clk_counter >= CLKS_PER_BIT) {
                clk_counter = 0;
                // LSB-first: her bit'i sağdan sola yerleştir
                rx_byte |= (txd_pin << bit_counter);
                bit_counter++;
                state++;
            }
            break;

        case 10: // STOP BIT
            clk_counter++;
            if (clk_counter >= CLKS_PER_BIT) {
                // Tam bir byte alındı, terminale yazdır
                printf("%c", rx_byte);
                fflush(stdout);
                state = 0;
                clk_counter = 0;
            }
            break;
        }
    }
};

int main(int argc, char **argv)
{
    /* Verilator'u başlat */
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);   // VCD kaydını etkinleştir

    /* SoC modülünü örnekle */
    Vsoc_top *top = new Vsoc_top;

    /* VCD dosyasını aç */
    VerilatedVcdC *vcd = new VerilatedVcdC;
    top->trace(vcd, 99);            // 99 seviye derinlikte sinyal kaydı
    vcd->open("sim_output.vcd");

    /* UART monitor oluştur */
    UartMonitor uart_mon;

    /* Başlangıç değerleri */
    top->clk_i    = 0;
    top->rst_ni   = 0;              // Reset aktif (active low = 0)
    top->uart_rxd_i = 1;            // UART RX idle durumu (HIGH)

    printf("[SIM] Simülasyon başlıyor...\n");
    printf("[SIM] UART çıktısı: ");

    /* Ana simülasyon döngüsü */
    for (int cycle = 0; cycle < MAX_SIM_CYCLES; cycle++) {

        /* ---- Yükselen kenar (posedge) ---- */
        top->clk_i = 1;

        /* Reset'i 10 cycle sonra bırak */
        if (cycle == RESET_CYCLES) {
            top->rst_ni = 1;        // Reset deaktif (active low = 1)
            printf("\n[SIM] Reset bırakıldı (cycle %d)\n", cycle);
            printf("[SIM] UART çıktısı: ");
        }

        top->eval();
        vcd->dump(sim_time++);

        /* UART TX pinini izle (sadece reset kalktıktan sonra) */
        if (cycle > RESET_CYCLES) {
            uart_mon.tick(top->uart_txd_o);
        }

        /* ---- Düşen kenar (negedge) ---- */
        top->clk_i = 0;
        top->eval();
        vcd->dump(sim_time++);
    }

    printf("\n[SIM] Simülasyon tamamlandı (%d cycle)\n", MAX_SIM_CYCLES);

    /* Temizlik */
    vcd->close();
    delete vcd;
    delete top;

    return 0;
}
