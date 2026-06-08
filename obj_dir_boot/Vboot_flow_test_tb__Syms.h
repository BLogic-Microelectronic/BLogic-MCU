// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBOOT_FLOW_TEST_TB__SYMS_H_
#define VERILATED_VBOOT_FLOW_TEST_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vboot_flow_test_tb.h"

// INCLUDE MODULE CLASSES
#include "Vboot_flow_test_tb___024root.h"
#include "Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vboot_flow_test_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vboot_flow_test_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vboot_flow_test_tb___024root   TOP;
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus;
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus;
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus;
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus;
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus;
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus;
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1 TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus;

    // CONSTRUCTORS
    Vboot_flow_test_tb__Syms(VerilatedContext* contextp, const char* namep, Vboot_flow_test_tb* modelp);
    ~Vboot_flow_test_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
