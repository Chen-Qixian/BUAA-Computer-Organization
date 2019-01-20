`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:34 11/25/2017 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input [31:0] pc,
    output [31:0] npc,
    input if_beq,             // if the instruction is beq/jal/jr
    input if_jal,
    input if_jr,
	 input zero,                // if gpr[rs] == gpr[rt]
    input [31:0] jr_pc,        // pc value of jr == gpr[rs]
	 input [31:0] offset,       // offset from moudle EXT :EXTOut
	 input [31:0] instr
    );
	 
	 wire [31:0] pc4,b_pc,j_pc;  //b_pc(j_pc) : the next pc value for b-type(j-type) instruction
	 
	 assign pc4 = pc + 4;
	 assign b_pc = pc4 + (offset << 2);
	 assign j_pc = {pc[31:28],instr[25:0],2'b0};
	 
	 assign npc = (if_beq && zero) ? b_pc :
					  (if_jal) ? j_pc :
					  (if_jr ) ? jr_pc : pc4;
	 
	 


endmodule
