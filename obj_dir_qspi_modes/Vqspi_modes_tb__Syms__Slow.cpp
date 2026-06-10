// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vqspi_modes_tb__pch.h"

Vqspi_modes_tb__Syms::Vqspi_modes_tb__Syms(VerilatedContext* contextp, const char* namep, Vqspi_modes_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(3667);
    // Setup sub module instances
    TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus.ctor(this, "qspi_modes_tb.dut.ai_sram_bus");
    TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus.ctor(this, "qspi_modes_tb.dut.boot_rom_bus");
    TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ctor(this, "qspi_modes_tb.dut.cpu_data_bus");
    TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ctor(this, "qspi_modes_tb.dut.cpu_instr_bus");
    TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus.ctor(this, "qspi_modes_tb.dut.data_sram_bus");
    TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus.ctor(this, "qspi_modes_tb.dut.instr_sram_bus");
    TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.ctor(this, "qspi_modes_tb.dut.periph_bus");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus = &TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus;
    TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus = &TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus;
    TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus = &TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus;
    TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus = &TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus;
    TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__data_sram_bus = &TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus;
    TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus = &TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus;
    TOP.__PVT__qspi_modes_tb__DOT__dut__DOT__periph_bus = &TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus.__Vconfigure(true);
    TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus.__Vconfigure(false);
    TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.__Vconfigure(false);
    TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.__Vconfigure(false);
    TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus.__Vconfigure(false);
    TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus.__Vconfigure(false);
    TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.__Vconfigure(false);
    // Setup scopes
}

Vqspi_modes_tb__Syms::~Vqspi_modes_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.dtor();
    TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus.dtor();
    TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus.dtor();
    TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.dtor();
    TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.dtor();
    TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus.dtor();
    TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus.dtor();
}
