`ifndef __CORE_SV
`define __CORE_SV

`ifdef VERILATOR
`include "include/common.sv"
`endif

`include "module/PC.v"
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

    wire [63:0] PCnext;
    wire [63:0] PCaddress;
    PC u_PC (
        .clk      (clk),
        .PCnext   (PCnext),
        .PCaddress(PCaddress)
    );

    wire [63:0] PCincre;
    PCIncre u_PCIncre (
        .PCaddress(PCaddress),
        .PCincre  (PCincre)
    );

    wire Halt;
    wire Cnd;
    wire Jump;
    wire JumpReg;
    wire [63:0] imm;
    wire [63:0] aluResult;
    PCNext u_PCNext (
        .PCaddress(PCaddress),
        .PCincre  (PCincre),
        .Halt     (Halt),
        .Cnd      (Cnd),
        .Jump     (Jump),
        .JumpReg  (JumpReg),
        .imm      (imm),
        .aluResult(aluResult),
        .PCnext   (PCnext)
    );

    wire [31:0] instruction;
    InstMem u_InstMem (
        .PCaddress  (PCaddress),
        .instruction(instruction),
        .ireq       (ireq),
        .iresp      (iresp)
    );


    wire RegWrite;
    wire ALUSrc;
    wire [1:0] ALUOp;
    wire MemRead;
    wire MemWrite;
    wire Branch;
    wire Lui;
    wire Auipc;
    Control u_Control (
        .Opcode  (instruction[6:0]),
        .RegWrite(RegWrite),
        .ALUSrc  (ALUSrc),
        .ALUOp   (ALUOp),
        .MemRead (MemRead),
        .MemWrite(MemWrite),
        .Branch  (Branch),
        .Jump    (Jump),
        .JumpReg (JumpReg),
        .Lui     (Lui),
        .Auipc   (Auipc),
        .Halt    (Halt)
    );

    reg_t retReg;
    wire [63:0] writeData_R;
    wire [63:0] readData1_R;
    wire [63:0] readData2_R;
    Regs u_Regs (
        .clk        (clk),
        .RegWrite   (RegWrite),
        .readReg1   (instruction[19:15]),
        .readReg2   (instruction[24:20]),
        .writeReg   (instruction[11:7]),
        .writeData_R(writeData_R),
        .readData1_R(readData1_R),
        .readData2_R(readData2_R),
        .retReg     (retReg)
    );

    ImmGen u_ImmGen (
        .instruction(instruction),
        .imm        (imm)
    );


    wire [3:0] aluControl;
    ALUControl u_ALUControl (
        .ALUOp     (ALUOp),
        .funct7_30 (instruction[30]),
        .funct3    (instruction[14:12]),
        .aluControl(aluControl)
    );

    wire [63:0] aluA;
    ALU_A u_ALU_A (
        .Lui        (Lui),
        .Auipc      (Auipc),
        .readData1_R(readData1_R),
        .PCaddress  (PCaddress),
        .aluA       (aluA)
    );

    wire [63:0] aluB;
    ALU_B u_ALU_B (
        .ALUSrc     (ALUSrc),
        .readData2_R(readData2_R),
        .imm        (imm),
        .aluB       (aluB)
    );

    wire zero, s_less, u_less;
    ALU u_ALU (
        .aluControl(aluControl),
        .aluA      (aluA),
        .aluB      (aluB),
        .aluResult (aluResult),
        .zero      (zero),
        .s_less    (s_less),
        .u_less    (u_less)
    );

    BranchUnit u_BranchUnit (
        .Branch(Branch),
        .zero  (zero),
        .s_less(s_less),
        .u_less(u_less),
        .funct3(instruction[14:12]),
        .Cnd   (Cnd)
    );

    wire [63:0] readData_M;
    Mem u_Mem (
        .clk        (clk),
        .MemRead    (MemRead),
        .MemWrite   (MemWrite),
        .funct3     (instruction[14:12]),
        .memAddr    (aluResult),
        .writeData_M(readData2_R),
        .readData_M (readData_M),
        .dreq       (dreq),
        .dresp      (dresp)
    );

    RegWrite u_RegWrite (
        .MemRead    (MemRead),
        .Jump       (Jump),
        .JumpReg    (JumpReg),
        .aluResult  (aluResult),
        .readData_M (readData_M),
        .PCincre    (PCincre),
        .writeData_R(writeData_R)
    );







`ifdef VERILATOR
    DifftestInstrCommit DifftestInstrCommit (
        .clock   (clk),
        .coreid  (0),
        .index   (0),
        .valid   (1'b1),
        .pc      (PCINIT),
        .instr   (0),
        .skip    (0),
        .isRVC   (0),
        .scFailed(0),
        .wen     (0),
        .wdest   (0),
        .wdata   (0)
    );

    DifftestArchIntRegState DifftestArchIntRegState (
        .clock (clk),
        .coreid(0),
        .gpr_0 (retReg.x0),
        .gpr_1 (retReg.x1),
        .gpr_2 (retReg.x2),
        .gpr_3 (retReg.x3),
        .gpr_4 (retReg.x4),
        .gpr_5 (retReg.x5),
        .gpr_6 (retReg.x6),
        .gpr_7 (retReg.x7),
        .gpr_8 (retReg.x8),
        .gpr_9 (retReg.x9),
        .gpr_10(retReg.x10),
        .gpr_11(retReg.x11),
        .gpr_12(retReg.x12),
        .gpr_13(retReg.x13),
        .gpr_14(retReg.x14),
        .gpr_15(retReg.x15),
        .gpr_16(retReg.x16),
        .gpr_17(retReg.x17),
        .gpr_18(retReg.x18),
        .gpr_19(retReg.x19),
        .gpr_20(retReg.x20),
        .gpr_21(retReg.x21),
        .gpr_22(retReg.x22),
        .gpr_23(retReg.x23),
        .gpr_24(retReg.x24),
        .gpr_25(retReg.x25),
        .gpr_26(retReg.x26),
        .gpr_27(retReg.x27),
        .gpr_28(retReg.x28),
        .gpr_29(retReg.x29),
        .gpr_30(retReg.x30),
        .gpr_31(retReg.x31)
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
