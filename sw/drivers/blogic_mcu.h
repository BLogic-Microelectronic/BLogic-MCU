/*
 * BLogic MCU - Çevre Birimi Tanımları (Register Map)
 * ===================================================
 * Yalın Metal (Bare-Metal) uyumlu, harici kütüphane bağımlılığı yoktur.
 */

#ifndef BLOGIC_MCU_H
#define BLOGIC_MCU_H

/* RISC-V 32-bit Mimari İçin Saf Yalın Metal Veri Tipleri */
typedef unsigned int       uint32_t;
typedef unsigned short     uint16_t;
typedef unsigned char      uint8_t;
typedef signed int         int32_t;
typedef signed short       int16_t;
typedef signed char        int8_t;

/* --- Çevre Birimi Taban Adresleri (Adres Haritanızla Birebir Uyumlu) --- */
#define GPIO_BASE       0x40000000U
#define TIMER_BASE      0x40010000U
#define UART0_BASE      0x40020000U   /* Genel kullanım UART */
#define UART1_BASE      0x40030000U   /* YZ veri akışı (stream) UART */
#define I2C_BASE        0x40040000U
#define QSPI_BASE       0x40050000U
#define AI_ACC_BASE     0x40060000U   /* YZ Hızlandırıcı CSR */

/* ============================================================
 * GPIO Yazmaçları (0x4000_0000)
 * ============================================================ */
typedef struct {
    volatile uint32_t IDR;    /* 0x00 - Giriş veri yazmacı (RO) */
    volatile uint32_t ODR;    /* 0x04 - Çıkış veri yazmacı (RW) */
} GPIO_TypeDef;

#define GPIO    ((GPIO_TypeDef *) GPIO_BASE)

/* ============================================================
 * Timer Yazmaçları (0x4001_0000)
 * ============================================================ */
typedef struct {
    volatile uint32_t PRE;    /* 0x00 - Prescaler (RW) */
    volatile uint32_t ARE;    /* 0x04 - Auto-reload değeri (RW) */
    volatile uint32_t CLR;    /* 0x08 - Clear (RW) */
    volatile uint32_t ENA;    /* 0x0C - Enable (RW) */
    volatile uint32_t MOD;    /* 0x10 - Mode (RW) */
    volatile uint32_t CNT;    /* 0x14 - Counter değeri (RO) */
    volatile uint32_t EVN;    /* 0x18 - Event sayacı (RO) */
    volatile uint32_t EVC;    /* 0x1C - Event clear (RW) */
} TIMER_TypeDef;

#define TIMER   ((TIMER_TypeDef *) TIMER_BASE)

/* ============================================================
 * UART Yazmaçları (0x4002_0000 & 0x4003_0000)
 * ============================================================ */
typedef struct {
    volatile uint32_t CPB;    /* 0x00 - Clock-per-bit (RW) */
    volatile uint32_t STP;    /* 0x04 - Stop bit (RW) */
    volatile uint32_t RDR;    /* 0x08 - Alınan veri (RO) */
    volatile uint32_t TDR;    /* 0x0C - Gönderilecek veri (RW) */
    volatile uint32_t CFG;    /* 0x10 - Konfigürasyon (RW) */
} UART_TypeDef;

#define UART0   ((UART_TypeDef *) UART0_BASE)
#define UART1   ((UART_TypeDef *) UART1_BASE)

/* UART CFG bit maskeleri */
#define UART_CFG_TX_START    (1U << 0)
#define UART_CFG_RX_READY    (1U << 1)
#define UART_CFG_TX_DONE     (1U << 2)

/* ============================================================
 * I2C Master Yazmaçları (0x4004_0000)
 * ============================================================ */
typedef struct {
    volatile uint32_t NBY;    /* 0x00 - Bayt sayısı (RW) */
    volatile uint32_t ADR;    /* 0x04 - Slave adresi (RW) */
    volatile uint32_t RDR;    /* 0x08 - Okunan veri (RO) */
    volatile uint32_t TDR;    /* 0x0C - Yazılacak veri (RW) */
    volatile uint32_t CFG;    /* 0x10 - Konfigürasyon (RW) */
} I2C_TypeDef;

#define I2C     ((I2C_TypeDef *) I2C_BASE)

/* ============================================================
 * QSPI Master Yazmaçları (0x4005_0000)
 * ============================================================ */
typedef struct {
    volatile uint32_t CCR;    /* 0x00 - Communication config (RW) */
    volatile uint32_t ADR;    /* 0x04 - Flash adres (RW) */
    volatile uint32_t DR;     /* 0x08 - Data register (RW) */
    volatile uint32_t STA;    /* 0x0C - Status (RO) */
    volatile uint32_t FCR;    /* 0x10 - FIFO control (RW) */
} QSPI_TypeDef;

#define QSPI    ((QSPI_TypeDef *) QSPI_BASE)

/* ============================================================
 * YZ Hızlandırıcı CSR (0x4006_0000)
 * ============================================================ */
typedef struct {
    volatile uint32_t CTRL;       /* 0x00 - Kontrol yazmacı (RW) */
    volatile uint32_t STATUS;     /* 0x04 - Durum yazmacı (RO) */
    volatile uint32_t DATA_ADDR;  /* 0x08 - Giriş veri adresi (RW) */
    volatile uint32_t OUT_ADDR;   /* 0x0C - Çıkış veri adresi (RW) */
} AI_ACC_TypeDef;

#define AI_ACC  ((AI_ACC_TypeDef *) AI_ACC_BASE)

/* UART'tan bir byte gönder (Donanım el sıkışmalı polling modu) */
static inline void uart_putc(UART_TypeDef *uart, char c)
{
    uart->TDR = (uint32_t)c;                 /* Veriyi TDR'a yükle */
    uart->CFG = UART_CFG_TX_START;           /* Gönderimi başlat (Edge oluştur) */
    while (!(uart->CFG & UART_CFG_TX_DONE)); /* Donanım bitirene kadar bekle */
    uart->CFG = 0x00;                        /* KRİTİK: Sonraki edge için temizle */
}

/* UART'tan string gönder */
static inline void uart_puts(UART_TypeDef *uart, const char *s)
{
    while (*s) {
        uart_putc(uart, *s++);
    }
}

#endif /* BLOGIC_MCU_H */
