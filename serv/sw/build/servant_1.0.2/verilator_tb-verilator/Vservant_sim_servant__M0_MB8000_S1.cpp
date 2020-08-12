// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_servant__M0_MB8000_S1.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vservant_sim_servant__M0_MB8000_S1) {
    VL_CELL(ram, Vservant_sim_servant_ram__M0_D8000);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vservant_sim_servant__M0_MB8000_S1::__Vconfigure(Vservant_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vservant_sim_servant__M0_MB8000_S1::~Vservant_sim_servant__M0_MB8000_S1() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vservant_sim_servant__M0_MB8000_S1::_sequent__TOP__servant_sim__dut__1(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__M0_MB8000_S1::_sequent__TOP__servant_sim__dut__1\n"); );
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__wb_dbus_ack,0,0);
    VL_SIG8(__Vdly__cpu__DOT__rf_ram_if__DOT__wcnt,4,0);
    VL_SIG8(__Vdly__cpu__DOT__rf_ram_if__DOT__wgo,0,0);
    VL_SIG8(__Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r,1,0);
    VL_SIG8(__Vdly__cpu__DOT__rf_ram_if__DOT__rcnt,4,0);
    VL_SIG8(__Vdly__cpu__DOT__rf_ram_if__DOT__rdata0,1,0);
    VL_SIG8(__Vdlyvval__cpu__DOT__rf_ram__DOT__memory__v0,1,0);
    VL_SIG8(__Vdlyvset__cpu__DOT__rf_ram__DOT__memory__v0,0,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending,0,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__cnt_done,0,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__cnt_en,0,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__rs1_addr,4,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm7,0,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm30_25,5,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm24_20,4,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm11_7,4,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt,5,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie,0,0);
    VL_SIG8(__Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0,3,0);
    VL_SIG16(__Vdlyvdim0__cpu__DOT__rf_ram__DOT__memory__v0,9,0);
    VL_SIG16(__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20,8,0);
    VL_SIG(__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data,31,0);
    VL_SIG(__Vdly__genblk1__DOT__timer__DOT__mtime,31,0);
    // Body
    __Vdly__genblk1__DOT__timer__DOT__mtime = vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtime;
    __Vdly__cpu__DOT__rf_ram_if__DOT__rcnt = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt;
    __Vdly__cpu__DOT__rf_ram_if__DOT__wgo = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wgo;
    __Vdly__cpu__DOT__rf_ram_if__DOT__wcnt = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt;
    __Vdly__wb_dbus_ack = vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack;
    __Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    __Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie;
    __Vdly__cpu__DOT__rf_ram_if__DOT__rdata0 = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0;
    __Vdly__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt;
    __Vdly__cpu__DOT__cpu__DOT__rs1_addr = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr;
    __Vdlyvset__cpu__DOT__rf_ram__DOT__memory__v0 = 0U;
    __Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0;
    vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat;
    __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm30_25 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25;
    __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm7 = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm7;
    __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20;
    __Vdly__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending;
    __Vdly__cpu__DOT__cpu__DOT__cnt_en = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en;
    __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm11_7 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7;
    __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm24_20 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20;
    __Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    __Vdly__cpu__DOT__cpu__DOT__cnt_done = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done;
    // ALWAYS at ../src/servant_1.0.2/servant/servant_mux.v:80
    if (VL_UNLIKELY(((((8U == (0xfU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
				       >> 0x1cU))) 
		       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc)) 
		      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack)) 
		     & (0U != vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__f)))) {
	VL_FWRITEF(vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__f,"%c",
		   8,(0xffU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat));
    } else {
	if (VL_UNLIKELY((((9U == (0xfU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
					  >> 0x1cU))) 
			  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc)) 
			 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack)))) {
	    VL_WRITEF("Test complete\n");
	    VL_FINISH_MT("../src/servant_1.0.2/servant/servant_mux.v",85,"");
	}
    }
    // ALWAYS at ../src/servant_1.0.2/servant/servant_timer.v:24
    __Vdly__genblk1__DOT__timer__DOT__mtime = ((IData)(1U) 
					       + vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtime);
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:140
    __Vdly__cpu__DOT__rf_ram_if__DOT__rcnt = (0x1fU 
					      & ((IData)(1U) 
						 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt)));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq) {
	__Vdly__cpu__DOT__rf_ram_if__DOT__rcnt = 0U;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs2_addr 
	    = (0x1fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
			>> 0x14U));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:82
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wgo) {
	__Vdly__cpu__DOT__rf_ram_if__DOT__wcnt = (0x1fU 
						  & ((IData)(1U) 
						     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt)));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wreq_r) {
	__Vdly__cpu__DOT__rf_ram_if__DOT__wgo = 1U;
    }
    if ((0x1fU == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt))) {
	__Vdly__cpu__DOT__rf_ram_if__DOT__wgo = 0U;
    }
    if (vlTOPp->wb_rst) {
	__Vdly__cpu__DOT__rf_ram_if__DOT__wcnt = 0U;
    }
    // ALWAYS at ../src/servant_1.0.2/servant/servant_mux.v:42
    __Vdly__wb_dbus_ack = 0U;
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
	 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack)))) {
	__Vdly__wb_dbus_ack = 1U;
    }
    if (vlTOPp->wb_rst) {
	__Vdly__wb_dbus_ack = 0U;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_mem_if.v:47
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_bufreg.v:26
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:82
    __Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r = ((2U 
						   & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
						        ? vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr
						        : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in)) 
						      << 1U)) 
						  | (1U 
						     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r) 
							>> 1U)));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_alu.v:89
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq_r 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq) 
		 | (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en))));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_alu.v:89
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__lt_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_ctrl.v:71
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_alu.v:89
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt_r 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_alu.v:89
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_ctrl.v:71
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_alu.v:89
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21 
	    = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 0x15U));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_csr.v:71
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mstatus_en) 
	 & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
	       >> 3U)))) {
	__Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret) {
	__Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mpie;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap_taken) {
	__Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie = 0U;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_csr.v:71
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap_taken) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__pending_irq;
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mcause_en) 
	 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en))) {
	if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) {
	    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31 
		= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in;
	}
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:140
    __Vdly__cpu__DOT__rf_ram_if__DOT__rdata0 = (1U 
						& ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
						   >> 1U));
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))) {
	__Vdly__cpu__DOT__rf_ram_if__DOT__rdata0 = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_shift.v:18
    __Vdly__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt 
	= (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt)));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init) {
	__Vdly__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped 
	= (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt) 
		  >> 5U) | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt_msb) 
			    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				  >> 2U)))));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_shift.v:18
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit 
	    = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
		& (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
	       & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
		  >> 2U));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_alu.v:89
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_shamt_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt 
	    = ((((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1)) 
		<< 4U) | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt) 
				  >> 1U)));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_csr.v:71
    if ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22)) 
	  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
	 & ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
	       >> 3U)))) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mie_mtie 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	__Vdly__cpu__DOT__cpu__DOT__rs1_addr = (0x1fU 
						& (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
						   >> 0xfU));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) {
	if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
		>> 2U))) {
	    __Vdly__cpu__DOT__cpu__DOT__rs1_addr = 
		(0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr) 
			 >> 1U));
	}
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_mem_if.v:60
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__genblk1__DOT__misalign 
	= (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
		  & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
		      >> 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
		 | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
		     >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			       >> 1U))));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:137
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1 
	    = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata) 
		     >> 1U));
    }
    // ALWAYS at ../src/servant_1.0.2/servant/servant_timer.v:24
    vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq 
	= (vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtime 
	   >= vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtimecmp);
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram.v:14
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wgo) 
	 & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt)) 
	     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
	    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r))))) {
	vlSymsp->TOP__servant_sim__dut.cpu__DOT__rf_ram__DOT____Vlvbound1 
	    = ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt))
	        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
	        : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0) 
		    << 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r)));
	if ((0x23fU >= (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__waddr))) {
	    __Vdlyvval__cpu__DOT__rf_ram__DOT__memory__v0 
		= vlSymsp->TOP__servant_sim__dut.cpu__DOT__rf_ram__DOT____Vlvbound1;
	    __Vdlyvset__cpu__DOT__rf_ram__DOT__memory__v0 = 1U;
	    __Vdlyvdim0__cpu__DOT__rf_ram__DOT__memory__v0 
		= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__waddr;
	}
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_csr.v:71
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap_taken) {
	__Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0 
	    = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__pending_irq)
	        ? 7U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__e_op)
			 ? (3U | (8U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)) 
					<< 3U))) : 
			((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)
			  ? (4U | (2U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					 >> 2U))) : 0U)));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mcause_en) 
	 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en))) {
	if ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))) {
	    __Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0 
		= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in) 
		    << 3U) | (7U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0) 
				    >> 1U)));
	}
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_mem_if.v:47
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) 
	 & (~ (1U & (((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
			     >> 1U)) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
		     >> 2U))))) {
	vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
	    = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
		<< 0x1fU) | (0x7fffffffU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
					    >> 1U)));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack) {
	vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
	    = ((0x80000000U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
	        ? vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtime
	        : ((0x40000000U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
		    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt)
		    : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_state.v:134
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync = 0U;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20 
	    = ((0x1feU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
			  >> 0xbU)) | (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
					     >> 0x14U)));
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm7 
	    = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 7U));
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm30_25 
	    = (0x3fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
			>> 0x19U));
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm24_20 
	    = (0x1fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
			>> 0x14U));
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm11_7 
	    = (0x1fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
			>> 7U));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) {
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20 
	    = ((0x100U & (((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
			    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit)
			    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20)) 
			  << 8U)) | (0xffU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20) 
					      >> 1U)));
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm30_25 
	    = ((0x20U & (((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2))
			   ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm7)
			   : ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2))
			       ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit)
			       : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20))) 
			 << 5U)) | (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25) 
					     >> 1U)));
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm24_20 
	    = ((0x10U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25) 
			 << 4U)) | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20) 
					    >> 1U)));
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm7 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit;
	__Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm11_7 
	    = ((0x10U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25) 
			 << 4U)) | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7) 
					    >> 1U)));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_bufreg.v:26
    if ((1U & (~ ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
		  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
		     | (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op))))))) {
	__Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data 
	    = (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm) 
		  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)))
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q)
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q)) 
		<< 0x1fU) | (0x7fffffffU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
					    >> 1U)));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_ctrl.v:71
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr 
	    = (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
		  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret))
		  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
		     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r))
		  : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump)
		      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
		      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4))) 
		<< 0x1fU) | (0x7fffffffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr 
					    >> 1U)));
    }
    if (vlTOPp->wb_rst) {
	vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt 
	= __Vdly__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0 
	= __Vdly__cpu__DOT__rf_ram_if__DOT__rdata0;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr 
	= __Vdly__cpu__DOT__cpu__DOT__rs1_addr;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wgo 
	= __Vdly__cpu__DOT__rf_ram_if__DOT__wgo;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r 
	= __Vdly__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt 
	= __Vdly__cpu__DOT__rf_ram_if__DOT__wcnt;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0 
	= __Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0;
    vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtime 
	= __Vdly__genblk1__DOT__timer__DOT__mtime;
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack 
	= __Vdly__wb_dbus_ack;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20 
	= __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm7 
	= __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm7;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25 
	= __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm30_25;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20 
	= __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm24_20;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7 
	= __Vdly__cpu__DOT__cpu__DOT__decode__DOT__imm11_7;
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:82
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wreq_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq) 
	   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_csr.v:71
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap_taken) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mpie 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_alu.v:89
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_shamt_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt_msb 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30 
	    = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 0x1eU));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22 
	    = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 0x16U));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26 
	    = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 0x1aU));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:140
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1 
	= (1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram.v:14
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata 
	= ((0x23fU >= (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__raddr))
	    ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram__DOT__memory
	   [vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__raddr]
	    : 0U);
    // ALWAYS at ../src/servant_1.0.2/servant/servant_timer.v:24
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
	  & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
	     >> 0x1fU)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			   >> 3U))) {
	vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtimecmp 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:79
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0;
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:82
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
	   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:82
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
	   | (((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		   >> 2U) | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				  >> 2U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					     >> 4U)) 
			     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
		 | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			 >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				       >> 3U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
		& (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr))) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
	      & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init))));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20 
	    = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 0x14U));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_bufreg.v:26
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
	 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init))) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb 
	    = ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
	       | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q));
    }
    if ((((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
	     >> 1U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init))) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb 
	    = ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
	       | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q) 
		  << 1U));
    }
    // ALWAYS at ../src/servant_1.0.2/servant/servant_gpio.v:9
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt 
	= vlSymsp->TOP__servant_sim__dut.__PVT__q;
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit 
	    = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 0x1fU));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_ctrl.v:71
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r = 1U;
    } else {
	if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc) 
	     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack))) {
	    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r = 0U;
	}
    }
    if (vlTOPp->wb_rst) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r = 1U;
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_state.v:90
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump 
	    = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init) 
	       & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		    >> 4U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				 >> 2U))) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					     | (((0U 
						  == 
						  (3U 
						   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						      >> 1U)))
						  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq)
						  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt)) 
						^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) {
	__Vdly__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init;
    }
    __Vdly__cpu__DOT__cpu__DOT__cnt_done = ((7U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
					    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
					       >> 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ready) 
	 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending)))) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init 
	    = (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__slt_op) 
		  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op)) 
		 | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__branch_op)) 
		| (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op)) 
	       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__pending_irq)));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init = 0U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ready) {
	__Vdly__cpu__DOT__cpu__DOT__cnt_en = 1U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) {
	__Vdly__cpu__DOT__cpu__DOT__cnt_en = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt 
	= (7U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
		 + (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
			  >> 3U))));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r 
	    = ((0xeU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
			<< 1U)) | (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
					 >> 3U)));
    }
    if (vlTOPp->wb_rst) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt = 0U;
	__Vdly__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending = 0U;
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump = 0U;
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r = 1U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie 
	= __Vdly__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt 
	= __Vdly__cpu__DOT__rf_ram_if__DOT__rcnt;
    // ALWAYSPOST at ../src/serv_1.0.2/rtl/serv_rf_ram.v:16
    if (__Vdlyvset__cpu__DOT__rf_ram__DOT__memory__v0) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram__DOT__memory[__Vdlyvdim0__cpu__DOT__rf_ram__DOT__memory__v0] 
	    = __Vdlyvval__cpu__DOT__rf_ram__DOT__memory__v0;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending 
	= __Vdly__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en 
	= __Vdly__cpu__DOT__cpu__DOT__cnt_en;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done 
	= __Vdly__cpu__DOT__cpu__DOT__cnt_done;
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:140
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r;
    if (vlTOPp->wb_rst) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1)
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata)
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1)));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr 
	    = (0x1fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
			>> 7U));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
	    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)))
	    ? 0U : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
		     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)))
		     ? 2U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26)
			      ? 3U : 1U)));
    // ALWAYS at ../src/servant_1.0.2/servant/servant_gpio.v:9
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
	  & (1U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
			  >> 0x1eU)))) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					  >> 3U))) {
	vlSymsp->TOP__servant_sim__dut.__PVT__q = (1U 
						   & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat);
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_state.v:134
    if (vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__pending_irq 
	    = vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__irq_sync;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_shamt_en 
	= (((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	    | ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2 
	= ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
	      >> 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0 
	= ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3 
	    = (7U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
		     >> 0xcU));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
	= __Vdly__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
	= (1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
	= (1U & ((vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
		 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_rf_ram_if.v:140
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq;
    if (vlTOPp->wb_rst) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q 
	= (1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data);
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_decode.v:194
    if (vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode 
	    = (0x1fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
			>> 2U));
    }
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_state.v:134
    if (vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__irq_sync = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq_r)) 
	 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq))) {
	vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__irq_sync = 1U;
    }
    vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d 
	= (1U & ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr)
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_sel 
	= ((8U & ((((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
		    << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					     << 2U))) 
		  | (0xfffffff8U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				     << 3U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
					       << 2U))))) 
	   | ((4U & (((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
		      << 2U) | (0xfffffffcU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					       << 1U)))) 
	      | ((2U & ((((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
			  << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
			| (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
				  >> 1U))) << 1U))) 
		 | (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid 
	= (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
		   >> 1U) | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
					  >> 1U)))) 
		 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
		    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
			  >> 2U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((0xeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((0xdU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | ((1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
	      << 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((0xbU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | ((1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			    >> 1U))) << 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | (0xfffffff8U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			      << 1U) & ((1U != (3U 
						& (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
					<< 3U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2 
	= ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2)) 
	   | ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
	      | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			      >> 1U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2 
	= ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2)) 
	   | (2U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		     >> 3U) & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
			       << 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret 
	= (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	      >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			>> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
	   & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en 
	= (1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		     >> 4U)) | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 1U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
	   & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	       >> 4U) & ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
			 | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__branch_op 
	= (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		  >> 4U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			       >> 2U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__e_op 
	= (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		    >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			      >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21))) 
		 & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm 
	= (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		      >> 4U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				 >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a 
	= ((((0U == (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
	     | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
	    | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			    >> 3U)))) & vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr);
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype 
	= (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		      >> 4U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				 >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op 
	= (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		      >> 4U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op 
	= ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	     >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		       >> 2U)) & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit)
		  : ((8U == (0xfU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))
		      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7)
		      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20))));
    // ALWAYS at ../src/serv_1.0.2/rtl/serv_csr.v:71
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq_r 
	= vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq;
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__e_op) 
	    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__pending_irq)) 
	   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm) 
	   & (1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__slt_op 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm) 
	   & (1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			   >> 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__genblk1__DOT__misalign) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mstatus_en 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mcause_en 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
	      | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
		  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22))) 
		 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c 
	= (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
		    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en)) 
		   + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
		       & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			     >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q 
	= (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
		   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en)) 
		  + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
		      & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			    >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
		 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype)
		  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
		     & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
			 >> 2U) | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))
		  : vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b 
	= ((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1)
	    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq) 
	    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie)) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mie_mtie));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__waddr 
	= ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt))
	      ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? 0x22U : (0x20U | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr)))
	      : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr))) 
	    << 4U) | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt) 
			      >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc 
	= ((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
	     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending)) 
	    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op)) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump) 
	    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
	       >> 1U)) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__raddr 
	= ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
	      ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? 0x21U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret)
			      ? 0x22U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en)
					  ? (0x20U 
					     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr))
					  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs2_addr))))
	      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr)) 
	    << 4U) | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
			      >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out 
	= (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mstatus_en) 
	      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
	     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus)) 
	    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en))) 
	   | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mcause_en) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
	      & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0)
		  : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
		     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
	= (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
	= ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
	     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
	    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy 
	= (1U & ((((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b))) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq 
	= ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
	   == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1 
	= (1U & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)) 
		 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq 
	= ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op) 
	       & ((0x1fU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt)) 
		  == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt))) 
	      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending)) 
	     | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op) 
		& (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack))) 
	    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
	       & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__slt_op) 
		  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__branch_op)))) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in 
	= ((1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d)
	    : ((2U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
	        ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out) 
		   | (IData)(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d))
	        : ((3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
		    ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out) 
		       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d)))
		    : ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
		       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq)
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__lt_r)
	    : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b) 
	       ^ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
		  & (~ (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			 & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			    >> 1U)) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					>> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						  >> 2U)))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b 
	= ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	     >> 3U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30))
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1)
	    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ready 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt) 
	   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy 
	= (1U & ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)) 
		 >> 1U));
}

