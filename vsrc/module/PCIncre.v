module PCIncre(
    input [63:0] PCaddress,
    output [63:0] PCincre
);
    // 将PCincre赋值为PC的下一个地址
    assign PCincre = PCaddress + 4;
endmodule