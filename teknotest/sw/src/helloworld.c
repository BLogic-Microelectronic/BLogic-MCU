#include "user_defines.h"

// UART Regspace definition
typedef struct{
    unsigned int CPB;
    unsigned int STP;
    unsigned int RDR;
    unsigned int TDR;
    unsigned int CFG;
}uart_regspace;

int main(){
    volatile uart_regspace *uart = ((volatile uart_regspace *) UART_BASE_ADDR);

    // Init message
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

    // Init UART
    uart->CPB = 434;
    uart->STP = 0;
    uart->CFG = 0;
    
    // Send char 'R'
    uart->TDR = 'R';
    uart->CFG |= (0x1UL << 0); // Enable data transmit

    while (!(uart->CFG & (0x1UL << 2))){} // Wait for transmit completed flag
    uart->CFG &= ~(0x1UL << 2);
    
    // Wait for char 'A'
    while (!(uart->CFG & (0x1UL << 1))){} // Wait for transmit completed flag
    uart->CFG &= ~(0x1UL << 1);
    
    if (uart->RDR == 'A') { // Print "Hello World!" if 'A' is received as expected
        for (int i = 0; i < 16; i++){
            // Send message
            uart->TDR = msg[i];
            uart->CFG |= (0x1UL << 0); // Enable data transmit

            while (!(uart->CFG & (0x1UL << 2))){} // Wait for transmit completed flag
            uart->CFG &= ~(0x1UL << 2);

            if (msg[i] == '\0') // Break at the end of string
                break;
        }
    }
    else return 1; // Test failed

    return 0;
}