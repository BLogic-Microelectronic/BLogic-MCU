// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vai_accel_tb.h for the primary calling header

#ifndef VERILATED_VAI_ACCEL_TB_AI_ACCEL_TB_H_
#define VERILATED_VAI_ACCEL_TB_AI_ACCEL_TB_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16;


class Vai_accel_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vai_accel_tb_ai_accel_tb final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__clk;
        CData/*0:0*/ __PVT__rst_n;
        CData/*0:0*/ __PVT__m_awvalid;
        CData/*0:0*/ __PVT__m_awready;
        CData/*0:0*/ __PVT__m_wvalid;
        CData/*0:0*/ __PVT__m_wready;
        CData/*0:0*/ __PVT__m_bvalid;
        CData/*0:0*/ __PVT__m_bready;
        CData/*0:0*/ __PVT__m_arvalid;
        CData/*0:0*/ __PVT__m_arready;
        CData/*0:0*/ __PVT__m_rvalid;
        CData/*0:0*/ __PVT__m_rready;
        CData/*0:0*/ __PVT__s_awvalid;
        CData/*0:0*/ __PVT__s_awready;
        CData/*0:0*/ __PVT__s_wvalid;
        CData/*0:0*/ __PVT__s_wready;
        CData/*0:0*/ __PVT__s_bvalid;
        CData/*0:0*/ __PVT__s_bready;
        CData/*0:0*/ __PVT__s_arvalid;
        CData/*0:0*/ __PVT__s_arready;
        CData/*0:0*/ __PVT__s_rvalid;
        CData/*0:0*/ __PVT__s_rready;
        CData/*2:0*/ __PVT__slv;
        CData/*7:0*/ dut__DOT____VlemCall_0__requant_no_relu;
        CData/*0:0*/ __PVT__dut__DOT__csr_start;
        CData/*0:0*/ __PVT__dut__DOT__csr_clear_done;
        CData/*0:0*/ __PVT__dut__DOT__status_busy;
        CData/*0:0*/ __PVT__dut__DOT__status_done;
        CData/*3:0*/ __PVT__dut__DOT__status_result;
        CData/*7:0*/ __PVT__dut__DOT__mac_a;
        CData/*7:0*/ __PVT__dut__DOT__mac_b;
        CData/*0:0*/ __PVT__dut__DOT__mac_clear;
        CData/*0:0*/ __PVT__dut__DOT__mac_en;
        CData/*4:0*/ __PVT__dut__DOT__state;
        CData/*2:0*/ __PVT__dut__DOT__f_idx;
        CData/*4:0*/ __PVT__dut__DOT__r_idx;
        CData/*4:0*/ __PVT__dut__DOT__c_idx;
        CData/*3:0*/ __PVT__dut__DOT__kh_idx;
        CData/*2:0*/ __PVT__dut__DOT__kw_idx;
        CData/*1:0*/ __PVT__dut__DOT__out_idx;
        CData/*2:0*/ __PVT__dut__DOT__mem_state;
        CData/*3:0*/ __PVT__dut__DOT__mem_wstrb_q;
        CData/*0:0*/ __PVT__dut__DOT__mem_read_req;
        CData/*0:0*/ __PVT__dut__DOT__mem_write_req;
        CData/*0:0*/ __PVT__dut__DOT__mem_done;
        CData/*7:0*/ __PVT__dut__DOT__input_pix;
        CData/*7:0*/ __PVT__dut__DOT__weight_pix;
        CData/*7:0*/ __PVT__dut__DOT__conv_out_pix;
        CData/*7:0*/ __PVT__dut__DOT__fc_w_pix;
        CData/*7:0*/ __PVT__dut__DOT__result_byte;
        CData/*7:0*/ __PVT__dut__DOT__best_val;
        CData/*0:0*/ __PVT__dut__DOT__aw_en;
        CData/*4:0*/ __PVT__dut__DOT__wr_addr_q;
        CData/*4:0*/ __Vtask_csr_write__14__addr;
        CData/*4:0*/ __Vtask_csr_write__15__addr;
        CData/*4:0*/ __Vtask_csr_write__16__addr;
        CData/*4:0*/ __Vtask_csr_write__23__addr;
        CData/*0:0*/ __VdlySet__s_awaddr__v0;
        CData/*0:0*/ __VdlySet__s_awvalid__v0;
        CData/*0:0*/ __VdlySet__s_awvalid__v1;
        CData/*0:0*/ __VdlySet__s_wdata__v0;
        CData/*0:0*/ __VdlySet__s_wvalid__v0;
        CData/*0:0*/ __VdlySet__s_wvalid__v1;
        CData/*0:0*/ __VdlySet__s_bready__v0;
    };
    struct {
        CData/*0:0*/ __VdlySet__s_bready__v1;
        CData/*0:0*/ __VdlySet__s_awaddr__v1;
        CData/*0:0*/ __VdlySet__s_awvalid__v2;
        CData/*0:0*/ __VdlySet__s_awvalid__v3;
        CData/*0:0*/ __VdlySet__s_wdata__v1;
        CData/*0:0*/ __VdlySet__s_wvalid__v2;
        CData/*0:0*/ __VdlySet__s_wvalid__v3;
        CData/*0:0*/ __VdlySet__s_bready__v2;
        CData/*0:0*/ __VdlySet__s_bready__v3;
        CData/*0:0*/ __VdlySet__s_awaddr__v2;
        CData/*0:0*/ __VdlySet__s_awvalid__v4;
        CData/*0:0*/ __VdlySet__s_awvalid__v5;
        CData/*0:0*/ __VdlySet__s_wdata__v2;
        CData/*0:0*/ __VdlySet__s_wvalid__v4;
        CData/*0:0*/ __VdlySet__s_wvalid__v5;
        CData/*0:0*/ __VdlySet__s_bready__v4;
        CData/*0:0*/ __VdlySet__s_bready__v5;
        CData/*0:0*/ __VdlySet__s_araddr__v0;
        CData/*0:0*/ __VdlySet__s_arvalid__v0;
        CData/*0:0*/ __VdlySet__s_rready__v0;
        CData/*0:0*/ __VdlySet__s_arvalid__v1;
        CData/*0:0*/ __VdlySet__s_rready__v1;
        CData/*0:0*/ __VdlySet__s_awaddr__v3;
        CData/*0:0*/ __VdlySet__s_awvalid__v6;
        CData/*0:0*/ __VdlySet__s_awvalid__v7;
        CData/*0:0*/ __VdlySet__s_wdata__v3;
        CData/*0:0*/ __VdlySet__s_wvalid__v6;
        CData/*0:0*/ __VdlySet__s_wvalid__v7;
        CData/*0:0*/ __VdlySet__s_bready__v6;
        CData/*0:0*/ __VdlySet__s_bready__v7;
        SData/*9:0*/ __PVT__dut__DOT__load_idx;
        SData/*11:0*/ __PVT__dut__DOT__in_idx;
        IData/*31:0*/ __VlemCall_0__word_idx;
        IData/*31:0*/ __PVT__m_awaddr;
        IData/*31:0*/ __PVT__m_wdata;
        IData/*31:0*/ __PVT__m_araddr;
        IData/*31:0*/ __PVT__m_rdata;
        IData/*31:0*/ __PVT__s_awaddr;
        IData/*31:0*/ __PVT__s_wdata;
        IData/*31:0*/ __PVT__s_araddr;
        IData/*31:0*/ __PVT__s_rdata;
        IData/*31:0*/ __PVT__saved_awaddr;
        IData/*31:0*/ __PVT__saved_araddr;
        IData/*31:0*/ __PVT__total_errors;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__idx;
        IData/*31:0*/ __PVT__unnamedblk6__DOT__e;
        IData/*31:0*/ dut__DOT____Vlvbound_h0b69a956__0;
        IData/*31:0*/ dut__DOT____Vlvbound_h7a32ea8c__0;
        IData/*31:0*/ __PVT__dut__DOT__csr_data_addr;
        IData/*31:0*/ __PVT__dut__DOT__csr_out_addr;
        IData/*31:0*/ __PVT__dut__DOT__mac_acc;
        IData/*31:0*/ __PVT__dut__DOT__fc_w_row_base;
        IData/*31:0*/ __PVT__dut__DOT__mem_addr;
        IData/*31:0*/ __PVT__dut__DOT__mem_wdata_q;
        IData/*31:0*/ __PVT__dut__DOT__mem_rdata;
        IData/*31:0*/ __PVT__dut__DOT__ir;
        IData/*31:0*/ __PVT__dut__DOT__ic;
        IData/*31:0*/ __PVT__dut__DOT__best_idx;
        IData/*31:0*/ __Vtask_csr_write__14__data;
        IData/*31:0*/ __Vtask_csr_write__15__data;
        IData/*31:0*/ __Vtask_csr_write__16__data;
        IData/*31:0*/ __Vtask_csr_write__23__data;
        IData/*31:0*/ __VdlyVal__s_awaddr__v0;
        IData/*31:0*/ __VdlyVal__s_wdata__v0;
    };
    struct {
        IData/*31:0*/ __VdlyVal__s_awaddr__v1;
        IData/*31:0*/ __VdlyVal__s_wdata__v1;
        IData/*31:0*/ __VdlyVal__s_awaddr__v2;
        IData/*31:0*/ __VdlyVal__s_wdata__v2;
        IData/*31:0*/ __VdlyVal__s_araddr__v0;
        IData/*31:0*/ __VdlyVal__s_awaddr__v3;
        IData/*31:0*/ __VdlyVal__s_wdata__v3;
        VlUnpacked<IData/*31:0*/, 8192> __PVT__ai_mem;
        VlUnpacked<IData/*31:0*/, 490> __PVT__dut__DOT__input_mem;
        VlUnpacked<IData/*31:0*/, 160> __PVT__dut__DOT__conv_w_mem;
        VlUnpacked<IData/*31:0*/, 8> __PVT__dut__DOT__conv_bias_mem;
        VlUnpacked<IData/*31:0*/, 1000> __PVT__dut__DOT__conv_out_mem;
        VlUnpacked<IData/*31:0*/, 4> __PVT__dut__DOT__fc_bias_mem;
        VlUnpacked<CData/*7:0*/, 4> __PVT__dut__DOT__fc_out_mem;
        VlUnpacked<IData/*31:0*/, 1000> __Vtask_verify_conv_out__21__golden_conv;
    };
    std::string __Vtask_run_scenario__10__scenario;
    std::string __Vtask_preload_input__12__scenario;
    std::string __Vfunc_read_expected_argmax__20__scenario;
    std::string __Vtask_verify_conv_out__21__scenario;
    VlUnpacked<std::string, 4> __PVT__unnamedblk6__DOT__scen;
    VlClassRef<Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16> __Vtask_run_scenario__10____VDynScope_run_scenario_16;

    // INTERNAL VARIABLES
    Vai_accel_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vai_accel_tb_ai_accel_tb();
    ~Vai_accel_tb_ai_accel_tb();
    void ctor(Vai_accel_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vai_accel_tb_ai_accel_tb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
