`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:22 12/04/2017 
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
    input [31:0] pc4,
    output [31:0] npc,
    input if_beq,             // if the instruction is beq/jal/jr
    input if_jal,
    input if_jr,
	 input if_j,
	 input if_bgezal,
	 input zero,                // if gpr[rs] == gpr[rt]
	 input great,
	 input less,
    input [31:0] jr_pc,        // pc value of jr == gpr[rs]
	 input [31:0] offset,       // offset from moudle EXT :EXTOut
	 input [31:0] instr
    );
	 
	 wire [31:0] b_pc,j_pc;  //b_pc(j_pc) : the next pc value for b-type(j-type) instruction
	 
	 assign b_pc = pc4 + (offset << 2);
	 assign j_pc = {pc4[31:28],instr[25:0],2'b0};
	 
	 assign npc = ((if_beq && zero) | (if_bgezal && (zero || great))) ? b_pc :
					  (if_jal | if_j) ? j_pc :
					  (if_jr ) ? jr_pc : pc4;
	 

endmodule
