`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:47:08 11/25/2017 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	 
	 wire [31:0] instr;
	 wire RegDst,RegWrite,ALUSrc,MemWrite,MemToReg,if_beq,if_jal,if_jr;
	 wire [2:0] ALUOp;
	 wire [1:0] EXTOp;
	 
	 DATAPATH datapath(.clk(clk),.reset(reset),.RegDst(RegDst),
							 .RegWrite(RegWrite),.ALUSrc(ALUSrc),
							 .MemWrite(MemWrite),.MemToReg(MemToReg),
							 .EXTOp(EXTOp),.ALUOp(ALUOp),.if_beq(if_beq),
							 .if_jal(if_jal),.if_jr(if_jr),.Instr(instr));
	 
	 CONTROLLER controller(.instr(instr),.RegDst(RegDst),.RegWrite(RegWrite),
								  .ALUSrc(ALUSrc),.MemWrite(MemWrite),.MemToReg(MemToReg),
								  .if_beq(if_beq),.if_jal(if_jal),.if_jr(if_jr),
								  .ALUOp(ALUOp),.EXTOp(EXTOp));


endmodule
