`ifndef __CORE_SV
`define __CORE_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

`include "module/PC.sv"
`include "module/PCIncre.v"
`include "module/PCNext.v"
`include "module/InstMem.sv"
`include "module/Control.v"
`include "module/Regs.sv"
`include "module/ImmGen.v"
`include "module/ALUControl.v"
`include "module/ALU_A.v"
`include "module/ALU_B.v"
`include "module/ALU.v"
`include "module/BranchUnit.v"
`include "module/Mem.sv"
`include "module/RegWrite.v"


module core
    import common::*;
(
    input  logic       clk,
    input  logic       reset,
    output ibus_req_t  ireq,   // CPU -> cache
    input  ibus_resp_t iresp,  // cache -> CPU
    output dbus_req_t  dreq,   // CPU -> cache
    input  dbus_resp_t dresp,  // cache -> CPU
    input  logic       trint,
    input  logic       swint,
    input  logic       exint
);




`ifdef VERILATOR
    DifftestInstrCommit DifftestInstrCommit (
        .clock(clk),
        .coreid(0),  // 无需改动
        .index(0),  // 多发射时，例化多个该模块。前四个 Lab 无需改动它
        .valid(runrunrunrunrun),  // 无提交（或提交的指令是flush导致的bubble时，为0）
        .pc(PCaddress_submit),  // 这条指令的 pc
        .instr(0),  // 这条指令的内容，可不改动
        .skip(0),  // 提交的是一条内存读写指令，且这部分内存属于设备（addr[31] == 0）时，skip 为 1
        .isRVC(0),  // 前四个 Lab 无需改动
        .scFailed(0),  // 前四个 Lab 无需改动
        .wen(0),  // 这条指令是否写入通用寄存器，1 bit
        .wdest(0),  // 写入哪个通用寄存器
        .wdata(0)  // 写入的值
    );

    DifftestArchIntRegState DifftestArchIntRegState (
        .clock (clk),
        .coreid(0),
        .gpr_0 (retReg.x0),
        .gpr_1 (retReg.ra),
        .gpr_2 (retReg.sp),
        .gpr_3 (retReg.gp),
        .gpr_4 (retReg.tp),
        .gpr_5 (retReg.t0),
        .gpr_6 (retReg.t1),
        .gpr_7 (retReg.t2),
        .gpr_8 (retReg.s0),
        .gpr_9 (retReg.s1),
        .gpr_10(retReg.a0),
        .gpr_11(retReg.a1),
        .gpr_12(retReg.a2),
        .gpr_13(retReg.a3),
        .gpr_14(retReg.a4),
        .gpr_15(retReg.a5),
        .gpr_16(retReg.a6),
        .gpr_17(retReg.a7),
        .gpr_18(retReg.s2),
        .gpr_19(retReg.s3),
        .gpr_20(retReg.s4),
        .gpr_21(retReg.s5),
        .gpr_22(retReg.s6),
        .gpr_23(retReg.s7),
        .gpr_24(retReg.s8),
        .gpr_25(retReg.s9),
        .gpr_26(retReg.s10),
        .gpr_27(retReg.s11),
        .gpr_28(retReg.t3),
        .gpr_29(retReg.t4),
        .gpr_30(retReg.t5),
        .gpr_31(retReg.t6)
    );

    DifftestTrapEvent DifftestTrapEvent (
        .clock   (clk),
        .coreid  (0),
        .valid   (0),
        .code    (0),
        .pc      (0),
        .cycleCnt(0),
        .instrCnt(0)
    );

    DifftestCSRState DifftestCSRState (
        .clock         (clk),
        .coreid        (0),
        .priviledgeMode(3),
        .mstatus       (0),
        .sstatus       (0  /* mstatus & 64'h800000030001e000 */),
        .mepc          (0),
        .sepc          (0),
        .mtval         (0),
        .stval         (0),
        .mtvec         (0),
        .stvec         (0),
        .mcause        (0),
        .scause        (0),
        .satp          (0),
        .mip           (0),
        .mie           (0),
        .mscratch      (0),
        .sscratch      (0),
        .mideleg       (0),
        .medeleg       (0)
    );
`endif
endmodule
`endif
