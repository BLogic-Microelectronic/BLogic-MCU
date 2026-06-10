// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

// Parameter definitions for Vsoc_top_axi_pkg
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::BURST_FIXED;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::BURST_INCR;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::BURST_WRAP;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::RESP_OKAY;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::RESP_EXOKAY;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::RESP_SLVERR;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::RESP_DECERR;
constexpr CData/*3:0*/ Vsoc_top_axi_pkg::CACHE_BUFFERABLE;
constexpr CData/*3:0*/ Vsoc_top_axi_pkg::CACHE_MODIFIABLE;
constexpr CData/*3:0*/ Vsoc_top_axi_pkg::CACHE_RD_ALLOC;
constexpr CData/*3:0*/ Vsoc_top_axi_pkg::CACHE_WR_ALLOC;
constexpr CData/*5:0*/ Vsoc_top_axi_pkg::ATOP_ATOMICSWAP;
constexpr CData/*5:0*/ Vsoc_top_axi_pkg::ATOP_ATOMICCMP;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::ATOP_NONE;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::ATOP_ATOMICSTORE;
constexpr CData/*1:0*/ Vsoc_top_axi_pkg::ATOP_ATOMICLOAD;
constexpr CData/*0:0*/ Vsoc_top_axi_pkg::ATOP_LITTLE_END;
constexpr CData/*0:0*/ Vsoc_top_axi_pkg::ATOP_BIG_END;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_ADD;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_CLR;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_EOR;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_SET;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_SMAX;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_SMIN;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_UMAX;
constexpr CData/*2:0*/ Vsoc_top_axi_pkg::ATOP_UMIN;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::DemuxAw;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::DemuxW;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::DemuxB;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::DemuxAr;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::DemuxR;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::MuxAw;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::MuxW;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::MuxB;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::MuxAr;
constexpr SData/*9:0*/ Vsoc_top_axi_pkg::MuxR;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::BurstWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::RespWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::CacheWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::ProtWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::QosWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::RegionWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::LenWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::SizeWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::LockWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::AtopWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::NsaidWidth;
constexpr IData/*31:0*/ Vsoc_top_axi_pkg::ATOP_R_RESP;



Vsoc_top_axi_pkg::Vsoc_top_axi_pkg() = default;
Vsoc_top_axi_pkg::~Vsoc_top_axi_pkg() = default;

void Vsoc_top_axi_pkg::ctor(Vsoc_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vsoc_top_axi_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vsoc_top_axi_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
