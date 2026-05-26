/*
 * BLogic MCU - Çevre Birimi Tanımları (Register Map)
 * ===================================================
 * Bu dosya şartnamenin EK-2'sindeki yazmaç tanımlarını
 * C makroları olarak içerir. Tüm driver ve test kodları
 * bu dosyayı include ederek çevre birimlerine erişir.
 *
 * Kullanım örneği:
 *   #include "blogic_mcu.h"
 *   UART0->TDR = 'A';              // 'A' karakterini gönder
 *   UART0->CFG = UART_CFG_TX_START; // Gönderimi başlat
 */

#ifndef BLOGIC_MCU_H
#define BLOGIC_MCU_H

#include <stdint.h>

/* ============================================================
 * Bellek Haritası - Taban Adresleri
 * ============================================================
 * 0x0000_0000 - 0x0000_1FFF : Instruction SRAM  (8 KB)
 * 0x0001_0000 - 0x0001_1FFF : Data SRAM         (8 KB)
 * 0x0002_0000 - 0x0002_03FF : Boot ROM           (1 KB)
 * 0x0003_0000 - 0x0003_77FF : AI SRAM           (30 KB)
 * 0x4000_0000 - 0x4006_0FFF : Çevre Birimleri (AXI4-Lite)
 * ============================================================ */

/* --- Çevre Birimi Taban Adresleri --- */
#define GPIO_BASE       0x40000000U
#define TIMER_BASE      0x40010000U
#define UART0_BASE      0x40020000U   /* Genel kullanım UART */
#define UART1_BASE      0x40030000U   /* YZ veri akışı (stream) UART */
#define I2C_BASE        0x40040000U
#define QSPI_BASE       0x40050000U
#define AI_ACC_BASE     0x40060000U   /* YZ Hızlandırıcı CSR */

/* ============================================================
 * GPIO Yazmaçları (Şartname EK-2)
 * 16 giriş + 16 çıkış = 32 pin
 * ============================================================ */
typedef struct {
    volatile uint32_t IDR;    /* 0x00 - Giriş veri yazmacı (RO)
                                 [15:0] = 16-bit giriş değeri
                                 [31:16] = her zaman 0 */
    volatile uint32_t ODR;    /* 0x04 - Çıkış veri yazmacı (RW)
                                 [15:0] = 16-bit çıkış değeri
                                 [31:16] = etkisiz */
} GPIO_TypeDef;

#define GPIO    ((GPIO_TypeDef *) GPIO_BASE)

/* ============================================================
 * Timer Yazmaçları (Şartname EK-2)
 * 32-bit sayaç, prescaler ile bölünmüş saat
 * ============================================================ */
typedef struct {
    volatile uint32_t PRE;    /* 0x00 - Prescaler (RW)
                                 Saat frekansı (PRE+1)'e bölünür.
                                 0 → her cycle, 1 → her 2 cycle */
    volatile uint32_t ARE;    /* 0x04 - Auto-reload değeri (RW)
                                 CNT bu değere ulaşınca 0'a döner */
    volatile uint32_t CLR;    /* 0x08 - Clear (RW)
                                 [0] = 1 yazınca CNT sıfırlanır */
    volatile uint32_t ENA;    /* 0x0C - Enable (RW)
                                 [0] = 1 ise sayaç çalışır */
    volatile uint32_t MOD;    /* 0x10 - Mode (RW)
                                 [0] = 1 yukarı, 0 aşağı sayar */
    volatile uint32_t CNT;    /* 0x14 - Counter değeri (RO) */
    volatile uint32_t EVN;    /* 0x18 - Event sayacı (RO)
                                 CNT her ARE'ye ulaşışta 1 artar */
    volatile uint32_t EVC;    /* 0x1C - Event clear (RW)
                                 [0] = 1 yazınca EVN sıfırlanır */
} TIMER_TypeDef;

#define TIMER   ((TIMER_TypeDef *) TIMER_BASE)

/* ============================================================
 * UART Yazmaçları (Şartname EK-2)
 * UART_0: Genel haberleşme
 * UART_1: YZ hızlandırıcı veri akışı (stream)
 * Programlanabilir baud hızı, 1 Mbps'e kadar desteklemeli
 * ============================================================ */
typedef struct {
    volatile uint32_t CPB;    /* 0x00 - Clock-per-bit (RW)
                                 Baud rate = sys_clk / CPB
                                 Ör: 48MHz'de 9600bps → CPB=5000 */
    volatile uint32_t STP;    /* 0x04 - Stop bit (RW)
                                 [1:0]: 00=1bit, 01=1.5bit, 1x=2bit */
    volatile uint32_t RDR;    /* 0x08 - Alınan veri (RO)
                                 [7:0] = alınan byte */
    volatile uint32_t TDR;    /* 0x0C - Gönderilecek veri (RW)
                                 [7:0] = gönderilecek byte */
    volatile uint32_t CFG;    /* 0x10 - Konfigürasyon (RW)
                                 [0] = TX başlat (1→gönder, HW 0'a çeker)
                                 [1] = RX hazır (HW 1 yapar, SW 0'a çekmeli)
                                 [2] = TX bitti (HW 1 yapar, SW 0'a çekmeli) */
} UART_TypeDef;

