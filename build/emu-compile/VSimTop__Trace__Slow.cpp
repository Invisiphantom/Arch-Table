// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+312,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+313,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+314,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+316,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+318,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+320,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+321,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+322,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+323,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+324,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+325,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+312,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+313,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+314,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+318,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+320,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+321,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+322,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+323,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+324,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+325,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+2,"SimTop oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+3,"SimTop oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MSIZE1", "MSIZE2", "MSIZE4", "MSIZE8"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "common::msize_t", 4, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+4,"SimTop oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MLEN1", "MLEN2", "MLEN4", "MLEN8", 
                                                "MLEN16", 
                                                "MLEN32", 
                                                "MLEN64", 
                                                "MLEN128", 
                                                "MLEN256"};
            const char* __VenumItemValues[]
            = {"0", "1", "11", "111", "1111", "11111", 
                                                "111111", 
                                                "1111111", 
                                                "11111111"};
            tracep->declDTypeEnum(2, "common::mlen_t", 9, 8, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+10,"SimTop oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {
            const char* __VenumItemNames[]
            = {"AXI_BURST_FIXED", "AXI_BURST_INCR", 
                                                "AXI_BURST_WRAP", 
                                                "AXI_BURST_RESERVED"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(3, "common::axi_burst_type_t", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+11,"SimTop oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop oresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+13,"SimTop oresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+14,"SimTop oresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop trint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+17,"SimTop swint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"SimTop exint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+326,"SimTop ireq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+19,"SimTop ireq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop iresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+22,"SimTop iresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+23,"SimTop iresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+24,"SimTop dreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+25,"SimTop dreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop dreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop dreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop dreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+31,"SimTop dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+32,"SimTop dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+34,"SimTop icreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+35,"SimTop icreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+36,"SimTop icreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+37,"SimTop icreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+39,"SimTop icreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+40,"SimTop icreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+42,"SimTop icreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+43,"SimTop icreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+44,"SimTop dcreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+45,"SimTop dcreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+46,"SimTop dcreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+47,"SimTop dcreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+49,"SimTop dcreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+50,"SimTop dcreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+52,"SimTop dcreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+53,"SimTop dcreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+54,"SimTop icresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+55,"SimTop icresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+56,"SimTop icresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+58,"SimTop dcresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+59,"SimTop dcresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+32,"SimTop dcresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+312,"SimTop core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+313,"SimTop core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+326,"SimTop core ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop core ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop core iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop core iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop core iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+24,"SimTop core dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop core dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop core dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop core dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop core dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop core dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"SimTop core dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+32,"SimTop core dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop core trint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop core swint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop core exint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+60,"SimTop core PCnext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop core PCaddress",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+64,"SimTop core PCincre",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+327,"SimTop core Halt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"SimTop core Cnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"SimTop core Jump",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"SimTop core JumpReg",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+69,"SimTop core imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop core aluResult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+23,"SimTop core instruction",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+73,"SimTop core RegWrite",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+74,"SimTop core ALUSrc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+75,"SimTop core ALUOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+76,"SimTop core MemRead",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"SimTop core MemWrite",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"SimTop core Branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"SimTop core Lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+80,"SimTop core Auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+81,"SimTop core retReg\206 x0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+83,"SimTop core retReg\206 x1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core retReg\206 x2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core retReg\206 x3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+89,"SimTop core retReg\206 x4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+91,"SimTop core retReg\206 x5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop core retReg\206 x6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+95,"SimTop core retReg\206 x7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+97,"SimTop core retReg\206 x8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+99,"SimTop core retReg\206 x9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core retReg\206 x10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core retReg\206 x11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+105,"SimTop core retReg\206 x12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+107,"SimTop core retReg\206 x13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+109,"SimTop core retReg\206 x14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop core retReg\206 x15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop core retReg\206 x16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core retReg\206 x17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+117,"SimTop core retReg\206 x18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+119,"SimTop core retReg\206 x19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core retReg\206 x20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core retReg\206 x21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+125,"SimTop core retReg\206 x22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+127,"SimTop core retReg\206 x23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+129,"SimTop core retReg\206 x24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+131,"SimTop core retReg\206 x25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+133,"SimTop core retReg\206 x26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+135,"SimTop core retReg\206 x27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+137,"SimTop core retReg\206 x28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+139,"SimTop core retReg\206 x29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core retReg\206 x30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop core retReg\206 x31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+145,"SimTop core writeData_R",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+147,"SimTop core readData1_R",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop core readData2_R",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+151,"SimTop core aluControl",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declQuad(c+152,"SimTop core aluA",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop core aluB",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+156,"SimTop core zero",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+157,"SimTop core s_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"SimTop core u_less",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+32,"SimTop core readData_M",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+312,"SimTop core u_PC clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+60,"SimTop core u_PC PCnext",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop core u_PC PCaddress",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop core u_PCIncre PCaddress",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+64,"SimTop core u_PCIncre PCincre",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop core u_PCNext PCaddress",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+64,"SimTop core u_PCNext PCincre",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+327,"SimTop core u_PCNext Halt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"SimTop core u_PCNext Cnd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"SimTop core u_PCNext Jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"SimTop core u_PCNext JumpReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+69,"SimTop core u_PCNext imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop core u_PCNext aluResult",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+60,"SimTop core u_PCNext PCnext",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop core u_InstMem PCaddress",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+23,"SimTop core u_InstMem instruction",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+326,"SimTop core u_InstMem ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop core u_InstMem ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop core u_InstMem iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop core u_InstMem iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop core u_InstMem iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+159,"SimTop core u_Control Opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+73,"SimTop core u_Control RegWrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+74,"SimTop core u_Control ALUSrc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+75,"SimTop core u_Control ALUOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+76,"SimTop core u_Control MemRead",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"SimTop core u_Control MemWrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"SimTop core u_Control Branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"SimTop core u_Control Jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"SimTop core u_Control JumpReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"SimTop core u_Control Lui",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+80,"SimTop core u_Control Auipc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+327,"SimTop core u_Control Halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+160,"SimTop core u_Control control",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
        tracep->declBit(c+312,"SimTop core u_Regs clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"SimTop core u_Regs RegWrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+161,"SimTop core u_Regs readReg1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+162,"SimTop core u_Regs readReg2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+163,"SimTop core u_Regs writeReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+145,"SimTop core u_Regs writeData_R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+147,"SimTop core u_Regs readData1_R",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop core u_Regs readData2_R",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+81,"SimTop core u_Regs retReg\206 x0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+83,"SimTop core u_Regs retReg\206 x1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core u_Regs retReg\206 x2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core u_Regs retReg\206 x3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+89,"SimTop core u_Regs retReg\206 x4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+91,"SimTop core u_Regs retReg\206 x5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop core u_Regs retReg\206 x6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+95,"SimTop core u_Regs retReg\206 x7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+97,"SimTop core u_Regs retReg\206 x8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+99,"SimTop core u_Regs retReg\206 x9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core u_Regs retReg\206 x10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core u_Regs retReg\206 x11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+105,"SimTop core u_Regs retReg\206 x12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+107,"SimTop core u_Regs retReg\206 x13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+109,"SimTop core u_Regs retReg\206 x14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop core u_Regs retReg\206 x15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop core u_Regs retReg\206 x16",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core u_Regs retReg\206 x17",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+117,"SimTop core u_Regs retReg\206 x18",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+119,"SimTop core u_Regs retReg\206 x19",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core u_Regs retReg\206 x20",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core u_Regs retReg\206 x21",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+125,"SimTop core u_Regs retReg\206 x22",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+127,"SimTop core u_Regs retReg\206 x23",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+129,"SimTop core u_Regs retReg\206 x24",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+131,"SimTop core u_Regs retReg\206 x25",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+133,"SimTop core u_Regs retReg\206 x26",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+135,"SimTop core u_Regs retReg\206 x27",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+137,"SimTop core u_Regs retReg\206 x28",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+139,"SimTop core u_Regs retReg\206 x29",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core u_Regs retReg\206 x30",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop core u_Regs retReg\206 x31",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1,"SimTop core u_Regs i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+164+i*2,"SimTop core u_Regs Register",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 63,0);}}
        tracep->declBus(c+23,"SimTop core u_ImmGen instruction",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+69,"SimTop core u_ImmGen imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+159,"SimTop core u_ImmGen Opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+75,"SimTop core u_ALUControl ALUOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+228,"SimTop core u_ALUControl funct7_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+229,"SimTop core u_ALUControl funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+151,"SimTop core u_ALUControl aluControl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+79,"SimTop core u_ALU_A Lui",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+80,"SimTop core u_ALU_A Auipc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+147,"SimTop core u_ALU_A readData1_R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop core u_ALU_A PCaddress",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop core u_ALU_A aluA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+74,"SimTop core u_ALU_B ALUSrc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+149,"SimTop core u_ALU_B readData2_R",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+69,"SimTop core u_ALU_B imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop core u_ALU_B aluB",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+151,"SimTop core u_ALU aluControl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declQuad(c+152,"SimTop core u_ALU aluA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop core u_ALU aluB",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop core u_ALU aluResult",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+156,"SimTop core u_ALU zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+157,"SimTop core u_ALU s_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"SimTop core u_ALU u_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"SimTop core u_BranchUnit Branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+156,"SimTop core u_BranchUnit zero",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+157,"SimTop core u_BranchUnit s_less",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"SimTop core u_BranchUnit u_less",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+229,"SimTop core u_BranchUnit funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+66,"SimTop core u_BranchUnit Cnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+312,"SimTop core u_Mem clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+76,"SimTop core u_Mem MemRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"SimTop core u_Mem MemWrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+229,"SimTop core u_Mem funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+71,"SimTop core u_Mem memAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+149,"SimTop core u_Mem writeData_M",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop core u_Mem readData_M",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+24,"SimTop core u_Mem dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop core u_Mem dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop core u_Mem dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop core u_Mem dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop core u_Mem dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop core u_Mem dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"SimTop core u_Mem dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+32,"SimTop core u_Mem dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+76,"SimTop core u_RegWrite MemRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"SimTop core u_RegWrite Jump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"SimTop core u_RegWrite JumpReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+71,"SimTop core u_RegWrite aluResult",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+32,"SimTop core u_RegWrite readData_M",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+64,"SimTop core u_RegWrite PCincre",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+145,"SimTop core u_RegWrite writeData_R",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+312,"SimTop core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+328,"SimTop core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+328,"SimTop core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+326,"SimTop core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+329,"SimTop core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+331,"SimTop core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+327,"SimTop core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+327,"SimTop core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+327,"SimTop core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+327,"SimTop core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+328,"SimTop core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+332,"SimTop core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+312,"SimTop core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+328,"SimTop core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+81,"SimTop core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+83,"SimTop core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+89,"SimTop core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+91,"SimTop core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+93,"SimTop core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+95,"SimTop core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+97,"SimTop core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+99,"SimTop core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+105,"SimTop core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+107,"SimTop core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+109,"SimTop core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+113,"SimTop core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+115,"SimTop core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+117,"SimTop core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+119,"SimTop core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+121,"SimTop core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+123,"SimTop core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+125,"SimTop core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+127,"SimTop core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+129,"SimTop core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+131,"SimTop core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+133,"SimTop core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+135,"SimTop core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+137,"SimTop core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+139,"SimTop core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+141,"SimTop core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+312,"SimTop core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+328,"SimTop core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+327,"SimTop core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+334,"SimTop core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+332,"SimTop core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+312,"SimTop core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+328,"SimTop core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+335,"SimTop core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+326,"SimTop icvt ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop icvt ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop icvt iresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop icvt iresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop icvt iresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+34,"SimTop icvt icreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+35,"SimTop icvt icreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+36,"SimTop icvt icreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+37,"SimTop icvt icreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+39,"SimTop icvt icreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+40,"SimTop icvt icreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+42,"SimTop icvt icreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+43,"SimTop icvt icreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+54,"SimTop icvt icresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"SimTop icvt icresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+56,"SimTop icvt icresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+230,"SimTop icvt dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+231,"SimTop icvt dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+232,"SimTop icvt dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+326,"SimTop icvt inst dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop icvt inst dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+336,"SimTop icvt inst dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+337,"SimTop icvt inst dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+338,"SimTop icvt inst dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+230,"SimTop icvt inst dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+231,"SimTop icvt inst dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+232,"SimTop icvt inst dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+34,"SimTop icvt inst dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+35,"SimTop icvt inst dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+36,"SimTop icvt inst dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+37,"SimTop icvt inst dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+39,"SimTop icvt inst dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+40,"SimTop icvt inst dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+42,"SimTop icvt inst dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+43,"SimTop icvt inst dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+54,"SimTop icvt inst dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"SimTop icvt inst dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+56,"SimTop icvt inst dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+234,"SimTop icvt inst okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+24,"SimTop dcvt dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop dcvt dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop dcvt dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop dcvt dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop dcvt dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop dcvt dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"SimTop dcvt dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+32,"SimTop dcvt dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+44,"SimTop dcvt dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+45,"SimTop dcvt dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+46,"SimTop dcvt dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+47,"SimTop dcvt dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+49,"SimTop dcvt dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+50,"SimTop dcvt dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+52,"SimTop dcvt dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+53,"SimTop dcvt dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+58,"SimTop dcvt dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+59,"SimTop dcvt dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+32,"SimTop dcvt dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop dcvt okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+312,"SimTop mux clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+313,"SimTop mux reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+235,"SimTop mux ireqs(0)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"SimTop mux ireqs(0)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+237,"SimTop mux ireqs(0)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+238,"SimTop mux ireqs(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+240,"SimTop mux ireqs(0)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+241,"SimTop mux ireqs(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+243,"SimTop mux ireqs(0)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+244,"SimTop mux ireqs(0)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+245,"SimTop mux ireqs(1)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+246,"SimTop mux ireqs(1)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+247,"SimTop mux ireqs(1)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+248,"SimTop mux ireqs(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+250,"SimTop mux ireqs(1)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+251,"SimTop mux ireqs(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+253,"SimTop mux ireqs(1)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+254,"SimTop mux ireqs(1)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+58,"SimTop mux iresps(0)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+59,"SimTop mux iresps(0)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+32,"SimTop mux iresps(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+54,"SimTop mux iresps(1)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"SimTop mux iresps(1)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+56,"SimTop mux iresps(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+2,"SimTop mux oreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"SimTop mux oreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+4,"SimTop mux oreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop mux oreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop mux oreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop mux oreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop mux oreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+11,"SimTop mux oreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop mux oresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"SimTop mux oresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+14,"SimTop mux oresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+255,"SimTop mux busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+256,"SimTop mux index",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+257,"SimTop mux select",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+258,"SimTop mux saved_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+259,"SimTop mux saved_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+260,"SimTop mux saved_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+261,"SimTop mux saved_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+263,"SimTop mux saved_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+264,"SimTop mux saved_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+266,"SimTop mux saved_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+267,"SimTop mux saved_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+268,"SimTop mux selected_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+269,"SimTop mux selected_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+270,"SimTop mux selected_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+271,"SimTop mux selected_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+273,"SimTop mux selected_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+274,"SimTop mux selected_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+276,"SimTop mux selected_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+277,"SimTop mux selected_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+278,"SimTop mux unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+279,"SimTop mux unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+312,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+313,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop ram oreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"SimTop ram oreq\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+4,"SimTop ram oreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+5,"SimTop ram oreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+7,"SimTop ram oreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+8,"SimTop ram oreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+10,"SimTop ram oreq\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+11,"SimTop ram oreq\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+12,"SimTop ram oresp\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"SimTop ram oresp\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+14,"SimTop ram oresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+16,"SimTop ram trint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop ram swint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop ram exint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+280,"SimTop ram saved_oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+281,"SimTop ram saved_oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+282,"SimTop ram saved_oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+283,"SimTop ram saved_oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+285,"SimTop ram saved_oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+286,"SimTop ram saved_oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+288,"SimTop ram saved_oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+289,"SimTop ram saved_oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"NONE", "WAIT", "READ", "WRITE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(4, "RAMHelper2.__typeimpenum10", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+290,"SimTop ram state",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+291,"SimTop ram count_down",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+292,"SimTop ram size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declQuad(c+293,"SimTop ram addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+295,"SimTop ram idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+297,"SimTop ram wrap1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+299,"SimTop ram wrap2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+301,"SimTop ram cyc_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+303,"SimTop ram ms_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+305,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+307,"SimTop ram mtime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+309,"SimTop ram mtimecmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+311,"SimTop ram msip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__i),32);
        tracep->fullBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+3,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x15U))));
        tracep->fullCData(oldp+4,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                         >> 0x12U))),3);
        tracep->fullQData(oldp+5,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U)))),64);
        tracep->fullCData(oldp+7,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                            >> 0xaU))),8);
        tracep->fullQData(oldp+8,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[1U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[0U])) 
                                                    >> 0xaU)))),64);
        tracep->fullCData(oldp+10,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+11,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
        tracep->fullBit(oldp+12,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+13,((1U & vlSelf->SimTop__DOT__oresp[2U])));
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__oresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__oresp[0U])))),64);
        tracep->fullBit(oldp+16,(vlSelf->SimTop__DOT__trint));
        tracep->fullBit(oldp+17,(vlSelf->SimTop__DOT__swint));
        tracep->fullBit(oldp+18,(vlSelf->SimTop__DOT__exint));
        tracep->fullQData(oldp+19,(vlSelf->SimTop__DOT__core__DOT__PCaddress),64);
        tracep->fullBit(oldp+21,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+22,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x20U)))));
        tracep->fullIData(oldp+23,((IData)(vlSelf->SimTop__DOT__iresp)),32);
        tracep->fullBit(oldp+24,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                        >> 0xbU))));
        tracep->fullQData(oldp+25,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[4U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[3U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[2U])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+27,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+28,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+29,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+31,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                         >> 1U) & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
        tracep->fullQData(oldp+32,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
        tracep->fullBit(oldp+34,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+35,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+36,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+37,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+39,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+40,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+42,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+43,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
        tracep->fullBit(oldp+44,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+45,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+46,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+49,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+50,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+52,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+53,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
        tracep->fullBit(oldp+54,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 3U))));
        tracep->fullBit(oldp+55,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 2U))));
        tracep->fullQData(oldp+56,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                     >> 2U)))),64);
        tracep->fullBit(oldp+58,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+59,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
        tracep->fullQData(oldp+60,(((4U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                     ? vlSelf->SimTop__DOT__core__DOT__aluResult
                                     : ((1U & (((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                                >> 3U) 
                                               | (IData)(vlSelf->SimTop__DOT__core__DOT__Cnd)))
                                         ? (vlSelf->SimTop__DOT__core__DOT__PCaddress 
                                            + vlSelf->SimTop__DOT__core__DOT__imm)
                                         : (4ULL + vlSelf->SimTop__DOT__core__DOT__PCaddress)))),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__PCaddress),64);
        tracep->fullQData(oldp+64,((4ULL + vlSelf->SimTop__DOT__core__DOT__PCaddress)),64);
        tracep->fullBit(oldp+66,(vlSelf->SimTop__DOT__core__DOT__Cnd));
        tracep->fullBit(oldp+67,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 3U))));
        tracep->fullBit(oldp+68,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 2U))));
        tracep->fullQData(oldp+69,(vlSelf->SimTop__DOT__core__DOT__imm),64);
        tracep->fullQData(oldp+71,(vlSelf->SimTop__DOT__core__DOT__aluResult),64);
        tracep->fullBit(oldp+73,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 0xaU))));
        tracep->fullBit(oldp+74,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 9U))));
        tracep->fullCData(oldp+75,((3U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                          >> 7U))),2);
        tracep->fullBit(oldp+76,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 6U))));
        tracep->fullBit(oldp+77,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 5U))));
        tracep->fullBit(oldp+78,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 4U))));
        tracep->fullBit(oldp+79,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control) 
                                        >> 1U))));
        tracep->fullBit(oldp+80,((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))));
        tracep->fullQData(oldp+81,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x3fU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x3eU])))),64);
        tracep->fullQData(oldp+83,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x3dU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x3cU])))),64);
        tracep->fullQData(oldp+85,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x3bU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x3aU])))),64);
        tracep->fullQData(oldp+87,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x39U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x38U])))),64);
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x37U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x36U])))),64);
        tracep->fullQData(oldp+91,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x35U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x34U])))),64);
        tracep->fullQData(oldp+93,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x33U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x32U])))),64);
        tracep->fullQData(oldp+95,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x31U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x30U])))),64);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x2fU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x2eU])))),64);
        tracep->fullQData(oldp+99,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__retReg[0x2dU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__retReg[0x2cU])))),64);
        tracep->fullQData(oldp+101,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x2aU])))),64);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x28U])))),64);
        tracep->fullQData(oldp+105,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x26U])))),64);
        tracep->fullQData(oldp+107,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x24U])))),64);
        tracep->fullQData(oldp+109,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x22U])))),64);
        tracep->fullQData(oldp+111,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x20U])))),64);
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x1eU])))),64);
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x1cU])))),64);
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x1aU])))),64);
        tracep->fullQData(oldp+119,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x18U])))),64);
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x16U])))),64);
        tracep->fullQData(oldp+123,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x14U])))),64);
        tracep->fullQData(oldp+125,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x12U])))),64);
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0x10U])))),64);
        tracep->fullQData(oldp+129,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0xeU])))),64);
        tracep->fullQData(oldp+131,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0xcU])))),64);
        tracep->fullQData(oldp+133,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0xaU])))),64);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[8U])))),64);
        tracep->fullQData(oldp+137,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[6U])))),64);
        tracep->fullQData(oldp+139,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[4U])))),64);
        tracep->fullQData(oldp+141,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[2U])))),64);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__retReg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__retReg[0U])))),64);
        tracep->fullQData(oldp+145,(((IData)((0U != 
                                              (0xcU 
                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))))
                                      ? (4ULL + vlSelf->SimTop__DOT__core__DOT__PCaddress)
                                      : ((0x40U & (IData)(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control))
                                          ? (((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))
                                          : vlSelf->SimTop__DOT__core__DOT__aluResult))),64);
        tracep->fullQData(oldp+147,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register
                                    [(0x1fU & (IData)(
                                                      (vlSelf->SimTop__DOT__iresp 
                                                       >> 0xfU)))]),64);
        tracep->fullQData(oldp+149,(vlSelf->SimTop__DOT__core__DOT__readData2_R),64);
        tracep->fullCData(oldp+151,(vlSelf->SimTop__DOT__core__DOT__aluControl),4);
        tracep->fullQData(oldp+152,(vlSelf->SimTop__DOT__core__DOT__aluA),64);
        tracep->fullQData(oldp+154,(vlSelf->SimTop__DOT__core__DOT__aluB),64);
        tracep->fullBit(oldp+156,((0ULL == vlSelf->SimTop__DOT__core__DOT__aluResult)));
        tracep->fullBit(oldp+157,(vlSelf->SimTop__DOT__core__DOT__s_less));
        tracep->fullBit(oldp+158,(vlSelf->SimTop__DOT__core__DOT__u_less));
        tracep->fullCData(oldp+159,((0x7fU & (IData)(vlSelf->SimTop__DOT__iresp))),7);
        tracep->fullSData(oldp+160,(vlSelf->SimTop__DOT__core__DOT__u_Control__DOT__control),11);
        tracep->fullCData(oldp+161,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__iresp 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+162,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__iresp 
                                                      >> 0x14U)))),5);
        tracep->fullCData(oldp+163,((0x1fU & (IData)(
                                                     (vlSelf->SimTop__DOT__iresp 
                                                      >> 7U)))),5);
        tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[0]),64);
        tracep->fullQData(oldp+166,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[1]),64);
        tracep->fullQData(oldp+168,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[2]),64);
        tracep->fullQData(oldp+170,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[3]),64);
        tracep->fullQData(oldp+172,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[4]),64);
        tracep->fullQData(oldp+174,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[5]),64);
        tracep->fullQData(oldp+176,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[6]),64);
        tracep->fullQData(oldp+178,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[7]),64);
        tracep->fullQData(oldp+180,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[8]),64);
        tracep->fullQData(oldp+182,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[9]),64);
        tracep->fullQData(oldp+184,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[10]),64);
        tracep->fullQData(oldp+186,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[11]),64);
        tracep->fullQData(oldp+188,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[12]),64);
        tracep->fullQData(oldp+190,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[13]),64);
        tracep->fullQData(oldp+192,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[14]),64);
        tracep->fullQData(oldp+194,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[15]),64);
        tracep->fullQData(oldp+196,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[16]),64);
        tracep->fullQData(oldp+198,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[17]),64);
        tracep->fullQData(oldp+200,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[18]),64);
        tracep->fullQData(oldp+202,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[19]),64);
        tracep->fullQData(oldp+204,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[20]),64);
        tracep->fullQData(oldp+206,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[21]),64);
        tracep->fullQData(oldp+208,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[22]),64);
        tracep->fullQData(oldp+210,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[23]),64);
        tracep->fullQData(oldp+212,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[24]),64);
        tracep->fullQData(oldp+214,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[25]),64);
        tracep->fullQData(oldp+216,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[26]),64);
        tracep->fullQData(oldp+218,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[27]),64);
        tracep->fullQData(oldp+220,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[28]),64);
        tracep->fullQData(oldp+222,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[29]),64);
        tracep->fullQData(oldp+224,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[30]),64);
        tracep->fullQData(oldp+226,(vlSelf->SimTop__DOT__core__DOT__u_Regs__DOT__Register[31]),64);
        tracep->fullBit(oldp+228,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                 >> 0x1eU)))));
        tracep->fullCData(oldp+229,((7U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0xcU)))),3);
        tracep->fullBit(oldp+230,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+231,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
        tracep->fullQData(oldp+232,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+234,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 3U) & 
                                         (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 2U)))));
        tracep->fullBit(oldp+235,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+236,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+237,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+238,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+240,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+241,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+243,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+244,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
        tracep->fullBit(oldp+245,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+246,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+247,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                           >> 9U))),3);
        tracep->fullQData(oldp+248,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                      << 0x37U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                                      >> 9U)))),64);
        tracep->fullCData(oldp+250,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                              >> 1U))),8);
        tracep->fullQData(oldp+251,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+253,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 7U) 
                                              | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+254,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+255,(vlSelf->SimTop__DOT__mux__DOT__busy));
        tracep->fullIData(oldp+256,(vlSelf->SimTop__DOT__mux__DOT__index),32);
        tracep->fullIData(oldp+257,(vlSelf->SimTop__DOT__mux__DOT__select),32);
        tracep->fullBit(oldp+258,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+259,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+260,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+261,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+263,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+264,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+266,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+267,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
        tracep->fullBit(oldp+268,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+269,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+270,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+271,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+273,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+274,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+276,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+277,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
        tracep->fullIData(oldp+278,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+279,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+280,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+281,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+282,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+283,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+285,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+286,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+288,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+289,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
        tracep->fullCData(oldp+290,(vlSelf->SimTop__DOT__ram__DOT__state),2);
        tracep->fullCData(oldp+291,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
        tracep->fullCData(oldp+292,(vlSelf->SimTop__DOT__ram__DOT__size),4);
        tracep->fullQData(oldp+293,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
        tracep->fullQData(oldp+295,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
        tracep->fullQData(oldp+297,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
        tracep->fullQData(oldp+299,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
        tracep->fullQData(oldp+301,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
        tracep->fullQData(oldp+303,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
        tracep->fullQData(oldp+305,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullQData(oldp+307,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
        tracep->fullQData(oldp+309,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
        tracep->fullBit(oldp+311,(vlSelf->SimTop__DOT__ram__DOT__msip));
        tracep->fullBit(oldp+312,(vlSelf->clock));
        tracep->fullBit(oldp+313,(vlSelf->reset));
        tracep->fullQData(oldp+314,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+316,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+318,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+320,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+321,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+322,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+323,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+324,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+325,(vlSelf->io_uart_in_ch),8);
        tracep->fullBit(oldp+326,(1U));
        tracep->fullBit(oldp+327,(0U));
        tracep->fullCData(oldp+328,(0U),8);
        tracep->fullQData(oldp+329,(0x80000000ULL),64);
        tracep->fullIData(oldp+331,(0U),32);
        tracep->fullQData(oldp+332,(0ULL),64);
        tracep->fullCData(oldp+334,(0U),3);
        tracep->fullCData(oldp+335,(3U),2);
        tracep->fullCData(oldp+336,(2U),3);
        tracep->fullCData(oldp+337,(0U),8);
        tracep->fullQData(oldp+338,(0ULL),64);
    }
}
