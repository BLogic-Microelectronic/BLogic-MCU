// ============================================
// Ostim BLogic Mikroelektronik
// qspi.h  -  QSPI flash okuma surucusu
// ============================================
#ifndef QSPI_H
#define QSPI_H

#include "../drivers/blogic_mcu.h"

#define QSPI_STA_BUSY      (1U << 1)

static inline void qspi_wait_done(void) {
    while (QSPI->STA & QSPI_STA_BUSY);
}

static inline uint8_t qspi_get_flash_byte(uint32_t addr) {
    // Adres ayarla
    QSPI->ADR = addr & 0x00FFFFFFU;
    
    // 0x03 read, x1 mod, 1 byte
    uint32_t ccr_val = (0x03U) | (1U << 8) | (0U << 10) | (0U << 12) | (0U << 16);
    QSPI->CCR = ccr_val; 
    
    qspi_wait_done();
    
    return (uint8_t)(QSPI->DR & 0xFFU);
}

#endif
