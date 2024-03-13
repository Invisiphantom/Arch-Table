// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->SimTop__DOT__core__DOT__runrunrun = vlSelf->SimTop__DOT__core__DOT__runrun;
    vlSelf->SimTop__DOT__core__DOT__runrunrunrunrun 
        = vlSelf->SimTop__DOT__core__DOT__runrunrunrun;
    vlSelf->SimTop__DOT__core__DOT__run = (IData)((0x300000000ULL 
                                                   == 
                                                   (0x300000000ULL 
                                                    & vlSelf->SimTop__DOT__iresp)));
}

void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(IData/*31:0*/ &get_switch__Vfuncrtn);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);
extern const VlUnpacked<CData/*0:0*/, 256> VSimTop__ConstPool__TABLE_f37f1103_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__SimTop__DOT__mux__DOT__busy;
    CData/*1:0*/ __Vdly__SimTop__DOT__ram__DOT__state;
    CData/*7:0*/ __Vdly__SimTop__DOT__ram__DOT__count_down;
    CData/*3:0*/ __Vdly__SimTop__DOT__ram__DOT__size;
    CData/*0:0*/ __Vdly__SimTop__DOT__ram__DOT__msip;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<5>/*159:0*/ __Vtemp45;
    QData/*63:0*/ __Vdly__SimTop__DOT__core__DOT__PCaddress;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__cyc_cnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__ms_cnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__addr;
    VlWide<5>/*150:0*/ __Vdly__SimTop__DOT__ram__DOT__saved_oreq;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__mtime;
    QData/*63:0*/ __Vdly__SimTop__DOT__ram__DOT__mtimecmp;
    // Body
    __Vdly__SimTop__DOT__mux__DOT__busy = vlSelf->SimTop__DOT__mux__DOT__busy;
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U];
    __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U] = 
        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U];
    __Vdly__SimTop__DOT__ram__DOT__size = vlSelf->SimTop__DOT__ram__DOT__size;
    __Vdly__SimTop__DOT__ram__DOT__cyc_cnt = vlSelf->SimTop__DOT__ram__DOT__cyc_cnt;
    __Vdly__SimTop__DOT__ram__DOT__msip = vlSelf->SimTop__DOT__ram__DOT__msip;
    __Vdly__SimTop__DOT__ram__DOT__mtimecmp = vlSelf->SimTop__DOT__ram__DOT__mtimecmp;
    __Vdly__SimTop__DOT__ram__DOT__mtime = vlSelf->SimTop__DOT__ram__DOT__mtime;
    __Vdly__SimTop__DOT__ram__DOT__ms_cnt = vlSelf->SimTop__DOT__ram__DOT__ms_cnt;
    __Vdly__SimTop__DOT__ram__DOT__count_down = vlSelf->SimTop__DOT__ram__DOT__count_down;
    __Vdly__SimTop__DOT__ram__DOT__state = vlSelf->SimTop__DOT__ram__DOT__state;
    __Vdly__SimTop__DOT__ram__DOT__addr = vlSelf->SimTop__DOT__ram__DOT__addr;
    __Vdly__SimTop__DOT__core__DOT__PCaddress = vlSelf->SimTop__DOT__core__DOT__PCaddress;
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, 0U, 0U, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    vlSelf->SimTop__DOT__core__DOT__runrun = vlSelf->SimTop__DOT__core__DOT__run;
    vlSelf->SimTop__DOT__core__DOT__runrunrunrun = vlSelf->SimTop__DOT__core__DOT__runrunrun;
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x3fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x3eU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x3dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x3cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x3bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x3aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x39U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x38U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x37U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x36U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x35U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x34U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x33U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x32U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x31U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x30U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x2fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x2eU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x2dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x2cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x2bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x2aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x29U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x28U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x27U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x26U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x25U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x24U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x23U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x22U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x21U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x20U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x1fU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x1eU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x1dU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x1cU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x1bU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x1aU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x19U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x18U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x17U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x16U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x15U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x14U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x13U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x12U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x11U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0x10U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0xfU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0xeU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0xdU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0xcU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0xbU])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0xaU]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[9U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[8U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[7U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[6U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[5U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[4U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[3U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[2U]))), 
                                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[1U])) 
                                                                                << 0x20U) 
                                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__retReg[0U]))));
    if (vlSelf->SimTop__DOT__core__DOT__runrunrunrunrun) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__core__DOT__runrunrunrunrun), vlSelf->SimTop__DOT__core__DOT__PCaddress_submit, 0U, 0U, 0U, 0U, 0U, 0U, 0ULL);
    }
    if ((((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
          >> 0xaU) & (0U != (0x1fU & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                      >> 7U))))) {
        vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[(0x1fU 
                                                               & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                  >> 7U))] 
            = ((IData)((0U != (0xcU & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))))
                ? (4ULL + vlSelf->SimTop__DOT__core__DOT__PCaddress)
                : ((0x40U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                    ? (((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))
                    : vlSelf->SimTop__DOT__core__DOT__aluResult));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__mux__DOT__busy = 0U;
        vlSelf->SimTop__DOT__mux__DOT__index = 0U;
        vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] = 0U;
        vlSelf->SimTop__DOT__mux__DOT__saved_req[1U] = 0U;
        vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] = 0U;
        vlSelf->SimTop__DOT__mux__DOT__saved_req[3U] = 0U;
        vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] = 0U;
    } else if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        if ((1U & vlSelf->SimTop__DOT__oresp[2U])) {
            __Vdly__SimTop__DOT__mux__DOT__busy = 0U;
            vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] = 0U;
            vlSelf->SimTop__DOT__mux__DOT__saved_req[1U] = 0U;
            vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] = 0U;
            vlSelf->SimTop__DOT__mux__DOT__saved_req[3U] = 0U;
            vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] = 0U;
        }
    } else {
        __Vdly__SimTop__DOT__mux__DOT__busy = (1U & 
                                               (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                                >> 0x16U));
        vlSelf->SimTop__DOT__mux__DOT__index = vlSelf->SimTop__DOT__mux__DOT__select;
        vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
            = vlSelf->SimTop__DOT__mux__DOT__selected_req[0U];
        vlSelf->SimTop__DOT__mux__DOT__saved_req[1U] 
            = vlSelf->SimTop__DOT__mux__DOT__selected_req[1U];
        vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
            = vlSelf->SimTop__DOT__mux__DOT__selected_req[2U];
        vlSelf->SimTop__DOT__mux__DOT__saved_req[3U] 
            = vlSelf->SimTop__DOT__mux__DOT__selected_req[3U];
        vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
            = vlSelf->SimTop__DOT__mux__DOT__selected_req[4U];
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__ram__DOT__state = 0U;
        __Vdly__SimTop__DOT__ram__DOT__count_down = 0U;
        __Vdly__SimTop__DOT__ram__DOT__cyc_cnt = 0ULL;
        __Vdly__SimTop__DOT__ram__DOT__ms_cnt = 0ULL;
        __Vdly__SimTop__DOT__ram__DOT__addr = 0ULL;
        __Vdly__SimTop__DOT__ram__DOT__size = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U] = 0U;
        __Vdly__SimTop__DOT__ram__DOT__mtime = 0ULL;
        __Vdly__SimTop__DOT__ram__DOT__mtimecmp = 0xffffffffffffffffULL;
        __Vdly__SimTop__DOT__ram__DOT__msip = 0U;
        vlSelf->SimTop__DOT__trint = 0U;
        vlSelf->SimTop__DOT__swint = 0U;
        vlSelf->SimTop__DOT__exint = 0U;
    } else {
        if ((0x19ULL == vlSelf->SimTop__DOT__ram__DOT__cyc_cnt)) {
            __Vdly__SimTop__DOT__ram__DOT__ms_cnt = 
                (1ULL + vlSelf->SimTop__DOT__ram__DOT__ms_cnt);
            __Vdly__SimTop__DOT__ram__DOT__mtime = 
                (1ULL + vlSelf->SimTop__DOT__ram__DOT__mtime);
            __Vdly__SimTop__DOT__ram__DOT__cyc_cnt = 0ULL;
        } else {
            __Vdly__SimTop__DOT__ram__DOT__cyc_cnt 
                = (1ULL + vlSelf->SimTop__DOT__ram__DOT__cyc_cnt);
        }
        vlSelf->SimTop__DOT__trint = (vlSelf->SimTop__DOT__ram__DOT__mtime 
                                      > vlSelf->SimTop__DOT__ram__DOT__mtimecmp);
        vlSelf->SimTop__DOT__swint = vlSelf->SimTop__DOT__ram__DOT__msip;
        if ((2U & (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
                if (VL_UNLIKELY((((((((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x16U)) 
                                      != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                >> 0x16U))) 
                                     | ((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                               >> 0x15U)) 
                                        != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                  >> 0x15U)))) 
                                    | ((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                              >> 0x12U)) 
                                       != (7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                 >> 0x12U)))) 
                                   | ((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[2U])) 
                                         >> 0x12U))) 
                                      != (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                >> 0x12U))))) 
                                  | ((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U)) 
                                     != (0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                  >> 2U)))) 
                                 | ((3U & vlSelf->SimTop__DOT__oreq[0U]) 
                                    != (3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U]))))) {
                    VL_WRITEF("ERROR: Unexpected CBus request modification.\n\n");
                    VL_FINISH_MT("src/test/vsrc/common/ram.sv", 199, "");
                }
                if ((0x40600004ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    if (VL_UNLIKELY((0x4000U & vlSelf->SimTop__DOT__oreq[2U]))) {
                        VL_FWRITEF(0x80000001U,"%c",
                                   8,(0xffU & (vlSelf->SimTop__DOT__oreq[1U] 
                                               >> 0xaU)));
                        if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
                    }
                } else if ((0x23333000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    if (VL_UNLIKELY(((0x233ULL == (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    << 0x36U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__oreq[1U])) 
                                                       << 0x16U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__oreq[0U])) 
                                                         >> 0xaU)))) 
                                     & (0xffU == (0xffU 
                                                  & (vlSelf->SimTop__DOT__oreq[2U] 
                                                     >> 0xaU)))))) {
                        VL_WRITEF("Pass!\n");
                    }
                } else if ((0x38000000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    __Vdly__SimTop__DOT__ram__DOT__msip 
                        = (1U & (vlSelf->SimTop__DOT__oreq[0U] 
                                 >> 0xaU));
                } else if ((0x38004000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    __Vdly__SimTop__DOT__ram__DOT__mtimecmp 
                        = (((QData)((IData)(vlSelf->SimTop__DOT__oreq[2U])) 
                            << 0x36U) | (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__oreq[1U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSelf->SimTop__DOT__oreq[0U])) 
                                            >> 0xaU)));
                } else if ((0x3800bff8ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    __Vdly__SimTop__DOT__ram__DOT__mtime 
                        = (((QData)((IData)(vlSelf->SimTop__DOT__oreq[2U])) 
                            << 0x36U) | (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__oreq[1U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSelf->SimTop__DOT__oreq[0U])) 
                                            >> 0xaU)));
                } else if ((0x4060000cULL != vlSelf->SimTop__DOT__ram__DOT__addr)) {
                    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(vlSelf->SimTop__DOT__ram__DOT__idx, 
                                                                                (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[2U])) 
                                                                                << 0x36U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[1U])) 
                                                                                << 0x16U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__oreq[0U])) 
                                                                                >> 0xaU))), vlSelf->SimTop__DOT__ram__DOT__wmask, 1U);
                }
                if ((1U & (~ VL_ONEHOT0_I((((0x3800bff8ULL 
                                             == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                            << 4U) 
                                           | (((0x38004000ULL 
                                                == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                               << 3U) 
                                              | (((0x38000000ULL 
                                                   == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                  << 2U) 
                                                 | (((0x23333000ULL 
                                                      == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                     << 1U) 
                                                    | (0x40600004ULL 
                                                       == vlSelf->SimTop__DOT__ram__DOT__addr))))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: ram.sv:206: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("src/test/vsrc/common/ram.sv", 206, "");
                    }
                }
                if ((1U & vlSelf->SimTop__DOT__oresp[2U])) {
                    __Vdly__SimTop__DOT__ram__DOT__state = 0U;
                } else {
                    __Vdly__SimTop__DOT__ram__DOT__count_down 
                        = (0xffU & ((IData)(vlSelf->SimTop__DOT__ram__DOT__count_down) 
                                    - (IData)(1U)));
                    __Vdly__SimTop__DOT__ram__DOT__addr 
                        = (vlSelf->SimTop__DOT__ram__DOT__addr 
                           + (QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__size)));
                }
            } else {
                if (VL_UNLIKELY((((((((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x16U)) 
                                      != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                >> 0x16U))) 
                                     | ((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                               >> 0x15U)) 
                                        != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                  >> 0x15U)))) 
                                    | ((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                              >> 0x12U)) 
                                       != (7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                                 >> 0x12U)))) 
                                   | ((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__oreq[2U])) 
                                         >> 0x12U))) 
                                      != (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                           << 0x2eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                              << 0xeU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                >> 0x12U))))) 
                                  | ((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U)) 
                                     != (0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                  >> 2U)))) 
                                 | ((3U & vlSelf->SimTop__DOT__oreq[0U]) 
                                    != (3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U]))))) {
                    VL_WRITEF("ERROR: Unexpected CBus request modification.\n\n");
                    VL_FINISH_MT("src/test/vsrc/common/ram.sv", 177, "");
                }
                if (VL_UNLIKELY((0x10000000ULL <= vlSelf->SimTop__DOT__ram__DOT__idx))) {
                    VL_WRITEF("ERROR: Load address %x out of range!\n\n",
                              64,vlSelf->SimTop__DOT__ram__DOT__addr);
                    VL_FINISH_MT("src/test/vsrc/common/ram.sv", 182, "");
                }
                if ((1U & vlSelf->SimTop__DOT__oresp[2U])) {
                    __Vdly__SimTop__DOT__ram__DOT__state = 0U;
                } else {
                    __Vdly__SimTop__DOT__ram__DOT__count_down 
                        = (0xffU & ((IData)(vlSelf->SimTop__DOT__ram__DOT__count_down) 
                                    - (IData)(1U)));
                    __Vdly__SimTop__DOT__ram__DOT__addr 
                        = (((vlSelf->SimTop__DOT__ram__DOT__addr 
                             + (QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__size))) 
                            == vlSelf->SimTop__DOT__ram__DOT__wrap2)
                            ? vlSelf->SimTop__DOT__ram__DOT__wrap1
                            : (vlSelf->SimTop__DOT__ram__DOT__addr 
                               + (QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__size))));
                }
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            if (VL_UNLIKELY((((((((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                         >> 0x16U)) 
                                  != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))) 
                                 | ((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                           >> 0x15U)) 
                                    != (1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x15U)))) 
                                | ((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x12U)) 
                                   != (7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                             >> 0x12U)))) 
                               | ((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U))) 
                                  != (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                        >> 0x12U))))) 
                              | ((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                           >> 2U)) 
                                 != (0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                              >> 2U)))) 
                             | ((3U & vlSelf->SimTop__DOT__oreq[0U]) 
                                != (3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U]))))) {
                VL_WRITEF("ERROR: Unexpected CBus request modification.\n\n");
                VL_FINISH_MT("src/test/vsrc/common/ram.sv", 144, "");
            }
            if ((0U == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))) {
                if ((1U & (~ VL_ONEHOT0_I((((2U == 
                                             (3U & 
                                              vlSelf->SimTop__DOT__oreq[0U])) 
                                            << 1U) 
                                           | (0U == 
                                              (3U & 
                                               vlSelf->SimTop__DOT__oreq[0U]))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: ram.sv:155: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("src/test/vsrc/common/ram.sv", 155, "");
                    }
                }
                __Vdly__SimTop__DOT__ram__DOT__state 
                    = ((0x200000U & vlSelf->SimTop__DOT__oreq[4U])
                        ? 3U : 2U);
                __Vdly__SimTop__DOT__ram__DOT__addr 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                        << 0x2eU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__oreq[3U])) 
                                      << 0xeU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[2U])) 
                                                  >> 0x12U)));
                __Vdly__SimTop__DOT__ram__DOT__count_down 
                    = (0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                >> 2U));
                __Vdly__SimTop__DOT__ram__DOT__size 
                    = (0xfU & ((IData)(1U) << (7U & 
                                               (vlSelf->SimTop__DOT__oreq[4U] 
                                                >> 0x12U))));
                if ((0U == (3U & vlSelf->SimTop__DOT__oreq[0U]))) {
                    vlSelf->SimTop__DOT__ram__DOT__wrap1 
                        = (((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                            << 0x2eU) | (((QData)((IData)(
                                                          vlSelf->SimTop__DOT__oreq[3U])) 
                                          << 0xeU) 
                                         | ((QData)((IData)(
                                                            vlSelf->SimTop__DOT__oreq[2U])) 
                                            >> 0x12U)));
                    vlSelf->SimTop__DOT__ram__DOT__wrap2 
                        = ((((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                             << 0x2eU) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[3U])) 
                                           << 0xeU) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__oreq[2U])) 
                                             >> 0x12U))) 
                           + (1ULL << (7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x12U))));
                } else if ((2U == (3U & vlSelf->SimTop__DOT__oreq[0U]))) {
                    vlSelf->SimTop__DOT__ram__DOT__wrap1 
                        = ((((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                             << 0x2eU) | (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__oreq[3U])) 
                                           << 0xeU) 
                                          | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__oreq[2U])) 
                                             >> 0x12U))) 
                           & (~ (((1ULL + (QData)((IData)(
                                                          (0xffU 
                                                           & (vlSelf->SimTop__DOT__oreq[0U] 
                                                              >> 2U))))) 
                                  << (7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))) 
                                 - 1ULL)));
                    vlSelf->SimTop__DOT__ram__DOT__wrap2 
                        = (((((QData)((IData)(vlSelf->SimTop__DOT__oreq[4U])) 
                              << 0x2eU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__oreq[2U])) 
                                              >> 0x12U))) 
                            & (~ (((1ULL + (QData)((IData)(
                                                           (0xffU 
                                                            & (vlSelf->SimTop__DOT__oreq[0U] 
                                                               >> 2U))))) 
                                   << (7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                             >> 0x12U))) 
                                  - 1ULL))) + ((1ULL 
                                                + (QData)((IData)(
                                                                  (0xffU 
                                                                   & (vlSelf->SimTop__DOT__oreq[0U] 
                                                                      >> 2U))))) 
                                               << (7U 
                                                   & (vlSelf->SimTop__DOT__oreq[4U] 
                                                      >> 0x12U))));
                } else {
                    vlSelf->SimTop__DOT__ram__DOT__wrap1 = 0ULL;
                    vlSelf->SimTop__DOT__ram__DOT__wrap2 = 0ULL;
                }
            } else {
                __Vdly__SimTop__DOT__ram__DOT__count_down 
                    = (0xffU & ((IData)(vlSelf->SimTop__DOT__ram__DOT__count_down) 
                                - (IData)(1U)));
            }
        } else if ((0x400000U & vlSelf->SimTop__DOT__oreq[4U])) {
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U] 
                = vlSelf->SimTop__DOT__oreq[0U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U] 
                = vlSelf->SimTop__DOT__oreq[1U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U] 
                = vlSelf->SimTop__DOT__oreq[2U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U] 
                = vlSelf->SimTop__DOT__oreq[3U];
            __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U] 
                = vlSelf->SimTop__DOT__oreq[4U];
            __Vdly__SimTop__DOT__ram__DOT__count_down 
                = (0xffU & ((IData)(2U) + (IData)(VL_MODDIVS_III(32, (IData)(
                                                                             VL_RANDOM_I(32)), (IData)(0x1fU)))));
            __Vdly__SimTop__DOT__ram__DOT__state = 1U;
        }
    }
    vlSelf->SimTop__DOT__core__DOT__instruction = ((IData)(
                                                           (0x300000000ULL 
                                                            == 
                                                            (0x300000000ULL 
                                                             & vlSelf->SimTop__DOT__iresp)))
                                                    ? (IData)(vlSelf->SimTop__DOT__iresp)
                                                    : vlSelf->SimTop__DOT__core__DOT__instruction);
    vlSelf->SimTop__DOT__core__DOT__retReg[0U] = (IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                         [0x1fU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                          [0x1fU] 
                                                          >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[2U] = (IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                         [0x1eU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[3U] = (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                          [0x1eU] 
                                                          >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[4U] = (IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                         [0x1dU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[5U] = (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                          [0x1dU] 
                                                          >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[6U] = (IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                         [0x1cU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[7U] = (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                          [0x1cU] 
                                                          >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[8U] = (IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                         [0x1bU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[9U] = (IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                          [0x1bU] 
                                                          >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0xaU] = (IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                           [0x1aU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0xbU] = (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x1aU] 
                                                            >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0xcU] = (IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                           [0x19U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0xdU] = (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x19U] 
                                                            >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0xeU] = (IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                           [0x18U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0xfU] = (IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x18U] 
                                                            >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x10U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x17U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x11U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x17U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x12U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x16U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x13U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x16U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x14U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x15U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x15U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x15U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x16U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x14U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x17U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x14U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x18U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x13U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x19U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x13U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x1aU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x12U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x1bU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x12U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x1cU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x11U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x1dU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x11U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x1eU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0x10U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x1fU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0x10U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x20U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0xfU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x21U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0xfU] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x22U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0xeU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x23U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0xeU] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x24U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0xdU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x25U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0xdU] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x26U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0xcU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x27U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0xcU] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x28U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0xbU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x29U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0xbU] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x2aU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0xaU]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x2bU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0xaU] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x2cU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [9U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x2dU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [9U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x2eU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [8U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x2fU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [8U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x30U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [7U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x31U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [7U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x32U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [6U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x33U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [6U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x34U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [5U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x35U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [5U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x36U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [4U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x37U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [4U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x38U] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [3U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x39U] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [3U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x3aU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [2U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x3bU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [2U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x3cU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [1U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x3dU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [1U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__core__DOT__retReg[0x3eU] = (IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                            [0U]);
    vlSelf->SimTop__DOT__core__DOT__retReg[0x3fU] = (IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                             [0U] 
                                                             >> 0x20U));
    vlSelf->SimTop__DOT__mux__DOT__busy = __Vdly__SimTop__DOT__mux__DOT__busy;
    vlSelf->SimTop__DOT__ram__DOT__cyc_cnt = __Vdly__SimTop__DOT__ram__DOT__cyc_cnt;
    vlSelf->SimTop__DOT__ram__DOT__size = __Vdly__SimTop__DOT__ram__DOT__size;
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[0U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[1U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[2U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[3U];
    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] = 
        __Vdly__SimTop__DOT__ram__DOT__saved_oreq[4U];
    vlSelf->SimTop__DOT__ram__DOT__state = __Vdly__SimTop__DOT__ram__DOT__state;
    vlSelf->SimTop__DOT__ram__DOT__count_down = __Vdly__SimTop__DOT__ram__DOT__count_down;
    vlSelf->SimTop__DOT__ram__DOT__ms_cnt = __Vdly__SimTop__DOT__ram__DOT__ms_cnt;
    vlSelf->SimTop__DOT__ram__DOT__mtime = __Vdly__SimTop__DOT__ram__DOT__mtime;
    vlSelf->SimTop__DOT__ram__DOT__mtimecmp = __Vdly__SimTop__DOT__ram__DOT__mtimecmp;
    vlSelf->SimTop__DOT__ram__DOT__msip = __Vdly__SimTop__DOT__ram__DOT__msip;
    vlSelf->SimTop__DOT__ram__DOT__addr = __Vdly__SimTop__DOT__ram__DOT__addr;
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__core__DOT__PCaddress = 0x80000000ULL;
    } else if ((IData)((0x300000000ULL == (0x300000000ULL 
                                           & vlSelf->SimTop__DOT__iresp)))) {
        vlSelf->SimTop__DOT__core__DOT__PCaddress_submit 
            = vlSelf->SimTop__DOT__core__DOT__PCaddress;
        __Vdly__SimTop__DOT__core__DOT__PCaddress = vlSelf->SimTop__DOT__core__DOT__PCnext;
    } else {
        __Vdly__SimTop__DOT__core__DOT__PCaddress = vlSelf->SimTop__DOT__core__DOT__PCaddress;
    }
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 2U;
    }
    vlSelf->SimTop__DOT__ram__DOT__idx = ((0x80000000ULL 
                                           < vlSelf->SimTop__DOT__ram__DOT__addr)
                                           ? ((vlSelf->SimTop__DOT__ram__DOT__addr 
                                               - 0x80000000ULL) 
                                              >> 3U)
                                           : 0ULL);
    vlSelf->SimTop__DOT__core__DOT__imm = ((0x40U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                            ? ((0x20U 
                                                & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                    ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x100000U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                               >> 0xbU)) 
                                                                           | ((0xff000U 
                                                                               & vlSelf->SimTop__DOT__core__DOT__instruction) 
                                                                              | ((0x800U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                >> 9U)) 
                                                                                | (0x7feU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                >> 0x14U))))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                           >> 0x14U))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xdU) 
                                                        | (QData)((IData)(
                                                                          ((0x1000U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                               >> 0x13U)) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                << 4U)) 
                                                                              | ((0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                >> 7U))))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))))
                                                : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                            : ((0x20U 
                                                & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->SimTop__DOT__core__DOT__instruction))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                               >> 0x14U)) 
                                                                           | (0x1fU 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                >> 7U))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->SimTop__DOT__core__DOT__instruction))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                           >> 0x14U))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                                           >> 0x14U))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))))));
    vlSelf->SimTop__DOT__core__DOT__readData2_R = vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
        [(0x1fU & (vlSelf->SimTop__DOT__core__DOT__instruction 
                   >> 0x14U))];
    vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control 
        = ((0x40U & vlSelf->SimTop__DOT__core__DOT__instruction)
            ? ((0x20U & vlSelf->SimTop__DOT__core__DOT__instruction)
                ? ((0x10U & vlSelf->SimTop__DOT__core__DOT__instruction)
                    ? 0U : ((8U & vlSelf->SimTop__DOT__core__DOT__instruction)
                             ? ((4U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                 ? ((2U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                     ? ((1U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                         ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand1)
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                           ? ((2U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                               ? ((1U 
                                                   & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                   ? 0x604U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                               ? ((1U 
                                                   & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                   ? 0x90U
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & vlSelf->SimTop__DOT__core__DOT__instruction)
                          ? ((0x10U & vlSelf->SimTop__DOT__core__DOT__instruction)
                              ? ((8U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                  ? 0U : ((4U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                           ? ((2U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                               ? ((1U 
                                                   & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                   ? 0x602U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                               ? ((1U 
                                                   & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                   ? 0x500U
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                  ? 0U : ((4U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? 0x220U
                                                     : 0U)
                                                    : 0U))))
                          : ((0x10U & vlSelf->SimTop__DOT__core__DOT__instruction)
                              ? ((8U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                  ? 0U : ((4U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                           ? ((2U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                               ? ((1U 
                                                   & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                   ? 0x601U
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                               ? ((1U 
                                                   & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                   ? 0x780U
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                  ? 0U : ((4U & vlSelf->SimTop__DOT__core__DOT__instruction)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? 0x640U
                                                     : 0U)
                                                    : 0U))))));
    vlSelf->SimTop__DOT__core__DOT__PCaddress = __Vdly__SimTop__DOT__core__DOT__PCaddress;
    vlSelf->SimTop__DOT__oresp[0U] = 0U;
    vlSelf->SimTop__DOT__oresp[1U] = 0U;
    vlSelf->SimTop__DOT__oresp[2U] = 0U;
    if (VL_ONEHOT0_I((((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                       << 1U) | (2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))))) {
        if ((2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
            if ((0x40600008ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = 0U;
                vlSelf->SimTop__DOT__oresp[1U] = 0U;
            } else if ((0x38000000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)((QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__msip)));
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         ((QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__msip)) 
                                                          >> 0x20U));
            } else if ((0x38004000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__mtimecmp);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__mtimecmp 
                                                          >> 0x20U));
            } else if ((0x3800bff8ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__mtime);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__mtime 
                                                          >> 0x20U));
            } else if ((0x20003000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__ms_cnt);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__ms_cnt 
                                                          >> 0x20U));
            } else if ((0x23333008ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(vlSelf->__Vfunc_get_switch__5__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)((QData)((IData)(vlSelf->__Vfunc_get_switch__5__Vfuncout)));
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         ((QData)((IData)(vlSelf->__Vfunc_get_switch__5__Vfuncout)) 
                                                          >> 0x20U));
            } else {
                VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, vlSelf->SimTop__DOT__ram__DOT__idx, vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->__Vfunc_ram_read_helper__6__Vfuncout 
                                                          >> 0x20U));
            }
            if ((1U & (~ VL_ONEHOT0_I((((0x23333008ULL 
                                         == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                        << 5U) | ((
                                                   (0x20003000ULL 
                                                    == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                   << 4U) 
                                                  | (((0x3800bff8ULL 
                                                       == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                      << 3U) 
                                                     | (((0x38004000ULL 
                                                          == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                         << 2U) 
                                                        | (((0x38000000ULL 
                                                             == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                            << 1U) 
                                                           | (0x40600008ULL 
                                                              == vlSelf->SimTop__DOT__ram__DOT__addr)))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: ram.sv:239: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/test/vsrc/common/ram.sv", 239, "");
                }
            }
        } else if ((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
        } else {
            vlSelf->SimTop__DOT__oresp[0U] = 0U;
            vlSelf->SimTop__DOT__oresp[1U] = 0U;
            vlSelf->SimTop__DOT__oresp[2U] = 0U;
        }
    } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
        VL_WRITEF("[%0t] %%Error: ram.sv:236: Assertion failed in %NSimTop.ram: 'unique if' statement violated\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("src/test/vsrc/common/ram.sv", 236, "");
    }
    vlSelf->SimTop__DOT__core__DOT__aluControl = ((0x100U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 0xaU
                                                        : 7U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand2)
                                                        : 2U)))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 8U
                                                        : 7U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 3U
                                                        : 2U))))
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 0xaU
                                                        : (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)
                                                        : 6U)))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 8U
                                                        : 7U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SimTop__DOT__core__DOT__instruction)
                                                        ? 3U
                                                        : 2U)))))
                                                   : 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                                    ? 6U
                                                    : 2U));
    vlSelf->SimTop__DOT__core__DOT__aluB = ((0x200U 
                                             & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                             ? vlSelf->SimTop__DOT__core__DOT__imm
                                             : vlSelf->SimTop__DOT__core__DOT__readData2_R);
    vlSelf->SimTop__DOT__icreq[0U] = 0U;
    vlSelf->SimTop__DOT__icreq[1U] = 0U;
    vlSelf->SimTop__DOT__icreq[2U] = ((IData)(vlSelf->SimTop__DOT__core__DOT__PCaddress) 
                                      << 0x12U);
    vlSelf->SimTop__DOT__icreq[3U] = (((IData)(vlSelf->SimTop__DOT__core__DOT__PCaddress) 
                                       >> 0xeU) | ((IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__PCaddress 
                                                            >> 0x20U)) 
                                                   << 0x12U));
    vlSelf->SimTop__DOT__icreq[4U] = (0x480000U | ((IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__PCaddress 
                                                            >> 0x20U)) 
                                                   >> 0xeU));
    vlSelf->SimTop__DOT__core__DOT__aluA = ((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                             ? 0ULL
                                             : ((1U 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                                 ? 
                                                (vlSelf->SimTop__DOT__core__DOT__PCaddress 
                                                 - 4ULL)
                                                 : 
                                                vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                [(0x1fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                     >> 0xfU))]));
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] = 0U;
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        if ((0U == vlSelf->SimTop__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U] 
                = vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U] 
                = vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((0xfffffffcU & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U]);
        }
        if ((1U == vlSelf->SimTop__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((3U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                      << 2U));
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U] 
                = ((vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                    >> 0x1eU) | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                                 << 2U));
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                = (0xfU & ((vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                            >> 0x1eU) | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                                         << 2U)));
        }
    }
    vlSelf->SimTop__DOT__core__DOT__s_less = VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT__aluA, vlSelf->SimTop__DOT__core__DOT__aluB);
    vlSelf->SimTop__DOT__core__DOT__u_less = (vlSelf->SimTop__DOT__core__DOT__aluA 
                                              < vlSelf->SimTop__DOT__core__DOT__aluB);
    vlSelf->SimTop__DOT__icvt__DOT__dresp[0U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                               >> 2U))));
    vlSelf->SimTop__DOT__icvt__DOT__dresp[1U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                           << 0x3eU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                                >> 2U))) 
                                                         >> 0x20U));
    vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] = (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                                                   >> 3U) 
                                                                  & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                                                     >> 2U))))));
    vlSelf->SimTop__DOT__core__DOT__aluResult = ((8U 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                   ? vlSelf->SimTop__DOT__core__DOT__u_ALU__DOT____Vxrand1
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ALU__DOT____Vxrand1
                                                     : 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     >> 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__aluB))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ALU__DOT____Vxrand1
                                                     : 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     >> 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__aluB))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                     ? 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     ^ vlSelf->SimTop__DOT__core__DOT__aluB)
                                                     : 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     - vlSelf->SimTop__DOT__core__DOT__aluB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                     ? (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__u_less))
                                                     : (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__s_less))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                     ? 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     << 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__aluB)))
                                                     : 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     + vlSelf->SimTop__DOT__core__DOT__aluB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__aluControl))
                                                     ? 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     | vlSelf->SimTop__DOT__core__DOT__aluB)
                                                     : 
                                                    (vlSelf->SimTop__DOT__core__DOT__aluA 
                                                     & vlSelf->SimTop__DOT__core__DOT__aluB)))));
    vlSelf->SimTop__DOT__iresp = (((QData)((IData)(
                                                   (3U 
                                                    & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U]))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__core__DOT__PCaddress 
                                                                            >> 2U)))
                                                                 ? 
                                                                vlSelf->SimTop__DOT__icvt__DOT__dresp[1U]
                                                                 : 
                                                                vlSelf->SimTop__DOT__icvt__DOT__dresp[0U]))));
    __Vtableidx1 = (((IData)(vlSelf->SimTop__DOT__core__DOT__u_BranchUnit__DOT____Vxrand1) 
                     << 7U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__u_less) 
                                << 6U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__s_less) 
                                           << 5U) | 
                                          (((0ULL == vlSelf->SimTop__DOT__core__DOT__aluResult) 
                                            << 4U) 
                                           | ((0xeU 
                                               & (vlSelf->SimTop__DOT__core__DOT__instruction 
                                                  >> 0xbU)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                                    >> 4U)))))));
    vlSelf->SimTop__DOT__core__DOT__Cnd = VSimTop__ConstPool__TABLE_f37f1103_0
        [__Vtableidx1];
    VL_EXTEND_WQ(65,64, __Vtemp38, vlSelf->SimTop__DOT__core__DOT__aluResult);
    vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__readData2_R);
    vlSelf->SimTop__DOT__dreq[1U] = (IData)((vlSelf->SimTop__DOT__core__DOT__readData2_R 
                                             >> 0x20U));
    vlSelf->SimTop__DOT__dreq[2U] = (0x3ffU | (__Vtemp38[0U] 
                                               << 0xbU));
    vlSelf->SimTop__DOT__dreq[3U] = ((__Vtemp38[0U] 
                                      >> 0x15U) | (
                                                   __Vtemp38[1U] 
                                                   << 0xbU));
    vlSelf->SimTop__DOT__dreq[4U] = ((__Vtemp38[1U] 
                                      >> 0x15U) | (
                                                   __Vtemp38[2U] 
                                                   << 0xbU));
    vlSelf->SimTop__DOT__core__DOT__PCnext = ((4U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                               ? vlSelf->SimTop__DOT__core__DOT__aluResult
                                               : ((1U 
                                                   & (((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                                       >> 3U) 
                                                      | (IData)(vlSelf->SimTop__DOT__core__DOT__Cnd)))
                                                   ? 
                                                  (vlSelf->SimTop__DOT__core__DOT__PCaddress 
                                                   + vlSelf->SimTop__DOT__core__DOT__imm)
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->SimTop__DOT__core__DOT__PCaddress)));
    __Vtemp45[3U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__dreq[4U])) 
                                          << 0x35U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__dreq[3U])) 
                                             << 0x15U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__dreq[2U])) 
                                               >> 0xbU)))) 
                                >> 0xeU)) | ((0x3fc00U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__dreq[4U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__dreq[3U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                >> 0xbU)))) 
                                                 >> 0xeU)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__dreq[4U])) 
                                                           << 0x35U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__dreq[3U])) 
                                                              << 0x15U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                >> 0xbU))) 
                                                         >> 0x20U)) 
                                                << 0x12U)));
    __Vtemp45[4U] = ((0x3ffU & ((IData)(((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[4U])) 
                                           << 0x35U) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__dreq[3U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                >> 0xbU))) 
                                         >> 0x20U)) 
                                >> 0xeU)) | ((((2U 
                                                & (vlSelf->SimTop__DOT__dreq[4U] 
                                                   >> 0xaU)) 
                                               | (0U 
                                                  != 
                                                  (0xffU 
                                                   & vlSelf->SimTop__DOT__dreq[2U]))) 
                                              << 0x15U) 
                                             | ((0x1c0000U 
                                                 & (vlSelf->SimTop__DOT__dreq[2U] 
                                                    << 0xaU)) 
                                                | (0x3fc00U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[4U])) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[3U])) 
                                                                    << 0x15U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                      >> 0xbU))) 
                                                               >> 0x20U)) 
                                                      >> 0xeU)))));
    vlSelf->SimTop__DOT__dcreq[0U] = ((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__dreq[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))) 
                                      << 0xaU);
    vlSelf->SimTop__DOT__dcreq[1U] = (((IData)((((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[0U])))) 
                                       >> 0x16U) | 
                                      ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[0U]))) 
                                                >> 0x20U)) 
                                       << 0xaU));
    vlSelf->SimTop__DOT__dcreq[2U] = ((((IData)((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[4U])) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[3U])) 
                                                     << 0x15U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__dreq[2U])) 
                                                       >> 0xbU)))) 
                                        << 0x12U) | 
                                       (0x3fc00U & 
                                        (vlSelf->SimTop__DOT__dreq[2U] 
                                         << 0xaU))) 
                                      | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[0U]))) 
                                                  >> 0x20U)) 
                                         >> 0x16U));
    vlSelf->SimTop__DOT__dcreq[3U] = __Vtemp45[3U];
    vlSelf->SimTop__DOT__dcreq[4U] = __Vtemp45[4U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
        = vlSelf->SimTop__DOT__dcreq[0U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U] 
        = vlSelf->SimTop__DOT__dcreq[1U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
        = vlSelf->SimTop__DOT__dcreq[2U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U] 
        = vlSelf->SimTop__DOT__dcreq[3U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
        = ((vlSelf->SimTop__DOT__icreq[0U] << 0x17U) 
           | vlSelf->SimTop__DOT__dcreq[4U]);
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
        = ((vlSelf->SimTop__DOT__icreq[0U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[1U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U] 
        = ((vlSelf->SimTop__DOT__icreq[1U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[2U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
        = ((vlSelf->SimTop__DOT__icreq[2U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[3U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U] 
        = ((vlSelf->SimTop__DOT__icreq[3U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[4U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
        = (vlSelf->SimTop__DOT__icreq[4U] >> 9U);
    vlSelf->SimTop__DOT__mux__DOT__select = 0U;
    vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(1,32,32, 2U, vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) {
            if ((1U & ((0x12dU >= (0x1ffU & ((IData)(0x96U) 
                                             + ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        ? (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                           (0xfU & (((IData)(0x96U) 
                                     + ((IData)(0x97U) 
                                        * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x96U) 
                                                    + 
                                                    ((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        : (IData)(vlSelf->SimTop__DOT__mux__DOT____Vxrand3)))) {
                vlSelf->SimTop__DOT__mux__DOT__select 
                    = vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i;
                goto __Vlabel1;
            }
            vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__oreq[0U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                (0xfU 
                                                 & (((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[0U]);
        vlSelf->SimTop__DOT__oreq[1U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(1U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[1U]);
        vlSelf->SimTop__DOT__oreq[2U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[2U]);
        vlSelf->SimTop__DOT__oreq[3U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(3U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[3U]);
        vlSelf->SimTop__DOT__oreq[4U] = (0x7fffffU 
                                         & ((0x12dU 
                                             >= (0x1ffU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                                | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0x97U) 
                                                         * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))
                                             : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[4U]));
    } else {
        vlSelf->SimTop__DOT__oreq[0U] = 0U;
        vlSelf->SimTop__DOT__oreq[1U] = 0U;
        vlSelf->SimTop__DOT__oreq[2U] = 0U;
        vlSelf->SimTop__DOT__oreq[3U] = 0U;
        vlSelf->SimTop__DOT__oreq[4U] = 0U;
    }
    if ((0x12dU >= (0x1ffU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))) {
        vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  (0xfU & (((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select) 
                           >> 5U))] >> (0x1fU & ((IData)(0x97U) 
                                                 * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[3U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(4U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x97U) 
                                              * vlSelf->SimTop__DOT__mux__DOT__select)))
                              ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                      ((IData)(5U) 
                                       + (0xfU & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__mux__DOT__select))))) 
                            | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                               ((IData)(4U) + (0xfU 
                                               & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__select)))));
    } else {
        vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[0U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[1U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[1U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[2U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[3U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[3U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & vlSelf->SimTop__DOT__mux__DOT____Vxrand2[4U]);
    }
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffff0000ULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | (IData)((IData)(
                                                              ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xbU)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xaU)))))))));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffff0000ffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xdU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xcU)))))))) 
                                               << 0x10U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffff0000ffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xfU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xeU)))))))) 
                                               << 0x20U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x11U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x10U)))))))) 
                                               << 0x30U));
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
}
#endif  // VL_DEBUG