VL_INLINE_OPT void Vservant_sim_servant__M0_MB8000_S1::_sequent__TOP__servant_sim__dut__2(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__M0_MB8000_S1::_sequent__TOP__servant_sim__dut__2\n"); );
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_cyc 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc) 
	   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
	      & (0U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
			      >> 0x1eU)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
	= vlSymsp->TOP__servant_sim__dut.__Vdly__cpu__DOT__cpu__DOT__mem_if__DOT__dat;
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc)
	    ? vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr
	    : (0xfffffffcU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack 
	= ((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur 
	= (((((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
	      & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
		 >> 0x18U)) | ((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
			       & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
				  >> 0x10U))) | ((1U 
						  == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
						 & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
						    >> 8U))) 
	   | ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
	      & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat));
    vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap_taken 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack) 
	   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
	      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd 
	= (1U & ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype) 
		     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
		    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
		       & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			   >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
		   | ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			  & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
			      + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
			     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
			 | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			     >> 1U) & ((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					       >> 2U) 
					      ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped)))
				        ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data
				        : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit)))) 
			| ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			     >> 2U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt_r)) 
			   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0))) 
		       | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			   >> 3U) & (0x8e96U >> ((0xcU 
						  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						     << 2U)) 
						 | ((2U 
						     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
							<< 1U)) 
						    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)))))) 
		      & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
			  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			     >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					   >> 4U))))) 
		  | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out) 
		     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op))) 
		 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op) 
		    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
		        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur)
		        : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit) 
			   & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				 >> 2U)))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)
		      ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data
		      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned))
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd)));
}

