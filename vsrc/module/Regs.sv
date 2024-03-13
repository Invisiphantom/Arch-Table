`ifdef VERILATOR
`include "include/common.sv"
`endif

module Regs
    import common::*;
(
    input         clk,
    input         RegWrite,
    input  [ 4:0] readReg1,
    input  [ 4:0] readReg2,
    input  [ 4:0] writeReg,
    input  [63:0] writeData_R,
    output [63:0] readData1_R,
    output [63:0] readData2_R,
    output reg_t retReg
);

    integer i;

    reg [63:0] Register[0:31];
    initial begin
        for (i = 0; i < 32; i = i + 1) Register[i] = 64'b0;
    end

    always @(posedge clk) begin
        // x0寄存器不可写
        if (RegWrite && (writeReg != 5'b00000)) Register[writeReg] = writeData_R;
    end

    assign readData1_R = Register[readReg1];
    assign readData2_R = Register[readReg2];


    assign retReg.x0  = Register[0];
    assign retReg.ra  = Register[1];
    assign retReg.sp  = Register[2];
    assign retReg.gp  = Register[3];
    assign retReg.tp  = Register[4];
    assign retReg.t0  = Register[5];
    assign retReg.t1  = Register[6];
    assign retReg.t2  = Register[7];
    assign retReg.s0  = Register[8];
    assign retReg.s1  = Register[9];
    assign retReg.a0 = Register[10];
    assign retReg.a1 = Register[11];
    assign retReg.a2 = Register[12];
    assign retReg.a3 = Register[13];
    assign retReg.a4 = Register[14];
    assign retReg.a5 = Register[15];
    assign retReg.a6 = Register[16];
    assign retReg.a7 = Register[17];
    assign retReg.s2 = Register[18];
    assign retReg.s3 = Register[19];
    assign retReg.s4 = Register[20];
    assign retReg.s5 = Register[21];
    assign retReg.s6 = Register[22];
    assign retReg.s7 = Register[23];
    assign retReg.s8 = Register[24];
    assign retReg.s9 = Register[25];
    assign retReg.s10 = Register[26];
    assign retReg.s11 = Register[27];
    assign retReg.t3 = Register[28];
    assign retReg.t4 = Register[29];
    assign retReg.t5 = Register[30];
    assign retReg.t6 = Register[31];
endmodule
