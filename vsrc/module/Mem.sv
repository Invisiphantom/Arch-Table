`ifdef VERILATOR
`include "include/common.sv"
`endif

module Mem
    import common::*;
(
    input                     clk,
    input                     MemRead,
    input                     MemWrite,
    input              [ 2:0] funct3,
    input              [63:0] memAddr,
    input              [63:0] writeData_M,
    output reg         [63:0] readData_M,
    output dbus_req_t         dreq,         // CPU -> cache
    input  dbus_resp_t        dresp         // cache -> CPU
);
    assign dreq.valid  = 1'b0;
    assign dreq.addr   = memAddr;
    assign dreq.size   = MSIZE8;
    assign dreq.strobe = 8'b11111111;
    assign dreq.data   = writeData_M;

    assign readData_M  = dresp.data;


    //     always @(MemRead or MemWrite or memAddr or writeData_M) begin
    //         if (MemRead == 1'b1) begin
    //             case (funct3)
    // /* lb */                3'b000: readData_M <= {{(64 - 8) {mem[memAddr][7]}}, mem[memAddr]};  // lb
    // /* lh */                3'b001: readData_M <= {{(64 - 16) {mem[memAddr][7]}}, mem[memAddr], mem[memAddr+1]};  // lh
    // /* lw */                3'b010: readData_M <= {mem[memAddr], mem[memAddr+1], mem[memAddr+2], mem[memAddr+3]};  // lw
    // /* ld */                3'b011: 
    // /* lbu */                3'b100: readData_M <= {{(64 - 8) {1'b0}}, mem[memAddr]};  // lbu
    // /* lhu */                3'b101: readData_M <= {{(64 - 16) {1'b0}}, mem[memAddr], mem[memAddr+1]};  // lhu
    // /* lwu */                3'b110: 
    //                 default: readData_M <= {64{1'bx}};
    //             endcase
    //         end else if (MemWrite == 1'b1) begin
    //             case (funct3)
    //                 3'h0: mem[memAddr] <= writeData_M[7:0];  // sb
    //                 3'h1: {mem[memAddr], mem[memAddr+1]} <= writeData_M[15:0];  // sh
    //                 3'h2: {mem[memAddr], mem[memAddr+1], mem[memAddr+2], mem[memAddr+3]} <= writeData_M;  // sw
    //                 default: mem[memAddr] <= {64{1'bx}};
    //             endcase
    //         end
    //     end
endmodule