void Vservant_sim_servant__M0_MB8000_S1::_initial__TOP__servant_sim__dut__3(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__M0_MB8000_S1::_initial__TOP__servant_sim__dut__3\n"); );
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp5,95,0,3);
    // Body
    // INITIAL at ../src/servant_1.0.2/servant/servant_mux.v:70
    vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__f = 0U;
    // INITIAL at ../src/servant_1.0.2/servant/servant_mux.v:72
    __Vtemp5[0U] = 0x653d2573U;
    __Vtemp5[1U] = 0x61747572U;
    __Vtemp5[2U] = 0x7369676eU;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024,VL_CVT_PACK_STR_NW(3,__Vtemp5),
					 vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__signature_file))) {
	VL_WRITEF("Writing signature to %0s\n",1024,
		  vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__signature_file);
	vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__f = VL_FOPEN_WI(32
										, vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__signature_file
										, 0x77U);
    }
}

void Vservant_sim_servant__M0_MB8000_S1::_settle__TOP__servant_sim__dut__4(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__M0_MB8000_S1::_settle__TOP__servant_sim__dut__4\n"); );
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_shamt_en 
	= (((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	    | ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
	    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)))
	    ? 0U : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
		     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)))
		     ? 2U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26)
			      ? 3U : 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2 
	= ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
	      >> 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0 
	= ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1)
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata)
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_q 
	= (1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data);
    vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d 
	= (1U & ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr)
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_sel 
	= ((8U & ((((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
		    << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					     << 2U))) 
		  | (0xfffffff8U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				     << 3U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
					       << 2U))))) 
	   | ((4U & (((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
		      << 2U) | (0xfffffffcU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					       << 1U)))) 
	      | ((2U & ((((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
			  << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
			| (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
				  >> 1U))) << 1U))) 
		 | (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur 
	= (((((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
	      & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
		 >> 0x18U)) | ((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
			       & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
				  >> 0x10U))) | ((1U 
						  == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
						 & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat 
						    >> 8U))) 
	   | ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
	      & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid 
	= (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
		   >> 1U) | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
					  >> 1U)))) 
		 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
		    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
			  >> 2U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((0xeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((0xdU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | ((1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
	      << 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((0xbU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | ((1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			    >> 1U))) << 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel 
	= ((7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel)) 
	   | (0xfffffff8U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			      << 1U) & ((1U != (3U 
						& (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
					<< 3U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2 
	= ((2U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2)) 
	   | ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
	      | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			      >> 1U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2 
	= ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2)) 
	   | (2U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		     >> 3U) & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
			       << 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret 
	= (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	      >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			>> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
	   & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en 
	= (1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		     >> 4U)) | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 1U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__branch_op 
	= (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		  >> 4U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			       >> 2U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__e_op 
	= (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		    >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			      >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21))) 
		 & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm 
	= (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		      >> 4U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				 >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a 
	= ((((0U == (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
	     | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
	    | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			    >> 3U)))) & vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr);
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype 
	= (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		      >> 4U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				 >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op 
	= (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		      >> 4U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op 
	= ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	     >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
		       >> 2U)) & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done)
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit)
		  : ((8U == (0xfU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))
		      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7)
		      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq) 
	    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie)) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mie_mtie));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
	= (1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
	= (1U & ((vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
		 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0) 
	   & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	       >> 4U) & ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
			 | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__e_op) 
	    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__pending_irq)) 
	   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm) 
	   & (1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__slt_op 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm) 
	   & (1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			   >> 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__genblk1__DOT__misalign) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mstatus_en 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mcause_en 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
	   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
	      | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
		  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22))) 
		 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype)
		  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
		     & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
			 >> 2U) | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))
		  : vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b 
	= ((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1)
	    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack 
	= ((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc)
	    ? vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr
	    : (0xfffffffcU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c 
	= (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
		    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en)) 
		   + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
		       & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			     >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q 
	= (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
		   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en)) 
		  + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
		      & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			    >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
		 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__waddr 
	= ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt))
	      ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? 0x22U : (0x20U | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr)))
	      : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr))) 
	    << 4U) | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt) 
			      >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc 
	= ((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
	     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending)) 
	    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op)) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending 
	= (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump) 
	    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
	       >> 1U)) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__raddr 
	= ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
	      ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? 0x21U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret)
			      ? 0x22U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en)
					  ? (0x20U 
					     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr))
					  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs2_addr))))
	      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr)) 
	    << 4U) | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt) 
			      >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out 
	= (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mstatus_en) 
	      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
	     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus)) 
	    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en))) 
	   | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mcause_en) 
	       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
	      & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
		  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0)
		  : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
		     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
	= (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
	= ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
	     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
	    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy 
	= (1U & ((((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b))) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq 
	= ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
	   == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1 
	= (1U & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0)) 
		 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r)));
    vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap_taken 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap));
    vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_cyc 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc) 
	   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
	      & (0U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
			      >> 0x1eU)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack) 
	   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
	      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq 
	= ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op) 
	       & ((0x1fU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt)) 
		  == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt))) 
	      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending)) 
	     | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op) 
		& (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack))) 
	    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
	       & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__slt_op) 
		  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__branch_op)))) 
	   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending)));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in 
	= ((1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d)
	    : ((2U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
	        ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out) 
		   | (IData)(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d))
	        : ((3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
		    ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out) 
		       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d)))
		    : ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
		       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq) 
	   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq)
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__lt_r)
	    : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b) 
	       ^ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
		  & (~ (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			 & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
			    >> 1U)) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					>> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						  >> 2U)))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b 
	= ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
	     >> 3U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30))
	    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1)
	    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ready 
	= ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt) 
	   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy 
	= (1U & ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
		   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
		  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)) 
		 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd 
	= (1U & ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype) 
		     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
		    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
		       & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			   >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
		   | ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			  & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
			      + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
			     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
			 | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			     >> 1U) & ((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					       >> 2U) 
					      ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped)))
				        ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data
				        : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit)))) 
			| ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			     >> 2U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt_r)) 
			   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0))) 
		       | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
			   >> 3U) & (0x8e96U >> ((0xcU 
						  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						     << 2U)) 
						 | ((2U 
						     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
							<< 1U)) 
						    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)))))) 
		      & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
			  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			     >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					   >> 4U))))) 
		  | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out) 
		     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op))) 
		 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op) 
		    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
		        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur)
		        : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit) 
			   & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				 >> 2U)))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0 
	= (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
		  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)
		      ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data
		      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned))
		  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd)));
}

