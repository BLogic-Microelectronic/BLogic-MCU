// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vboot_flow_test_tb__pch.h"

//============================================================
// Constructors

Vboot_flow_test_tb::Vboot_flow_test_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vboot_flow_test_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__cpu_to_ai_sram_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__cpu_to_ai_sram_bus}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus}
    , __PVT__boot_flow_test_tb__DOT__dut__DOT__periph_bus{vlSymsp->TOP.__PVT__boot_flow_test_tb__DOT__dut__DOT__periph_bus}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vboot_flow_test_tb::Vboot_flow_test_tb(const char* _vcname__)
    : Vboot_flow_test_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vboot_flow_test_tb::~Vboot_flow_test_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vboot_flow_test_tb___024root___eval_debug_assertions(Vboot_flow_test_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vboot_flow_test_tb___024root___eval_static(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb___024root___eval_initial(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb___024root___eval_settle(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb___024root___eval(Vboot_flow_test_tb___024root* vlSelf);

void Vboot_flow_test_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vboot_flow_test_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vboot_flow_test_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vboot_flow_test_tb___024root___eval_static(&(vlSymsp->TOP));
        Vboot_flow_test_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vboot_flow_test_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vboot_flow_test_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vboot_flow_test_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vboot_flow_test_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vboot_flow_test_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vboot_flow_test_tb___024root___eval_final(Vboot_flow_test_tb___024root* vlSelf);

VL_ATTR_COLD void Vboot_flow_test_tb::final() {
    contextp()->executingFinal(true);
    Vboot_flow_test_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vboot_flow_test_tb::hierName() const { return vlSymsp->name(); }
const char* Vboot_flow_test_tb::modelName() const { return "Vboot_flow_test_tb"; }
unsigned Vboot_flow_test_tb::threads() const { return 1; }
void Vboot_flow_test_tb::prepareClone() const { contextp()->prepareClone(); }
void Vboot_flow_test_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