#define UART0   ((UART_TypeDef *) UART0_BASE)
#define UART1   ((UART_TypeDef *) UART1_BASE)

/* UART CFG bit maskeleri */
#define UART_CFG_TX_START    (1U << 0)
#define UART_CFG_RX_READY    (1U << 1)
#define UART_CFG_TX_DONE     (1U << 2)

/* ============================================================
 * I2C Master Yazmaçları (Şartname EK-2)
 * SCL sabit 400 kHz, 7-bit adres modu
 * ============================================================ */
typedef struct {
    volatile uint32_t NBY;    /* 0x00 - Bayt sayısı (RW), 1-4 arası */
    volatile uint32_t ADR;    /* 0x04 - Slave adresi (RW), [6:0] */
    volatile uint32_t RDR;    /* 0x08 - Okunan veri (RO) */
    volatile uint32_t TDR;    /* 0x0C - Yazılacak veri (RW) */
    volatile uint32_t CFG;    /* 0x10 - Konfigürasyon (RW)
                                 [0] = TX enable
                                 [1] = TX completed (HW→1, SW→0)
                                 [2] = RX enable
                                 [3] = RX completed (HW→1, SW→0) */
} I2C_TypeDef;

#define I2C     ((I2C_TypeDef *) I2C_BASE)

/* ============================================================
 * QSPI Master Yazmaçları (Şartname EK-2)
 * x1/x2/x4 veri genişliği, SPI mod 0, SDR
 * 64x32-bit TX/RX FIFO, 256 byte sayfa okuma/yazma
 * ============================================================ */
typedef struct {
    volatile uint32_t CCR;    /* 0x00 - Communication config (RW)
                                 [7:0]   = Instruction (komut kodu)
                                 [9:8]   = Veri modu (00=yok,01=x1,10=x2,11=x4)
                                 [10]    = 0=oku, 1=yaz
                                 [15:11] = Dummy cycle sayısı
                                 [23:16] = Veri boyutu (değer+1 byte)
                                 [30:25] = Prescaler (SCLK bölücü)
                                 [31]    = Clear status */
    volatile uint32_t ADR;    /* 0x04 - Flash adres (RW), [23:0] */
    volatile uint32_t DR;     /* 0x08 - Data register (RW)
                                 Arkasında 64x32 TX ve RX FIFO var */
    volatile uint32_t STA;    /* 0x0C - Status (RO)
                                 [0] = Transaction bitti
                                 [1] = Meşgul
                                 [4] = RX FIFO dolu
                                 [5] = RX FIFO boş
                                 [6] = TX FIFO dolu
                                 [7] = TX FIFO boş
                                 [11:8] = FIFO hata kodu */
    volatile uint32_t FCR;    /* 0x10 - FIFO control (RW)
                                 [0] = RX FIFO flush
                                 [1] = TX FIFO flush */
} QSPI_TypeDef;

#define QSPI    ((QSPI_TypeDef *) QSPI_BASE)

/* ============================================================
 * YZ Hızlandırıcı CSR (Yarışmacı tanımlı)
 * ============================================================ */
typedef struct {
    volatile uint32_t CTRL;       /* 0x00 - Kontrol yazmacı (RW)
                                     [0] = Başlat */
    volatile uint32_t STATUS;     /* 0x04 - Durum yazmacı (RO)
                                     [0] = Meşgul, [1] = Bitti */
    volatile uint32_t DATA_ADDR;  /* 0x08 - Giriş veri adresi (RW)
                                     AI SRAM içindeki pointer */
    volatile uint32_t OUT_ADDR;   /* 0x0C - Çıkış veri adresi (RW) */
} AI_ACC_TypeDef;

#define AI_ACC  ((AI_ACC_TypeDef *) AI_ACC_BASE)

/* ============================================================
 * Yardımcı Fonksiyonlar (inline)
 * ============================================================ */

/* UART'tan bir byte gönder (polling modunda) */
static inline void uart_putc(UART_TypeDef *uart, char c)
{
    uart->TDR = (uint32_t)c;           /* Veriyi yükle */
    uart->CFG = UART_CFG_TX_START;     /* Gönderimi başlat */
    while (!(uart->CFG & UART_CFG_TX_DONE)); /* Bitene kadar bekle */
    uart->CFG &= ~UART_CFG_TX_DONE;   /* Bayrağı temizle */
}

/* UART'tan string gönder */
static inline void uart_puts(UART_TypeDef *uart, const char *s)
{
    while (*s) {
        uart_putc(uart, *s++);
    }
}

/* UART'tan bir byte oku (polling, bloklayıcı) */
static inline char uart_getc(UART_TypeDef *uart)
{
    while (!(uart->CFG & UART_CFG_RX_READY)); /* Veri gelene kadar bekle */
    char c = (char)(uart->RDR & 0xFF);
    uart->CFG &= ~UART_CFG_RX_READY;  /* Bayrağı temizle */
    return c;
}

#endif /* BLOGIC_MCU_H */
