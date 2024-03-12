// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+1,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x15U))));
            tracep->chgCData(oldp+3,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))),3);
            tracep->chgQData(oldp+4,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[4U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[3U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[2U])) 
                                        >> 0x12U)))),64);
            tracep->chgCData(oldp+6,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                               >> 0xaU))),8);
            tracep->chgQData(oldp+7,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[2U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[1U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[0U])) 
                                        >> 0xaU)))),64);
            tracep->chgCData(oldp+9,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U))),8);
            tracep->chgCData(oldp+10,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
            tracep->chgBit(oldp+11,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+12,((1U & vlSelf->SimTop__DOT__oresp[2U])));
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oresp[0U])))),64);
            tracep->chgBit(oldp+15,(vlSelf->SimTop__DOT__trint));
            tracep->chgBit(oldp+16,(vlSelf->SimTop__DOT__swint));
            tracep->chgBit(oldp+17,(vlSelf->SimTop__DOT__exint));
            tracep->chgQData(oldp+18,(vlSelf->SimTop__DOT__core__DOT__PCaddress),64);
            tracep->chgBit(oldp+20,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+21,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+22,((IData)(vlSelf->SimTop__DOT__iresp)),32);
            tracep->chgBit(oldp+23,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                           >> 0xbU))));
            tracep->chgQData(oldp+24,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[4U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[2U])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+26,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                             >> 8U))),3);
            tracep->chgCData(oldp+27,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+28,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+30,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                            >> 1U) 
                                           & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
            tracep->chgQData(oldp+31,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgBit(oldp+33,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+34,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+35,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+36,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+38,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+39,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__icreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+41,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+42,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
            tracep->chgBit(oldp+43,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+44,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+45,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+46,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+48,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+49,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dcreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+51,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+52,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
            tracep->chgBit(oldp+53,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 3U))));
            tracep->chgBit(oldp+54,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 2U))));
            tracep->chgQData(oldp+55,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                           >> 2U)))),64);
            tracep->chgBit(oldp+57,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+58,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
            tracep->chgQData(oldp+59,(((4U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                        ? vlSelf->SimTop__DOT__core__DOT__aluResult
                                        : ((1U & (((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                                   >> 3U) 
                                                  | (IData)(vlSelf->SimTop__DOT__core__DOT__Cnd)))
                                            ? (vlSelf->SimTop__DOT__core__DOT__PCaddress 
                                               + vlSelf->SimTop__DOT__core__DOT__imm)
                                            : (4ULL 
                                               + vlSelf->SimTop__DOT__core__DOT__PCaddress)))),64);
            tracep->chgQData(oldp+61,(vlSelf->SimTop__DOT__core__DOT__PCaddress),64);
            tracep->chgQData(oldp+63,((4ULL + vlSelf->SimTop__DOT__core__DOT__PCaddress)),64);
            tracep->chgBit(oldp+65,(vlSelf->SimTop__DOT__core__DOT__Cnd));
            tracep->chgBit(oldp+66,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 3U))));
            tracep->chgBit(oldp+67,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 2U))));
            tracep->chgQData(oldp+68,(vlSelf->SimTop__DOT__core__DOT__imm),64);
            tracep->chgQData(oldp+70,(vlSelf->SimTop__DOT__core__DOT__aluResult),64);
            tracep->chgBit(oldp+72,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+73,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 9U))));
            tracep->chgCData(oldp+74,((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                             >> 7U))),2);
            tracep->chgBit(oldp+75,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 6U))));
            tracep->chgBit(oldp+76,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 5U))));
            tracep->chgBit(oldp+77,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 4U))));
            tracep->chgBit(oldp+78,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                           >> 1U))));
            tracep->chgBit(oldp+79,((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))));
            tracep->chgQData(oldp+80,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x3fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x3eU])))),64);
            tracep->chgQData(oldp+82,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x3dU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x3cU])))),64);
            tracep->chgQData(oldp+84,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x3bU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x3aU])))),64);
            tracep->chgQData(oldp+86,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x39U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x38U])))),64);
            tracep->chgQData(oldp+88,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x37U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x36U])))),64);
            tracep->chgQData(oldp+90,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x35U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x34U])))),64);
            tracep->chgQData(oldp+92,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x33U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x32U])))),64);
            tracep->chgQData(oldp+94,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x31U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x30U])))),64);
            tracep->chgQData(oldp+96,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x2fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x2eU])))),64);
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__retReg[0x2dU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__retReg[0x2cU])))),64);
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x2aU])))),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x28U])))),64);
            tracep->chgQData(oldp+104,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x26U])))),64);
            tracep->chgQData(oldp+106,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x24U])))),64);
            tracep->chgQData(oldp+108,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x22U])))),64);
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x20U])))),64);
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x1eU])))),64);
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x1cU])))),64);
            tracep->chgQData(oldp+116,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x1aU])))),64);
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x18U])))),64);
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x16U])))),64);
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x14U])))),64);
            tracep->chgQData(oldp+124,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x12U])))),64);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0x10U])))),64);
            tracep->chgQData(oldp+128,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0xeU])))),64);
            tracep->chgQData(oldp+130,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0xcU])))),64);
            tracep->chgQData(oldp+132,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0xaU])))),64);
            tracep->chgQData(oldp+134,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[8U])))),64);
            tracep->chgQData(oldp+136,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[6U])))),64);
            tracep->chgQData(oldp+138,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[4U])))),64);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[2U])))),64);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__retReg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__retReg[0U])))),64);
            tracep->chgQData(oldp+144,(((IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))))
                                         ? (4ULL + vlSelf->SimTop__DOT__core__DOT__PCaddress)
                                         : ((0x40U 
                                             & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))
                                             : vlSelf->SimTop__DOT__core__DOT__aluResult))),64);
            tracep->chgQData(oldp+146,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                       [(0x1fU & (IData)(
                                                         (vlSelf->SimTop__DOT__iresp 
                                                          >> 0xfU)))]),64);
            tracep->chgQData(oldp+148,(vlSelf->SimTop__DOT__core__DOT__readData2_R),64);
            tracep->chgCData(oldp+150,(vlSelf->SimTop__DOT__core__DOT__aluControl),4);
            tracep->chgQData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__aluA),64);
            tracep->chgQData(oldp+153,(vlSelf->SimTop__DOT__core__DOT__aluB),64);
            tracep->chgBit(oldp+155,((0ULL == vlSelf->SimTop__DOT__core__DOT__aluResult)));
            tracep->chgBit(oldp+156,(vlSelf->SimTop__DOT__core__DOT__s_less));
            tracep->chgBit(oldp+157,(vlSelf->SimTop__DOT__core__DOT__u_less));
            tracep->chgCData(oldp+158,((0x7fU & (IData)(vlSelf->SimTop__DOT__iresp))),7);
            tracep->chgSData(oldp+159,(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control),11);
            tracep->chgCData(oldp+160,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__iresp 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+161,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__iresp 
                                                         >> 0x14U)))),5);
            tracep->chgCData(oldp+162,((0x1fU & (IData)(
                                                        (vlSelf->SimTop__DOT__iresp 
                                                         >> 7U)))),5);
            tracep->chgQData(oldp+163,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0]),64);
            tracep->chgQData(oldp+165,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[1]),64);
            tracep->chgQData(oldp+167,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[2]),64);
            tracep->chgQData(oldp+169,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[3]),64);
            tracep->chgQData(oldp+171,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[4]),64);
            tracep->chgQData(oldp+173,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[5]),64);
            tracep->chgQData(oldp+175,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[6]),64);
            tracep->chgQData(oldp+177,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[7]),64);
            tracep->chgQData(oldp+179,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[8]),64);
            tracep->chgQData(oldp+181,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[9]),64);
            tracep->chgQData(oldp+183,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[10]),64);
            tracep->chgQData(oldp+185,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[11]),64);
            tracep->chgQData(oldp+187,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[12]),64);
            tracep->chgQData(oldp+189,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[13]),64);
            tracep->chgQData(oldp+191,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[14]),64);
            tracep->chgQData(oldp+193,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[15]),64);
            tracep->chgQData(oldp+195,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[16]),64);
            tracep->chgQData(oldp+197,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[17]),64);
            tracep->chgQData(oldp+199,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[18]),64);
            tracep->chgQData(oldp+201,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[19]),64);
            tracep->chgQData(oldp+203,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[20]),64);
            tracep->chgQData(oldp+205,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[21]),64);
            tracep->chgQData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[22]),64);
            tracep->chgQData(oldp+209,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[23]),64);
            tracep->chgQData(oldp+211,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[24]),64);
            tracep->chgQData(oldp+213,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[25]),64);
            tracep->chgQData(oldp+215,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[26]),64);
            tracep->chgQData(oldp+217,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[27]),64);
            tracep->chgQData(oldp+219,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[28]),64);
            tracep->chgQData(oldp+221,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[29]),64);
            tracep->chgQData(oldp+223,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[30]),64);
            tracep->chgQData(oldp+225,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[31]),64);
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__iresp 
                                                    >> 0x1eU)))));
            tracep->chgCData(oldp+228,((7U & (IData)(
                                                     (vlSelf->SimTop__DOT__iresp 
                                                      >> 0xcU)))),3);
            tracep->chgBit(oldp+229,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+230,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+231,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+233,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                             >> 3U) 
                                            & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+234,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+235,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+236,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+239,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+240,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+242,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+243,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+244,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+245,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+246,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+247,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+249,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+250,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+252,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+253,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+254,(vlSelf->SimTop__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+255,(vlSelf->SimTop__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+256,(vlSelf->SimTop__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+257,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+258,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+259,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+260,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+262,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+263,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+265,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+266,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+267,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+268,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+269,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+270,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+272,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+273,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+275,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+276,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+277,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+278,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+279,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+280,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+281,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+282,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+284,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+285,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+287,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+288,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+289,(vlSelf->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+290,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+291,(vlSelf->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+292,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+294,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+296,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+298,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+300,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+302,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+304,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+306,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
            tracep->chgQData(oldp+308,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
            tracep->chgBit(oldp+310,(vlSelf->SimTop__DOT__ram__DOT__msip));
        }
        tracep->chgBit(oldp+311,(vlSelf->clock));
        tracep->chgBit(oldp+312,(vlSelf->reset));
        tracep->chgQData(oldp+313,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+315,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+317,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+319,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+320,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+321,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+322,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+323,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+324,(vlSelf->io_uart_in_ch),8);
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
