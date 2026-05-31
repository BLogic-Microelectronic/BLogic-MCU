#include "../drivers/blogic_mcu.h"

// Standart kütüphane olmadığı için tam sayıyı ASCII metnine çeviren yardımcı fonksiyon
void uart_put_int(uint32_t num) {
    char buf[11];
    int i = 10;
    buf[i] = '\0';
    
    if (num == 0) {
        uart_puts(UART0, "0");
        return;
    }
    
    while (num > 0 && i > 0) {
        i--;
        buf[i] = (num % 10) + '0';
        num /= 10;
    }
    uart_puts(UART0, &buf[i]);
}

int main(void) {
    // UART0 başlatma (115200 Baud hızı ayarı)
    UART0->CPB = 54;
    
    // Test edilecek toplama işlemi verileri
    int sayi1 = 584;
    int sayi2 = 268;
    int toplam = sayi1 + sayi2;
    
    // Sonuçları UART üzerinden ekrana basma
    uart_puts(UART0, "[MCU] Toplama Islemi Baslatiliyor...\n");
    uart_puts(UART0, "Denklem: ");
    uart_put_int(sayi1);
    uart_puts(UART0, " + ");
    uart_put_int(sayi2);
    uart_puts(UART0, " = ");
    uart_put_int(toplam);
    uart_puts(UART0, "\n");
    
    // sim_main.cpp simülatörünün başarı algılaması ve kapanması için gerekli dize
    uart_puts(UART0, "Hello World from BLogic MCU!\n");

    while (1) {
        __asm__ volatile("nop");
    }
    return 0;
}
