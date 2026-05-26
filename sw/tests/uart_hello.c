/*
 * BLogic MCU - UART Hello World Test
 *
 * Bu test, Berk'in uart_axil.sv modülüne doğrudan
 * pointer erişimiyle "HELLO" stringini gönderir.
 *
 * Berk'in mevcut UART register haritası:
 *   0x4000_0000 + 0x00 = TX_DATA (yazma) / RX_DATA (okuma)
 *   0x4000_0000 + 0x04 = STATUS  (bit0: tx_busy, bit1: rx_ready)
 *   0x4000_0000 + 0x08 = PRESCALE (baud rate bölücü)
 *
 * NOT: Bu register haritası şartnameyle uyuşmuyor,
 * ileride Berk tarafından şartnameye uygun hale getirilecek.
 * Şu an amacımız sadece sistemin boot edip UART'a
 * karakter basabildiğini görmek.
 */

/* Berk'in uart_axil.sv'sindeki register offset'lerine göre */
#define UART_BASE    0x40000000U
#define UART_TXDATA  (*(volatile unsigned int *)(UART_BASE + 0x00))
#define UART_STATUS  (*(volatile unsigned int *)(UART_BASE + 0x04))

/*
 * Bir karakter gönder.
 * TX meşgulken bekle, sonra byte'ı yaz.
 */
void uart_putc(char c)
{
    /* STATUS register bit 0 = tx_busy.
     * Meşgulken döngüde bekle (polling). */
    while (UART_STATUS & 0x01)
        ;

    /* TX_DATA register'a byte yaz.
     * uart_axil.sv bu yazma işlemini görünce
     * otomatik olarak UART TX hattından gönderir. */
    UART_TXDATA = (unsigned int)c;
}

/*
 * Null-terminated string gönder.
 */
void uart_puts(const char *s)
{
    while (*s)
        uart_putc(*s++);
}

int main(void)
{
    /* UART'tan HELLO yaz */
    uart_puts("HELLO\r\n");

    /* Sonsuz döngüde kal */
    while (1)
        ;

    return 0;
}
