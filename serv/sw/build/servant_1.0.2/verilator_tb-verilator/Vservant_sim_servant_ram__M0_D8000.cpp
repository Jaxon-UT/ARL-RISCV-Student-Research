// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_servant_ram__M0_D8000.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vservant_sim_servant_ram__M0_D8000) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vservant_sim_servant_ram__M0_D8000::__Vconfigure(Vservant_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vservant_sim_servant_ram__M0_D8000::~Vservant_sim_servant_ram__M0_D8000() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vservant_sim_servant_ram__M0_D8000::_sequent__TOP__servant_sim__dut__ram__1(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vservant_sim_servant_ram__M0_D8000::_sequent__TOP__servant_sim__dut__ram__1\n"); );
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdlyvlsb__mem__v0,4,0);
    VL_SIG8(__Vdlyvval__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__mem__v0,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v1,4,0);
    VL_SIG8(__Vdlyvval__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__mem__v1,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v2,4,0);
    VL_SIG8(__Vdlyvval__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__mem__v2,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v3,4,0);
    VL_SIG8(__Vdlyvval__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__mem__v3,0,0);
    VL_SIG16(__Vdlyvdim0__mem__v0,12,0);
    VL_SIG16(__Vdlyvdim0__mem__v1,12,0);
    VL_SIG16(__Vdlyvdim0__mem__v2,12,0);
    VL_SIG16(__Vdlyvdim0__mem__v3,12,0);
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    // ALWAYS at ../src/servant_1.0.2/servant/servant_ram.v:25
    vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
	= vlSymsp->TOP__servant_sim__dut__ram.mem[(0x1fffU 
						   & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
						      >> 2U))];
    // ALWAYS at ../src/servant_1.0.2/servant/servant_ram.v:22
    vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_cyc) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack)));
    // ALWAYS at ../src/servant_1.0.2/servant/servant_ram.v:25
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
	__Vdlyvval__mem__v0 = (0xffU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat);
	__Vdlyvset__mem__v0 = 1U;
	__Vdlyvlsb__mem__v0 = 0U;
	__Vdlyvdim0__mem__v0 = (0x1fffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
					   >> 2U));
    }
    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
	__Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
					>> 8U));
	__Vdlyvset__mem__v1 = 1U;
	__Vdlyvlsb__mem__v1 = 8U;
	__Vdlyvdim0__mem__v1 = (0x1fffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
					   >> 2U));
    }
    if ((4U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
	__Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
					>> 0x10U));
	__Vdlyvset__mem__v2 = 1U;
	__Vdlyvlsb__mem__v2 = 0x10U;
	__Vdlyvdim0__mem__v2 = (0x1fffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
					   >> 2U));
    }
    if ((8U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
	__Vdlyvval__mem__v3 = (0xffU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
					>> 0x18U));
	__Vdlyvset__mem__v3 = 1U;
	__Vdlyvlsb__mem__v3 = 0x18U;
	__Vdlyvdim0__mem__v3 = (0x1fffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
					   >> 2U));
    }
    // ALWAYSPOST at ../src/servant_1.0.2/servant/servant_ram.v:26
    if (__Vdlyvset__mem__v0) {
	vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v0] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v0))) 
		& vlSymsp->TOP__servant_sim__dut__ram.mem
		[__Vdlyvdim0__mem__v0]) | ((IData)(__Vdlyvval__mem__v0) 
					   << (IData)(__Vdlyvlsb__mem__v0)));
    }
    if (__Vdlyvset__mem__v1) {
	vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v1] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v1))) 
		& vlSymsp->TOP__servant_sim__dut__ram.mem
		[__Vdlyvdim0__mem__v1]) | ((IData)(__Vdlyvval__mem__v1) 
					   << (IData)(__Vdlyvlsb__mem__v1)));
    }
    if (__Vdlyvset__mem__v2) {
	vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v2] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v2))) 
		& vlSymsp->TOP__servant_sim__dut__ram.mem
		[__Vdlyvdim0__mem__v2]) | ((IData)(__Vdlyvval__mem__v2) 
					   << (IData)(__Vdlyvlsb__mem__v2)));
    }
    if (__Vdlyvset__mem__v3) {
	vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v3] 
	    = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v3))) 
		& vlSymsp->TOP__servant_sim__dut__ram.mem
		[__Vdlyvdim0__mem__v3]) | ((IData)(__Vdlyvval__mem__v3) 
					   << (IData)(__Vdlyvlsb__mem__v3)));
    }
}

VL_INLINE_OPT void Vservant_sim_servant_ram__M0_D8000::_sequent__TOP__servant_sim__dut__ram__2(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vservant_sim_servant_ram__M0_D8000::_sequent__TOP__servant_sim__dut__ram__2\n"); );
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut__ram.__PVT__we = 
	(VL_NEGATE_I((IData)(((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				>> 3U) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc))) 
			      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_cyc)))) 
	 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_sel));
}

void Vservant_sim_servant_ram__M0_D8000::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vservant_sim_servant_ram__M0_D8000::_ctor_var_reset\n"); );
    // Body
    __PVT__i_wb_clk = VL_RAND_RESET_I(1);
    __PVT__i_wb_adr = VL_RAND_RESET_I(13);
    __PVT__i_wb_dat = VL_RAND_RESET_I(32);
    __PVT__i_wb_sel = VL_RAND_RESET_I(4);
    __PVT__i_wb_we = VL_RAND_RESET_I(1);
    __PVT__i_wb_cyc = VL_RAND_RESET_I(1);
    __PVT__o_wb_rdt = VL_RAND_RESET_I(32);
    __PVT__o_wb_ack = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
	    mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
