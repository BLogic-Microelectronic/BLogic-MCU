// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VI2C_SYSTEM_TB__SYMS_H_
#define VERILATED_VI2C_SYSTEM_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vi2c_system_tb.h"

// INCLUDE MODULE CLASSES
#include "Vi2c_system_tb___024root.h"
#include "Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vi2c_system_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vi2c_system_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vi2c_system_tb___024root       TOP;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__i2c_system_tb__DOT__dut__DOT__periph_bus;

    // CONSTRUCTORS
    Vi2c_system_tb__Syms(VerilatedContext* contextp, const char* namep, Vi2c_system_tb* modelp);
    ~Vi2c_system_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
