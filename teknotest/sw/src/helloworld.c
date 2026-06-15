// ============================================
// Ostim BLogic Mikroelektronik
// helloworld.c  -  UART hello world testi
// ============================================
#include "user_defines.h"

// UART register yapisi
typedef struct{
    unsigned int CPB;
    unsigned int STP;
    unsigned int RDR;
    unsigned int TDR;
    unsigned int CFG;
}uart_regspace;

int main(){
    volatile uart_regspace *uart = ((volatile uart_regspace *) UART_BASE_ADDR);

    unsigned char msg[16];

    msg[0]  = 'H';
    msg[1]  = 'e';
    msg[2]  = 'l';
    msg[3]  = 'l';
    msg[4]  = 'o';
    msg[5]  = ' ';
    msg[6]  = 'W';
    msg[7]  = 'o';
    msg[8]  = 'r';
    msg[9]  = 'l';
    msg[10] = 'd';
    msg[11] = '!';
    msg[12] = '\0';

    // UART ayarlari
    uart->CPB = 434;
    uart->STP = 0;
    uart->CFG = 0;
    
    // 'R' gonder
    uart->TDR = 'R';
    uart->CFG |= (0x1UL << 0); // gonderimi baslat

    while (!(uart->CFG & (0x1UL << 2))){} // gonderim bitti mi
    uart->CFG &= ~(0x1UL << 2);

    // 'A' bekle
    while (!(uart->CFG & (0x1UL << 1))){}
    uart->CFG &= ~(0x1UL << 1);

    if (uart->RDR == 'A') { // beklenen 'A' geldiyse mesaji bas
        for (int i = 0; i < 16; i++){
            uart->TDR = msg[i];
            uart->CFG |= (0x1UL << 0);

            while (!(uart->CFG & (0x1UL << 2))){}
            uart->CFG &= ~(0x1UL << 2);

            if (msg[i] == '\0') // string sonu
                break;
        }
    }
    else return 1; // test basarisiz

    return 0;
}