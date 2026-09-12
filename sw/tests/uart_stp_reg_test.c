// ============================================
// Ostim BLogic Mikroelektronik
// uart_stp_reg_test.c  -  UART stop-bit uzatma + register okuma testi
// STP=+1 bit (10 ve 11 kodlari), STP=+0.5 bit yollari ve CPB/STP/RDR/TDR readback'leri
// ============================================
#include "../drivers/blogic_mcu.h"

// son byte'in hattan akmasini bekle (434 cpb x ~13 bit ~ 5.7k cevrim)
static void tx_drain(void) {
    for (volatile uint32_t i = 0U; i < 20000U; i++) { }
}

int main(void) {
    UART0->CPB = 434;
    uint32_t ok = 1U;

    uart_puts(UART0, "\n[UART-STP] stop-bit uzatma testi\n");
    tx_drain();

    // Faz 1: +1 stop bit (STP[1]=1)
    UART0->STP = 2U;
    // tx_pending yolu: DONE beklerken her turda TDR yaz - en az biri
    // uzatma penceresine (stp_hold) denk gelir, byte tamponlanip
    // uzatma sonunda tx_pending_fire ile kendiliginden gonderilir
    UART0->TDR = (uint32_t)'S';
    UART0->CFG = UART_CFG_TX_START;
    while (!(UART0->CFG & UART_CFG_TX_DONE)) { UART0->TDR = (uint32_t)'P'; }
    UART0->CFG = 0U;
    while (!(UART0->CFG & UART_CFG_TX_DONE)) { }   // tamponlanan 'P' bitsin
    UART0->CFG = 0U;
    tx_drain();
    uart_puts(UART0, "[UART-STP] faz1: STP=2 (+1 bit)\n");
    tx_drain();

    // Faz 2: +0.5 stop bit (STP[1]=0, STP[0]=1)
    UART0->STP = 1U;
    uart_puts(UART0, "[UART-STP] faz2: STP=1 (+0.5 bit)\n");
    tx_drain();

    // readback kollari
    if (UART0->STP != 1U)   { ok = 0U; }
    if (UART0->CPB != 434U) { ok = 0U; }
    (void)UART0->RDR;   // RO okuma kolu
    (void)UART0->TDR;   // son yazilan byte okunur

    // Faz 3: STP=3 ("11"). Sartname EK-2: "1X" = 2 stop bit, yani 11 kodu
    // da gecerli ve 10 ile ayni +1 bit uzatmayi uretmeli (RTL yalniz STP[1]'e
    // bakar). Bu faz 11 kodunun gonderimde kullanildigini SoC seviyesinde
    // kanitlar; blok seviyesinde sure olcumu verif/tb/uart_stp_tb.sv'de.
    UART0->STP = 3U;
    uart_puts(UART0, "[UART-STP] faz3: STP=3 (1X, +1 bit)\n");
    tx_drain();
    if (UART0->STP != 3U)   { ok = 0U; }

    // varsayilan moda don, sonucu bas
    UART0->STP = 0U;
    tx_drain();
    if (UART0->STP != 0U) { ok = 0U; }

    if (ok != 0U) {
        uart_puts(UART0, "[UART-STP] PASS\n");
        uart_puts(UART0, "Hello World from BLogic MCU!\n");  // golden
    } else {
        uart_puts(UART0, "[UART-STP] FAIL: readback\n");  // golden yok -> FAIL
    }
    while (1) { __asm__ volatile("nop"); }
    return 0;
}
