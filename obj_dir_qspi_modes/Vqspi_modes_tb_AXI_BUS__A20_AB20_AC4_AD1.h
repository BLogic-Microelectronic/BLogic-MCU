// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vqspi_modes_tb.h for the primary calling header

#ifndef VERILATED_VQSPI_MODES_TB_AXI_BUS__A20_AB20_AC4_AD1_H_
#define VERILATED_VQSPI_MODES_TB_AXI_BUS__A20_AB20_AC4_AD1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vqspi_modes_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ aw_valid;
    CData/*0:0*/ aw_ready;
    CData/*3:0*/ w_strb;
    CData/*0:0*/ w_valid;
    CData/*0:0*/ w_ready;
    CData/*0:0*/ b_valid;
    CData/*0:0*/ b_ready;
    CData/*0:0*/ ar_valid;
    CData/*0:0*/ ar_ready;
    CData/*0:0*/ r_valid;
    CData/*0:0*/ r_ready;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_54;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    CData/*0:0*/ __Vdly__r_valid;
    CData/*0:0*/ __Vdly__b_valid;
    IData/*31:0*/ aw_addr;
    IData/*31:0*/ w_data;
    IData/*31:0*/ ar_addr;
    IData/*31:0*/ r_data;

    // INTERNAL VARIABLES
    Vqspi_modes_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1();
    ~Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1();
    void ctor(Vqspi_modes_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
