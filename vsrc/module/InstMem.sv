`ifdef VERILATOR
`include "include/common.sv"
`endif

module InstMem
    import common::*;
(
    input clk,
    input [63:0] PCaddress,
    output reg [31:0] instruction,
    output ibus_req_t ireq,  // CPU -> cache
    input ibus_resp_t iresp  // cache -> CPU
);

    // 从内存中读取指令
    assign ireq.valid = 1'b1;
    assign ireq.addr  = PCaddress;


    always @(posedge clk) begin
        if (iresp.addr_ok & iresp.data_ok) instruction <= iresp.data;
        else instruction <= instruction;
    end


endmodule
