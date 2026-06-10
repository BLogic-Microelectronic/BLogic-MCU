// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vi2c_system_tb.h for the primary calling header

#ifndef VERILATED_VI2C_SYSTEM_TB_AXI_BUS__A20_AB20_AC4_AD1_H_
#define VERILATED_VI2C_SYSTEM_TB_AXI_BUS__A20_AB20_AC4_AD1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vi2c_system_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1 final {
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_54;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_56;
    CData/*0:0*/ __Vdly__r_valid;
    CData/*0:0*/ __Vdly__b_valid;
    IData/*31:0*/ aw_addr;
    IData/*31:0*/ w_data;
    IData/*31:0*/ ar_addr;
    IData/*31:0*/ r_data;

    // INTERNAL VARIABLES
    Vi2c_system_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1();
    ~Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1();
    void ctor(Vi2c_system_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
