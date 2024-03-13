`ifdef VERILATOR
`include "include/common.sv"
`endif

module PC
    import common::*;
(
    input                     clk,
    input                     reset,
    input  ibus_resp_t        iresp,            // cache -> CPU
    input              [63:0] PCnext,
    output reg         [63:0] PCaddress,
    output reg         [63:0] PCaddress_submit
);

    always @(posedge clk) begin
        if (reset) begin
            PCaddress <= PCINIT;
        end else begin
            if (iresp.addr_ok & iresp.data_ok) begin
                PCaddress_submit <= PCaddress;
                PCaddress <= PCnext;
            end else begin
                PCaddress <= PCaddress;
            end
        end
    end
endmodule
