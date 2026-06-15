// ============================================
// Ostim BLogic Mikroelektronik
// led_only.c  -  saf LED blink teshis testi
// ============================================
#include "../drivers/blogic_mcu.h"

int main(void) {
    while (1) {
        GPIO->ODR = 0x00FF;
        for (volatile int i = 0; i < 2000000; i++) { __asm__ volatile("nop"); }
        GPIO->ODR = 0x0000;
        for (volatile int i = 0; i < 2000000; i++) { __asm__ volatile("nop"); }
    }
    return 0;
}