void Vservant_sim_servant__M0_MB8000_S1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_servant__M0_MB8000_S1::_ctor_var_reset\n"); );
    // Body
    __PVT__wb_clk = VL_RAND_RESET_I(1);
    __PVT__wb_rst = VL_RAND_RESET_I(1);
    __PVT__q = VL_RAND_RESET_I(1);
    __PVT__timer_irq = VL_RAND_RESET_I(1);
    __PVT__wb_ibus_adr = VL_RAND_RESET_I(32);
    __PVT__wb_ibus_cyc = VL_RAND_RESET_I(1);
    __PVT__wb_ibus_ack = VL_RAND_RESET_I(1);
    __PVT__wb_dbus_sel = VL_RAND_RESET_I(4);
    __PVT__wb_dbus_cyc = VL_RAND_RESET_I(1);
    __PVT__wb_dbus_ack = VL_RAND_RESET_I(1);
    __PVT__wb_mem_adr = VL_RAND_RESET_I(32);
    __PVT__wb_mem_cyc = VL_RAND_RESET_I(1);
    __PVT__wb_gpio_rdt = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024,__PVT__servant_mux__DOT__genblk1__DOT__signature_file);
    __PVT__servant_mux__DOT__genblk1__DOT__f = 0;
    __PVT__cpu__DOT__rf_wreq = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_rreq = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__wdata0 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ready = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rdata1 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__waddr = VL_RAND_RESET_I(10);
    __PVT__cpu__DOT__raddr = VL_RAND_RESET_I(10);
    __PVT__cpu__DOT__rdata = VL_RAND_RESET_I(2);
    __PVT__cpu__DOT__rf_ram_if__DOT__rgnt = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__wcnt = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__rf_ram_if__DOT__wgo = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r = VL_RAND_RESET_I(2);
    __PVT__cpu__DOT__rf_ram_if__DOT__wen0_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__wen1_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__wreq_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__rcnt = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__rf_ram_if__DOT__rtrig1 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__rdata0 = VL_RAND_RESET_I(2);
    __PVT__cpu__DOT__rf_ram_if__DOT__rdata1 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__rf_ram_if__DOT__rreq_r = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<576; ++__Vi0) {
	    __PVT__cpu__DOT__rf_ram__DOT__memory[__Vi0] = VL_RAND_RESET_I(2);
    }}
    cpu__DOT__rf_ram__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    __PVT__cpu__DOT__cpu__DOT__rd_addr = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__cpu__DOT__rs1_addr = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__cpu__DOT__rs2_addr = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__cpu__DOT__e_op = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__branch_op = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__mem_op = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__shift_op = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__slt_op = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl_pc_en = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__jump = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__utype = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__mret = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__imm = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__init = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__cnt0 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__cnt2 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__cnt_done = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__bufreg_q = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu_shamt_en = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu_rd_sel = VL_RAND_RESET_I(4);
    __PVT__cpu__DOT__cpu__DOT__op_b = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__mem_misalign = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__csr_mstatus_en = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__csr_mcause_en = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__csr_en = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__csr_addr = VL_RAND_RESET_I(2);
    __PVT__cpu__DOT__cpu__DOT__trap_taken = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__pending_irq = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__lsb = VL_RAND_RESET_I(2);
    cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en = VL_RAND_RESET_I(1);
    cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt = VL_RAND_RESET_I(3);
    __PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r = VL_RAND_RESET_I(4);
    __PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__irq_sync = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3 = VL_RAND_RESET_I(3);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__op20 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__op21 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__op22 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__op26 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20 = VL_RAND_RESET_I(9);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm7 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25 = VL_RAND_RESET_I(6);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20 = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7 = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__cpu__DOT__decode__DOT__m2 = VL_RAND_RESET_I(2);
    __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data = VL_RAND_RESET_I(32);
    __PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt = VL_RAND_RESET_I(5);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt_msb = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__lt_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__eq_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__eq = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt = VL_RAND_RESET_I(6);
    __PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat = VL_RAND_RESET_I(32);
    __PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__mem_if__DOT__genblk1__DOT__misalign = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mie_mtie = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31 = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0 = VL_RAND_RESET_I(4);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq_r = VL_RAND_RESET_I(1);
    __PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__timer__DOT__mtime = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__timer__DOT__mtimecmp = VL_RAND_RESET_I(32);
    __Vdly__cpu__DOT__cpu__DOT__mem_if__DOT__dat = VL_RAND_RESET_I(32);
}
