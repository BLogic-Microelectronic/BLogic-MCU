// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_AXI_BUS__A20_AB20_AC4_AD1_H_
#define VERILATED_VSOC_TOP_AXI_BUS__A20_AB20_AC4_AD1_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1 final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ aw_id;
    CData/*7:0*/ aw_len;
    CData/*2:0*/ aw_size;
    CData/*1:0*/ aw_burst;
    CData/*0:0*/ aw_lock;
    CData/*3:0*/ aw_cache;
    CData/*2:0*/ aw_prot;
    CData/*3:0*/ aw_qos;
    CData/*3:0*/ aw_region;
    CData/*5:0*/ aw_atop;
    CData/*0:0*/ aw_user;
    CData/*0:0*/ aw_valid;
    CData/*0:0*/ aw_ready;
    CData/*3:0*/ w_strb;
    CData/*0:0*/ w_last;
    CData/*0:0*/ w_user;
    CData/*0:0*/ w_valid;
    CData/*0:0*/ w_ready;
    CData/*3:0*/ b_id;
    CData/*1:0*/ b_resp;
    CData/*0:0*/ b_user;
    CData/*0:0*/ b_valid;
    CData/*0:0*/ b_ready;
    CData/*3:0*/ ar_id;
    CData/*7:0*/ ar_len;
    CData/*2:0*/ ar_size;
    CData/*1:0*/ ar_burst;
    CData/*0:0*/ ar_lock;
    CData/*3:0*/ ar_cache;
    CData/*2:0*/ ar_prot;
    CData/*3:0*/ ar_qos;
    CData/*3:0*/ ar_region;
    CData/*0:0*/ ar_user;
    CData/*0:0*/ ar_valid;
    CData/*0:0*/ ar_ready;
    CData/*3:0*/ r_id;
    CData/*1:0*/ r_resp;
    CData/*0:0*/ r_last;
    CData/*0:0*/ r_user;
    CData/*0:0*/ r_valid;
    CData/*0:0*/ r_ready;
    CData/*0:0*/ __Vdly__b_valid;
    CData/*0:0*/ __Vdly__r_valid;
    IData/*31:0*/ aw_addr;
    IData/*31:0*/ w_data;
    IData/*31:0*/ ar_addr;
    IData/*31:0*/ r_data;

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ AXI_ADDR_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ AXI_DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ AXI_ID_WIDTH = 4U;
    static constexpr IData/*31:0*/ AXI_USER_WIDTH = 1U;
    static constexpr IData/*31:0*/ AXI_STRB_WIDTH = 4U;

    // CONSTRUCTORS
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1();
    ~Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1();
    void ctor(Vsoc_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
