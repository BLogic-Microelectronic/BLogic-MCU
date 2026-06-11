/* ============================================================
 * uart_baud_sweep.c - EK-2 cok-baud kaniti (tek kosu, 3 faz)
 *
 * Sartname EK-2: UART baud = clk / UART_CPB; programlanabilir baud
 * 1 Mbps'i desteklemeli ve en az iki farkli baud hizi desteklenmeli.
 *
 * Faz plani (50 MHz sistem saati, prescale = CPB>>3):
 *   Faz 0: CPB=434  -> presc 54  -> 50e6/432  = 115740 baud (~115200, +0.47%)
 *   Faz 1: CPB=50   -> presc 6   -> 50e6/48   = 1041667 baud (~1 Mbps, +4.17%)
 *   Faz 2: CPB=5208 -> presc 651 -> 50e6/5208 = 9600.6  baud (~9600, +0.006%)
 *
 * Her fazda "BAUD-OK\n" gonderilir. Testbench (sim_main.cpp +SWEEP=...)
 * her fazi o fazin GERCEK hedef hizinda kurulan alici ile dogrular;
 * yani 1 Mbps fazinda alici CPB=50 (tam 1 MHz'e en yakin) orneklerken
 * DUT 48-clk bitler gonderir -> birlikte calisabilirlik kaniti.
 *
 * uart_putc TX_DONE poll'ladigi icin string bittiginde stop biti
 * tamamen hatta cikmistir; CPB'yi yeniden programlamak guvenlidir.
 * ============================================================ */
#include "../drivers/blogic_mcu.h"

#ifndef SWEEP_CPB0
#define SWEEP_CPB0 434      /* 115200 baud @ 50 MHz */
#endif
#ifndef SWEEP_CPB1
#define SWEEP_CPB1 50       /* ~1 Mbps   @ 50 MHz */
#endif
#ifndef SWEEP_CPB2
#define SWEEP_CPB2 5208     /* 9600 baud @ 50 MHz */
#endif

/* Fazlar arasinda hat bos kalsin diye kisa bekleme (alici IDLE'a doner) */
static void idle_gap(void)
{
    for (volatile int i = 0; i < 500; ++i) {
        __asm__ volatile("nop");
    }
}

static void run_phase(unsigned int cpb)
{
    UART0->CPB = cpb;
    uart_puts(UART0, "BAUD-OK\n");
    idle_gap();
}

int main(void)
{
    run_phase(SWEEP_CPB0);   /* Faz 0: 115200  */
    run_phase(SWEEP_CPB1);   /* Faz 1: ~1 Mbps */
    run_phase(SWEEP_CPB2);   /* Faz 2: 9600    */

    /* Simulasyonun kapanmamasi icin sonsuz dongu */
    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
