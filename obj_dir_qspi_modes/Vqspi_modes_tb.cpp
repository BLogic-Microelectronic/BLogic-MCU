// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vqspi_modes_tb__pch.h"

//============================================================
// Constructors

Vqspi_modes_tb::Vqspi_modes_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vqspi_modes_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__data_sram_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__data_sram_bus}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__cpu_to_ai_sram_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__cpu_to_ai_sram_bus}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus}
    , __PVT__qspi_modes_tb__DOT__dut__DOT__periph_bus{vlSymsp->TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__periph_bus}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vqspi_modes_tb::Vqspi_modes_tb(const char* _vcname__)
    : Vqspi_modes_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vqspi_modes_tb::~Vqspi_modes_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vqspi_modes_tb___024root___eval_debug_assertions(Vqspi_modes_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vqspi_modes_tb___024root___eval_static(Vqspi_modes_tb___024root* vlSelf);
void Vqspi_modes_tb___024root___eval_initial(Vqspi_modes_tb___024root* vlSelf);
void Vqspi_modes_tb___024root___eval_settle(Vqspi_modes_tb___024root* vlSelf);
void Vqspi_modes_tb___024root___eval(Vqspi_modes_tb___024root* vlSelf);

void Vqspi_modes_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vqspi_modes_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vqspi_modes_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vqspi_modes_tb___024root___eval_static(&(vlSymsp->TOP));
        Vqspi_modes_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vqspi_modes_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vqspi_modes_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vqspi_modes_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vqspi_modes_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vqspi_modes_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vqspi_modes_tb___024root___eval_final(Vqspi_modes_tb___024root* vlSelf);

VL_ATTR_COLD void Vqspi_modes_tb::final() {
    contextp()->executingFinal(true);
    Vqspi_modes_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vqspi_modes_tb::hierName() const { return vlSymsp->name(); }
const char* Vqspi_modes_tb::modelName() const { return "Vqspi_modes_tb"; }
unsigned Vqspi_modes_tb::threads() const { return 1; }
void Vqspi_modes_tb::prepareClone() const { contextp()->prepareClone(); }
void Vqspi_modes_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
