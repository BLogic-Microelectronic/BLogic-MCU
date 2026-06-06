// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vai_accel_tb.h for the primary calling header

#include "Vai_accel_tb__pch.h"

VL_ATTR_COLD void Vai_accel_tb_ai_accel_tb___eval_static__TOP__ai_accel_tb(Vai_accel_tb_ai_accel_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_static__TOP__ai_accel_tb\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    vlSelfRef.__PVT__rst_n = 0U;
    vlSelfRef.__PVT__unnamedblk1__DOT__idx = 0U;
    vlSelfRef.__PVT__total_errors = 0U;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__unnamedblk6__DOT__scen[__Vi0].clear();
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__e = 0U;
}

VL_ATTR_COLD void Vai_accel_tb_ai_accel_tb___ctor_var_reset(Vai_accel_tb_ai_accel_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___ctor_var_reset\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__ai_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12645960080899251856ull);
    }
    vlSelf->__PVT__m_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3169234031117663542ull);
    vlSelf->__PVT__m_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6959745953305777653ull);
    vlSelf->__PVT__m_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4259156306466528033ull);
    vlSelf->__PVT__m_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15494961946000700504ull);
    vlSelf->__PVT__m_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14788020737313657040ull);
    vlSelf->__PVT__m_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1728470165562692237ull);
    vlSelf->__PVT__m_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8973761176877109757ull);
    vlSelf->__PVT__m_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 866843429093315018ull);
    vlSelf->__PVT__m_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2374049049873106714ull);
    vlSelf->__PVT__m_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14018080948827659885ull);
    vlSelf->__PVT__m_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11734703036927835001ull);
    vlSelf->__PVT__m_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14308343192490993725ull);
    vlSelf->__PVT__m_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3102679248430181142ull);
    vlSelf->__PVT__m_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1313307773326899870ull);
    vlSelf->__PVT__s_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 779103011958781805ull);
    vlSelf->__PVT__s_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15943857874525107354ull);
    vlSelf->__PVT__s_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4918823101085808447ull);
    vlSelf->__PVT__s_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13325040402057955508ull);
    vlSelf->__PVT__s_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14002152698677192039ull);
    vlSelf->__PVT__s_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13515512478695746316ull);
    vlSelf->__PVT__s_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15281852200509557954ull);
    vlSelf->__PVT__s_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 679853055183660306ull);
    vlSelf->__PVT__s_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6950598773701058237ull);
    vlSelf->__PVT__s_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6951755687480165749ull);
    vlSelf->__PVT__s_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9121568763004205844ull);
    vlSelf->__PVT__s_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2301979449509909042ull);
    vlSelf->__PVT__s_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6837359908538963129ull);
    vlSelf->__PVT__s_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18293703372854712141ull);
    vlSelf->__PVT__slv = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3562645042662777577ull);
    vlSelf->__PVT__saved_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13742427841773886408ull);
    vlSelf->__PVT__saved_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10460066688952119378ull);
    vlSelf->dut__DOT____Vlvbound_h0b69a956__0 = 0;
    vlSelf->dut__DOT____Vlvbound_h7a32ea8c__0 = 0;
    vlSelf->__PVT__dut__DOT__csr_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11642127444664623077ull);
    vlSelf->__PVT__dut__DOT__csr_clear_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13345322674640678104ull);
    vlSelf->__PVT__dut__DOT__csr_data_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5101274435152432924ull);
    vlSelf->__PVT__dut__DOT__csr_out_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4615264127533384480ull);
    vlSelf->__PVT__dut__DOT__status_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11670730311599202896ull);
    vlSelf->__PVT__dut__DOT__status_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3043410858724062785ull);
    vlSelf->__PVT__dut__DOT__status_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17151745298167073061ull);
    for (int __Vi0 = 0; __Vi0 < 490; ++__Vi0) {
        vlSelf->__PVT__dut__DOT__input_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18426252757548449511ull);
    }
    for (int __Vi0 = 0; __Vi0 < 160; ++__Vi0) {
        vlSelf->__PVT__dut__DOT__conv_w_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15616538176571922359ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__dut__DOT__conv_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7590534433815674694ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->__PVT__dut__DOT__conv_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11762793207661213912ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dut__DOT__fc_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17221323924195640407ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__dut__DOT__fc_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5429700375719209249ull);
    }
    vlSelf->__PVT__dut__DOT__mac_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7065567881702038559ull);
    vlSelf->__PVT__dut__DOT__mac_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10539649653439530115ull);
    vlSelf->__PVT__dut__DOT__mac_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13144707005459581911ull);
    vlSelf->__PVT__dut__DOT__mac_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11115382744776069466ull);
    vlSelf->__PVT__dut__DOT__mac_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1971027109233095706ull);
    vlSelf->__PVT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3152477200018357151ull);
    vlSelf->__PVT__dut__DOT__load_idx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15870995434760870420ull);
    vlSelf->__PVT__dut__DOT__f_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3881047408766712203ull);
    vlSelf->__PVT__dut__DOT__r_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3557997359754238180ull);
    vlSelf->__PVT__dut__DOT__c_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11410881295342326385ull);
    vlSelf->__PVT__dut__DOT__kh_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3247718861306960939ull);
    vlSelf->__PVT__dut__DOT__kw_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7738421865082010908ull);
    vlSelf->__PVT__dut__DOT__out_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1542735440207000308ull);
    vlSelf->__PVT__dut__DOT__in_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4707670064952841542ull);
    vlSelf->__PVT__dut__DOT__fc_w_row_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14497840607225370246ull);
    vlSelf->__PVT__dut__DOT__mem_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9156328718533809288ull);
    vlSelf->__PVT__dut__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6703465325049412153ull);
    vlSelf->__PVT__dut__DOT__mem_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5169191370530451054ull);
    vlSelf->__PVT__dut__DOT__mem_wstrb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16709742242161536962ull);
    vlSelf->__PVT__dut__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7937022791651595452ull);
    vlSelf->__PVT__dut__DOT__mem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18415992983852000594ull);
    vlSelf->__PVT__dut__DOT__mem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8124620390273022620ull);
    vlSelf->__PVT__dut__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13273929849598155938ull);
    vlSelf->__PVT__dut__DOT__ir = 0;
    vlSelf->__PVT__dut__DOT__ic = 0;
    vlSelf->__PVT__dut__DOT__input_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3967518653903214042ull);
    vlSelf->__PVT__dut__DOT__weight_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17451443813485325480ull);
    vlSelf->__PVT__dut__DOT__conv_out_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3369539156169108324ull);
    vlSelf->__PVT__dut__DOT__fc_w_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15325200152633326189ull);
    vlSelf->__PVT__dut__DOT__result_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12352517534704128106ull);
    vlSelf->__PVT__dut__DOT__best_idx = 0;
    vlSelf->__PVT__dut__DOT__best_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2518778108273473861ull);
    vlSelf->__PVT__dut__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12316589069598809459ull);
    vlSelf->__PVT__dut__DOT__wr_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4475411724306758576ull);
    vlSelf->__Vtask_csr_write__14__addr = 0;
    vlSelf->__Vtask_csr_write__14__data = 0;
    vlSelf->__Vtask_csr_write__15__addr = 0;
    vlSelf->__Vtask_csr_write__15__data = 0;
    vlSelf->__Vtask_csr_write__16__addr = 0;
    vlSelf->__Vtask_csr_write__16__data = 0;
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->__Vtask_verify_conv_out__21__golden_conv[__Vi0] = 0;
    }
    vlSelf->__Vtask_csr_write__23__addr = 0;
    vlSelf->__Vtask_csr_write__23__data = 0;
    vlSelf->__VdlyVal__s_awaddr__v0 = 0;
    vlSelf->__VdlySet__s_awaddr__v0 = 0;
    vlSelf->__VdlySet__s_awvalid__v0 = 0;
    vlSelf->__VdlySet__s_awvalid__v1 = 0;
    vlSelf->__VdlyVal__s_wdata__v0 = 0;
    vlSelf->__VdlySet__s_wdata__v0 = 0;
    vlSelf->__VdlySet__s_wvalid__v0 = 0;
    vlSelf->__VdlySet__s_wvalid__v1 = 0;
    vlSelf->__VdlySet__s_bready__v0 = 0;
    vlSelf->__VdlySet__s_bready__v1 = 0;
    vlSelf->__VdlyVal__s_awaddr__v1 = 0;
    vlSelf->__VdlySet__s_awaddr__v1 = 0;
    vlSelf->__VdlySet__s_awvalid__v2 = 0;
    vlSelf->__VdlySet__s_awvalid__v3 = 0;
    vlSelf->__VdlyVal__s_wdata__v1 = 0;
    vlSelf->__VdlySet__s_wdata__v1 = 0;
    vlSelf->__VdlySet__s_wvalid__v2 = 0;
    vlSelf->__VdlySet__s_wvalid__v3 = 0;
    vlSelf->__VdlySet__s_bready__v2 = 0;
    vlSelf->__VdlySet__s_bready__v3 = 0;
    vlSelf->__VdlyVal__s_awaddr__v2 = 0;
    vlSelf->__VdlySet__s_awaddr__v2 = 0;
    vlSelf->__VdlySet__s_awvalid__v4 = 0;
    vlSelf->__VdlySet__s_awvalid__v5 = 0;
    vlSelf->__VdlyVal__s_wdata__v2 = 0;
    vlSelf->__VdlySet__s_wdata__v2 = 0;
    vlSelf->__VdlySet__s_wvalid__v4 = 0;
    vlSelf->__VdlySet__s_wvalid__v5 = 0;
    vlSelf->__VdlySet__s_bready__v4 = 0;
    vlSelf->__VdlySet__s_bready__v5 = 0;
    vlSelf->__VdlyVal__s_araddr__v0 = 0;
    vlSelf->__VdlySet__s_araddr__v0 = 0;
    vlSelf->__VdlySet__s_arvalid__v0 = 0;
    vlSelf->__VdlySet__s_rready__v0 = 0;
    vlSelf->__VdlySet__s_arvalid__v1 = 0;
    vlSelf->__VdlySet__s_rready__v1 = 0;
    vlSelf->__VdlyVal__s_awaddr__v3 = 0;
    vlSelf->__VdlySet__s_awaddr__v3 = 0;
    vlSelf->__VdlySet__s_awvalid__v6 = 0;
    vlSelf->__VdlySet__s_awvalid__v7 = 0;
    vlSelf->__VdlyVal__s_wdata__v3 = 0;
    vlSelf->__VdlySet__s_wdata__v3 = 0;
    vlSelf->__VdlySet__s_wvalid__v6 = 0;
    vlSelf->__VdlySet__s_wvalid__v7 = 0;
    vlSelf->__VdlySet__s_bready__v6 = 0;
    vlSelf->__VdlySet__s_bready__v7 = 0;
}
