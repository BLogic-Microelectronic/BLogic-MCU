/* ============================================
 * Ostim BLogic Mikroelektronik
 * blogic_mcu.h  -  cevre birimi register tanimlari
 * ============================================ */

#ifndef BLOGIC_MCU_H
#define BLOGIC_MCU_H

/* yalin metal veri tipleri */
typedef unsigned int       uint32_t;
typedef unsigned short     uint16_t;
typedef unsigned char      uint8_t;
typedef signed int         int32_t;
typedef signed short       int16_t;
typedef signed char        int8_t;

/* cevre birimi taban adresleri */
#define UART0_BASE      0x40000000U   /* genel UART */
#define GPIO_BASE       0x40000100U   /* GPIO */
#define TIMER_BASE      0x40000200U   /* Timer */
#define UART1_BASE      0x40000300U   /* stream UART */
#define I2C_BASE        0x40000400U   /* I2C */
#define QSPI_BASE       0x40000500U   /* QSPI master */
#define AI_ACC_BASE     0x40000600U   /* YZ hizlandirici CSR */

/* GPIO yazmaclari */
typedef struct {
    volatile uint32_t IDR;    /* 0x00 - giris veri (RO) */
    volatile uint32_t ODR;    /* 0x04 - cikis veri (RW) */
} GPIO_TypeDef;

#define GPIO    ((GPIO_TypeDef *) GPIO_BASE)

/* Timer yazmaclari */
typedef struct {
    volatile uint32_t PRE;    /* 0x00 - prescaler (RW) */
    volatile uint32_t ARE;    /* 0x04 - auto-reload (RW) */
    volatile uint32_t CLR;    /* 0x08 - clear (RW) */
    volatile uint32_t ENA;    /* 0x0C - enable (RW) */
    volatile uint32_t MOD;    /* 0x10 - mode (RW) */
    volatile uint32_t CNT;    /* 0x14 - counter (RO) */
    volatile uint32_t EVN;    /* 0x18 - event sayaci (RO) */
    volatile uint32_t EVC;    /* 0x1C - event clear (RW) */
} TIMER_TypeDef;

#define TIMER   ((TIMER_TypeDef *) TIMER_BASE)

/* UART yazmaclari */
typedef struct {
    volatile uint32_t CPB;    /* 0x00 - clock-per-bit (RW) */
    volatile uint32_t STP;    /* 0x04 - stop bit (RW) */
    volatile uint32_t RDR;    /* 0x08 - alinan veri (RO) */
    volatile uint32_t TDR;    /* 0x0C - gonderilecek veri (RW) */
    volatile uint32_t CFG;    /* 0x10 - konfigurasyon (RW) */
} UART_TypeDef;

#define UART0   ((UART_TypeDef *) UART0_BASE)
#define UART1   ((UART_TypeDef *) UART1_BASE)

/* UART CFG bitleri */
#define UART_CFG_TX_START    (1U << 0)
#define UART_CFG_RX_READY    (1U << 1)
#define UART_CFG_TX_DONE     (1U << 2)

/* I2C master yazmaclari */
typedef struct {
    volatile uint32_t NBY;    /* 0x00 - bayt sayisi (RW) */
    volatile uint32_t ADR;    /* 0x04 - slave adresi (RW) */
    volatile uint32_t RDR;    /* 0x08 - okunan veri (RO) */
    volatile uint32_t TDR;    /* 0x0C - yazilacak veri (RW) */
    volatile uint32_t CFG;    /* 0x10 - konfigurasyon (RW) */
} I2C_TypeDef;

#define I2C     ((I2C_TypeDef *) I2C_BASE)

/* QSPI master yazmaclari */
typedef struct {
    volatile uint32_t CCR;    /* 0x00 - haberlesme config (RW) */
    volatile uint32_t ADR;    /* 0x04 - flash adres (RW) */
    volatile uint32_t DR;     /* 0x08 - data (RW) */
    volatile uint32_t STA;    /* 0x0C - status (RO) */
    volatile uint32_t FCR;    /* 0x10 - FIFO control (RW) */
} QSPI_TypeDef;

#define QSPI    ((QSPI_TypeDef *) QSPI_BASE)

/* YZ hizlandirici CSR */
typedef struct {
    volatile uint32_t CTRL;       /* 0x00 - kontrol (RW) */
    volatile uint32_t STATUS;     /* 0x04 - durum (RO) */
    volatile uint32_t DATA_ADDR;  /* 0x08 - giris veri adresi (RW) */
    volatile uint32_t OUT_ADDR;   /* 0x0C - cikis veri adresi (RW) */
} AI_ACC_TypeDef;

#define AI_ACC  ((AI_ACC_TypeDef *) AI_ACC_BASE)

/* UART'tan bir byte gonder (polling) */
static inline void uart_putc(UART_TypeDef *uart, char c)
{
    uart->TDR = (uint32_t)c;
    uart->CFG = UART_CFG_TX_START;           /* gonderimi baslat */
    while (!(uart->CFG & UART_CFG_TX_DONE));
    uart->CFG = 0x00;                        /* sonraki edge icin temizle */
}

/* UART'tan string gonder */
static inline void uart_puts(UART_TypeDef *uart, const char *s)
{
    while (*s) {
        uart_putc(uart, *s++);
    }
}


/* UART'tan bir byte al (polling).
   DUZELTME (13 Agu): RDR okumak RX bayragini DUSURMUYORDU (uart_axil.sv:197
   - bayrak yalniz CFG bit1=0 yazilinca duser); art arda okumalar ayni bayti
   donduruyordu. ai_uart_load_test.c bunu kesfedip yerel rx_byte ile cozmus,
   surucude ayni kanitli desen: okuma sonrasi CFG=0. */
static inline char uart_getc(UART_TypeDef *uart)
{
    while (!(uart->CFG & UART_CFG_RX_READY)); /* veri gelene kadar bekle */
    char c = (char)(uart->RDR & 0xFF);
    uart->CFG = 0;                            /* rx_done temizle - sart */
    return c;
}

#endif /* BLOGIC_MCU_H */
