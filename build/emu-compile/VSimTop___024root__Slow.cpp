// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf);

VSimTop___024root::VSimTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop___024root___ctor_var_reset(this);
}

void VSimTop___024root::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop___024root::~VSimTop___024root() {
}

void VSimTop___024root___initial__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_uart_out_valid = 0U;
    vlSelf->io_uart_out_ch = 0U;
    vlSelf->io_uart_in_valid = 0U;
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand2);
    vlSelf->SimTop__DOT__mux__DOT____Vxrand3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__u_BranchUnit__DOT____Vxrand1 
        = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand1);
    vlSelf->SimTop__DOT__core__DOT__u_ALU__DOT____Vxrand1 
        = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand2 
        = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1 
        = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1 
        = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[1U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[2U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[3U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[4U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[5U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[6U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[7U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[8U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[9U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0xaU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0xbU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0xcU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0xdU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0xeU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0xfU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x10U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x11U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x12U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x13U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x14U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x15U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x16U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x17U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x18U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x19U] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x1aU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x1bU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x1cU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x1dU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x1eU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0x1fU] = 0ULL;
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__i = 0x20U;
    vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2 
        = VL_RAND_RESET_I(11);
    vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand1 
        = (0x408U | (0x380U & VL_RAND_RESET_I(11)));
    vlSelf->SimTop__DOT__core__DOT__PCaddress = 0ULL;
}

void VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(IData/*31:0*/ &get_switch__Vfuncrtn);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);
extern const VlUnpacked<CData/*0:0*/, 256> VSimTop__ConstPool__TABLE_f37f1103_0;

void VSimTop___024root___settle__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__3\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    VlWide<5>/*159:0*/ __Vtemp102;
    // Body
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 2U;
    }
    vlSelf->SimTop__DOT__ram__DOT__idx = ((0x80000000ULL 
                                           < vlSelf->SimTop__DOT__ram__DOT__addr)
                                           ? ((vlSelf->SimTop__DOT__ram__DOT__addr 
                                               - 0x80000000ULL) 
                                              >> 3U)
                                           : 0ULL);
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
    vlSelf->SimTop__DOT__core__DOT__imm = ((1U & (IData)(
                                                         (vlSelf->SimTop__DOT__iresp 
                                                          >> 6U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__iresp 
                                                           >> 5U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 4U)))
                                                    ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__iresp 
                                                                >> 3U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)))))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(
                                                                          ((0x100000U 
                                                                            & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)) 
                                                                               << 0x14U)) 
                                                                           | ((0xff000U 
                                                                               & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                              | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | (0x7feU 
                                                                                & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x15U)) 
                                                                                << 1U))))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x14U))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)))))) 
                                                         << 0xdU) 
                                                        | (QData)((IData)(
                                                                          ((0x1000U 
                                                                            & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)) 
                                                                               << 0xcU)) 
                                                                           | ((0x800U 
                                                                               & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 7U)) 
                                                                                << 0xbU)) 
                                                                              | ((0x7e0U 
                                                                                & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                                | (0x1eU 
                                                                                & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 8U)) 
                                                                                << 1U))))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))))
                                                : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__iresp 
                                                           >> 5U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 4U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__iresp 
                                                                >> 3U)))
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0xcU)) 
                                                                           << 0xcU))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__iresp 
                                                                >> 3U)))
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 2U)))
                                                      ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x19U)) 
                                                                               << 5U)) 
                                                                           | (0x1fU 
                                                                              & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 7U)))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 4U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__iresp 
                                                                >> 3U)))
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0xcU)) 
                                                                           << 0xcU))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x14U))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__iresp 
                                                                >> 3U)))
                                                     ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 2U)))
                                                      ? vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 1U)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->SimTop__DOT__iresp))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x1fU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__iresp 
                                                                                >> 0x14U))))))
                                                        : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1)
                                                       : vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1))))));
    vlSelf->SimTop__DOT__core__DOT__readData2_R = vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
        [(0x1fU & (IData)((vlSelf->SimTop__DOT__iresp 
                           >> 0x14U)))];
    vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control 
        = ((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                          >> 6U))) ? ((1U & (IData)(
                                                    (vlSelf->SimTop__DOT__iresp 
                                                     >> 5U)))
                                       ? ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__iresp 
                                                         >> 4U)))
                                           ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)
                                           : ((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__iresp 
                                                             >> 3U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__iresp 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand1)
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                   : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__iresp 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? 0x604U
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? 0x90U
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)))))
                                       : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
            : ((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__iresp 
                                                         >> 4U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__iresp 
                                                             >> 3U)))
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__iresp 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? 0x602U
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? 0x500U
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))))
                                           : ((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__iresp 
                                                             >> 3U)))
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__iresp 
                                                              >> 2U)))
                                                   ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? 0x220U
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)))))
                : ((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                  >> 4U))) ? ((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__iresp 
                                                             >> 3U)))
                                               ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__iresp 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? 0x601U
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__iresp 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SimTop__DOT__iresp))
                                                     ? 0x780U
                                                     : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                                    : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))))
                    : ((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                      >> 3U))) ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)
                        : ((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                          >> 2U))) ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)
                            : ((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                              >> 1U)))
                                ? ((1U & (IData)(vlSelf->SimTop__DOT__iresp))
                                    ? 0x640U : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2))
                                : (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2)))))));
    vlSelf->SimTop__DOT__core__DOT__aluControl = ((0x100U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                                   ? 
                                                  ((0x80U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__iresp 
                                                                >> 0x1eU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 0xeU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 0xaU
                                                        : 7U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand2)
                                                        : 2U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 0xeU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 8U
                                                        : 7U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 3U
                                                        : 2U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__iresp 
                                                                >> 0x1eU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 0xeU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 0xaU
                                                        : (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? (IData)(vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1)
                                                        : 6U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 0xeU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 0U
                                                        : 1U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 8U
                                                        : 7U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__iresp 
                                                                  >> 0xdU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
                                                        ? 5U
                                                        : 4U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__iresp 
                                                                   >> 0xcU)))
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
    vlSelf->SimTop__DOT__core__DOT__aluA = ((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                             ? 0ULL
                                             : ((1U 
                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                                 ? vlSelf->SimTop__DOT__core__DOT__PCaddress
                                                 : 
                                                vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                                [(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__iresp 
                                                             >> 0xfU)))]));
    vlSelf->SimTop__DOT__core__DOT__s_less = VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT__aluA, vlSelf->SimTop__DOT__core__DOT__aluB);
    vlSelf->SimTop__DOT__core__DOT__u_less = (vlSelf->SimTop__DOT__core__DOT__aluA 
                                              < vlSelf->SimTop__DOT__core__DOT__aluB);
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
    __Vtableidx1 = (((IData)(vlSelf->SimTop__DOT__core__DOT__u_BranchUnit__DOT____Vxrand1) 
                     << 7U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__u_less) 
                                << 6U) | (((IData)(vlSelf->SimTop__DOT__core__DOT__s_less) 
                                           << 5U) | 
                                          (((0ULL == vlSelf->SimTop__DOT__core__DOT__aluResult) 
                                            << 4U) 
                                           | ((0xeU 
                                               & ((IData)(
                                                          (vlSelf->SimTop__DOT__iresp 
                                                           >> 0xcU)) 
                                                  << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                                    >> 4U)))))));
    vlSelf->SimTop__DOT__core__DOT__Cnd = VSimTop__ConstPool__TABLE_f37f1103_0
        [__Vtableidx1];
    vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__readData2_R);
    vlSelf->SimTop__DOT__dreq[1U] = (IData)((vlSelf->SimTop__DOT__core__DOT__readData2_R 
                                             >> 0x20U));
    vlSelf->SimTop__DOT__dreq[2U] = (0x3ffU | ((IData)(vlSelf->SimTop__DOT__core__DOT__aluResult) 
                                               << 0xbU));
    vlSelf->SimTop__DOT__dreq[3U] = (((IData)(vlSelf->SimTop__DOT__core__DOT__aluResult) 
                                      >> 0x15U) | ((IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT__aluResult 
                                                            >> 0x20U)) 
                                                   << 0xbU));
    vlSelf->SimTop__DOT__dreq[4U] = (((IData)((0U != 
                                               (0x60U 
                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control)))) 
                                      << 0xbU) | ((IData)(
                                                          (vlSelf->SimTop__DOT__core__DOT__aluResult 
                                                           >> 0x20U)) 
                                                  >> 0x15U));
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
    __Vtemp102[3U] = ((0x3ffU & ((IData)((((QData)((IData)(
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
    __Vtemp102[4U] = ((0x3ffU & ((IData)(((((QData)((IData)(
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
    vlSelf->SimTop__DOT__dcreq[3U] = __Vtemp102[3U];
    vlSelf->SimTop__DOT__dcreq[4U] = __Vtemp102[4U];
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

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    VSimTop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__oreq);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__oresp);
    vlSelf->SimTop__DOT__trint = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__swint = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__exint = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__iresp = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(140, vlSelf->SimTop__DOT__dreq);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__icreq);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__dcreq);
    VL_RAND_RESET_W(132, vlSelf->SimTop__DOT____Vcellout__mux__iresps);
    VL_RAND_RESET_W(302, vlSelf->SimTop__DOT____Vcellinp__mux__ireqs);
    vlSelf->SimTop__DOT__core__DOT__PCnext = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__PCaddress = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__Cnd = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__aluResult = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->SimTop__DOT__core__DOT__retReg);
    vlSelf->SimTop__DOT__core__DOT__readData2_R = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__aluControl = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__core__DOT__aluA = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__aluB = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__s_less = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__u_less = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand2 = VL_RAND_RESET_I(11);
    vlSelf->SimTop__DOT__core__DOT__u_Control__DOT____Vxrand1 = VL_RAND_RESET_I(11);
    vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control = VL_RAND_RESET_I(11);
    vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__core__DOT__u_ImmGen__DOT____Vxrand1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand2 = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__core__DOT__u_ALUControl__DOT____Vxrand1 = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__core__DOT__u_ALU__DOT____Vxrand1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__core__DOT__u_BranchUnit__DOT____Vxrand1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__icvt__DOT__dresp);
    vlSelf->SimTop__DOT__mux__DOT____Vxrand3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand2);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand1);
    vlSelf->SimTop__DOT__mux__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mux__DOT__index = 0;
    vlSelf->SimTop__DOT__mux__DOT__select = 0;
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT__saved_req);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT__selected_req);
    vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__mux__DOT____Vlvbound4);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__ram__DOT__saved_oreq);
    vlSelf->SimTop__DOT__ram__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__ram__DOT__count_down = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__ram__DOT__size = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__ram__DOT__addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__idx = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__wrap1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__wrap2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__cyc_cnt = 0;
    vlSelf->SimTop__DOT__ram__DOT__ms_cnt = 0;
    vlSelf->SimTop__DOT__ram__DOT__wmask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ram__DOT__msip = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_get_switch__5__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__6__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
