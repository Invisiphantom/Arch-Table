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
        for (i = 0; i < 32; i = i + 1) Register[i] = {64{1'b0}};
    end

    always @(posedge clk) begin
        // x0寄存器不可写
        if (RegWrite && (writeReg != 5'b00000)) Register[writeReg] <= writeData_R;
    end

    assign readData1_R = Register[readReg1];
    assign readData2_R = Register[readReg2];


    assign retReg.x0  = Register[0];
    assign retReg.x1  = Register[1];
    assign retReg.x2  = Register[2];
    assign retReg.x3  = Register[3];
    assign retReg.x4  = Register[4];
    assign retReg.x5  = Register[5];
    assign retReg.x6  = Register[6];
    assign retReg.x7  = Register[7];
    assign retReg.x8  = Register[8];
    assign retReg.x9  = Register[9];
    assign retReg.x10 = Register[10];
    assign retReg.x11 = Register[11];
    assign retReg.x12 = Register[12];
    assign retReg.x13 = Register[13];
    assign retReg.x14 = Register[14];
    assign retReg.x15 = Register[15];
    assign retReg.x16 = Register[16];
    assign retReg.x17 = Register[17];
    assign retReg.x18 = Register[18];
    assign retReg.x19 = Register[19];
    assign retReg.x20 = Register[20];
    assign retReg.x21 = Register[21];
    assign retReg.x22 = Register[22];
    assign retReg.x23 = Register[23];
    assign retReg.x24 = Register[24];
    assign retReg.x25 = Register[25];
    assign retReg.x26 = Register[26];
    assign retReg.x27 = Register[27];
    assign retReg.x28 = Register[28];
    assign retReg.x29 = Register[29];
    assign retReg.x30 = Register[30];
    assign retReg.x31 = Register[31];
endmodule
