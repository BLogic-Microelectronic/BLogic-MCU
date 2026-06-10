// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VQSPI_MODES_TB__SYMS_H_
#define VERILATED_VQSPI_MODES_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vqspi_modes_tb.h"

// INCLUDE MODULE CLASSES
#include "Vqspi_modes_tb___024root.h"
#include "Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vqspi_modes_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vqspi_modes_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vqspi_modes_tb___024root       TOP;
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus;
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus;
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus;
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus;
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus;
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus;
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus;

    // CONSTRUCTORS
    Vqspi_modes_tb__Syms(VerilatedContext* contextp, const char* namep, Vqspi_modes_tb* modelp);
    ~Vqspi_modes_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
