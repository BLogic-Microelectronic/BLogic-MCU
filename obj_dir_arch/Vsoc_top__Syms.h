// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOC_TOP__SYMS_H_
#define VERILATED_VSOC_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsoc_top.h"

// INCLUDE MODULE CLASSES
#include "Vsoc_top___024root.h"
#include "Vsoc_top_axi_pkg.h"
#include "Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1.h"
#include "Vsoc_top_fpnew_pkg.h"
#include "Vsoc_top_cv32e40p_apu_core_pkg.h"
#include "Vsoc_top_cv32e40p_fpu_pkg.h"
#include "Vsoc_top_cv32e40p_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vsoc_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsoc_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsoc_top___024root             TOP;
    Vsoc_top_axi_pkg               TOP__axi_pkg;
    Vsoc_top_cv32e40p_apu_core_pkg TOP__cv32e40p_apu_core_pkg;
    Vsoc_top_cv32e40p_fpu_pkg      TOP__cv32e40p_fpu_pkg;
    Vsoc_top_cv32e40p_pkg          TOP__cv32e40p_pkg;
    Vsoc_top_fpnew_pkg             TOP__fpnew_pkg;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__ai_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__boot_rom_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__cpu_data_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__cpu_instr_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__cpu_to_ai_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__data_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__instr_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 TOP__soc_top__DOT__periph_bus;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_axi_pkg;
    VerilatedScope* __Vscopep_cv32e40p_apu_core_pkg;
    VerilatedScope* __Vscopep_cv32e40p_fpu_pkg;
    VerilatedScope* __Vscopep_cv32e40p_pkg;
    VerilatedScope* __Vscopep_fpnew_pkg;
    VerilatedScope* __Vscopep_soc_top;
    VerilatedScope* __Vscopep_soc_top__ai_sram_bus;
    VerilatedScope* __Vscopep_soc_top__boot_rom_bus;
    VerilatedScope* __Vscopep_soc_top__cpu_data_bus;
    VerilatedScope* __Vscopep_soc_top__cpu_instr_bus;
    VerilatedScope* __Vscopep_soc_top__cpu_to_ai_sram_bus;
    VerilatedScope* __Vscopep_soc_top__data_sram_bus;
    VerilatedScope* __Vscopep_soc_top__i_ai_accel;
    VerilatedScope* __Vscopep_soc_top__i_ai_arb;
    VerilatedScope* __Vscopep_soc_top__i_ai_sram;
    VerilatedScope* __Vscopep_soc_top__i_ai_sram__unnamedblk1;
    VerilatedScope* __Vscopep_soc_top__i_axi_lite_bridge;
    VerilatedScope* __Vscopep_soc_top__i_boot_rom;
    VerilatedScope* __Vscopep_soc_top__i_boot_rom__unnamedblk1;
    VerilatedScope* __Vscopep_soc_top__i_cpu;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__cs_registers_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__cs_registers_i__gen_no_pulp_secure_write_logic;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__cs_registers_i__gen_trigger_regs;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__ex_stage_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__ex_stage_i__alu_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__ex_stage_i__alu_i__alu_div_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__ex_stage_i__alu_i__ff_one_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__ex_stage_i__alu_i__popcnt_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__ex_stage_i__mult_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__controller_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__controller_i__blk_decode_level1;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__decoder_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__decoder_i__instruction_decoder;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__immediate_a_mux;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__int_controller_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__jump_target_mux;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__id_stage_i__register_file_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__EXC_PC_MUX;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__aligner_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__compressed_decoder_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__prefetch_buffer_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__prefetch_buffer_i__fifo_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__prefetch_buffer_i__instruction_obi_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__prefetch_buffer_i__instruction_obi_i__gen_no_trans_stable;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__if_stage_i__prefetch_buffer_i__prefetch_controller_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__load_store_unit_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__load_store_unit_i__data_obi_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__sleep_unit_i;
    VerilatedScope* __Vscopep_soc_top__i_cpu__core_i__sleep_unit_i__core_clock_gate_i;
    VerilatedScope* __Vscopep_soc_top__i_crossbar;
    VerilatedScope* __Vscopep_soc_top__i_data_sram;
    VerilatedScope* __Vscopep_soc_top__i_data_sram__unnamedblk1;
    VerilatedScope* __Vscopep_soc_top__i_gpio;
    VerilatedScope* __Vscopep_soc_top__i_instr_sram;
    VerilatedScope* __Vscopep_soc_top__i_instr_sram__unnamedblk1;
    VerilatedScope* __Vscopep_soc_top__i_obi_axi_data;
    VerilatedScope* __Vscopep_soc_top__i_obi_axi_instr;
    VerilatedScope* __Vscopep_soc_top__i_periph_decoder;
    VerilatedScope* __Vscopep_soc_top__i_protocol_checkers;
    VerilatedScope* __Vscopep_soc_top__i_protocol_checkers__i_chk_gpio;
    VerilatedScope* __Vscopep_soc_top__i_protocol_checkers__i_chk_periph;
    VerilatedScope* __Vscopep_soc_top__i_protocol_checkers__i_chk_qspi;
    VerilatedScope* __Vscopep_soc_top__i_protocol_checkers__i_chk_timer;
    VerilatedScope* __Vscopep_soc_top__i_protocol_checkers__i_chk_uart;
    VerilatedScope* __Vscopep_soc_top__i_qspi;
    VerilatedScope* __Vscopep_soc_top__i_timer;
    VerilatedScope* __Vscopep_soc_top__i_uart_0;
    VerilatedScope* __Vscopep_soc_top__i_uart_0__i_uart_rx;
    VerilatedScope* __Vscopep_soc_top__i_uart_0__i_uart_tx;
    VerilatedScope* __Vscopep_soc_top__instr_sram_bus;
    VerilatedScope* __Vscopep_soc_top__periph_bus;

    // CONSTRUCTORS
    Vsoc_top__Syms(VerilatedContext* contextp, const char* namep, Vsoc_top* modelp);
    ~Vsoc_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
