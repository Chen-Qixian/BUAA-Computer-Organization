`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:20:06 11/25/2017 
// Design Name: 
// Module Name:    DATAPATH 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define RS 25:21
`define RT 20:16
`define RD 15:11
`define IMM16 15:0
`define SHAMT 10:6
module DATAPATH(
    input clk,
    input reset,
    input RegDst,
    input RegWrite,
    input ALUSrc,
    input MemWrite,
    input MemToReg,
    input [1:0] EXTOp,
    input [2:0] ALUOp,
    input if_beq,
    input if_jal,
    input if_jr,
    output [31:0] Instr
    );
	 
	 wire [31:0] npc,pc,pc4,jr_pc,instr;
	 wire [31:0] BusA,BusB,ExtOut;
	 wire [31:0] ALUB,ALUOut;
	 wire [31:0] DMOut,WB;
	 wire [4:0] WriteReg;
	 wire zero;
	 
	 assign Instr = instr;
	 
	 PC pc_(.npc(npc),.clk(clk),.reset(reset),.pc(pc),.pc4(pc4));
	 
	 NPC npc_(.pc(pc),.npc(npc),.if_beq(if_beq),.if_jal(if_jal),
				 .if_jr(if_jr),.zero(zero),.jr_pc(jr_pc),.offset(ExtOut),
				 .instr(instr));
	 
	 IM im_(.pc(pc),.instr(instr));
	 
	 GPR gpr(.clk(clk),.reset(reset),.WE(RegWrite),
				.RA(instr[`RS]),.RB(instr[`RT]),
				.RW(WriteReg),.WD(WB),                       //BusA = GPR [rs]
				.BusA(BusA),.BusB(BusB),.pc(pc));            //BusB = GPR [rt]
	 
	 EXT ext(.imm16(instr[`IMM16]),.EXTOp(EXTOp),.ext32(ExtOut));
	 
	 ALU alu(.A(BusA),.B(ALUB),.ALUOp(ALUOp),.ALUOut(ALUOut),.zero(zero));
	 
	 DM dm(.clk(clk),.reset(reset),.WE(MemWrite),.WD(BusB),.addr(ALUOut),.RD(DMOut),.pc(pc));
	 
	 assign jr_pc = BusA;
	 assign WB = (MemToReg) ? DMOut :                      //WB : Write Back Data
					 (if_jal) ? pc4 : ALUOut;
	 assign ALUB = (ALUSrc) ? ExtOut : BusB;               //ALUB : B Operand of ALU input
	 assign WriteReg = (RegDst) ? instr[`RD] :                  
							 (if_jal) ? 5'b11111 : instr[`RT];   // WriteReg : destination Reg to Write data Back
	 
	 


endmodule
