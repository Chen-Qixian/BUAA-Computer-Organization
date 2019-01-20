`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:46:44 11/12/2017 
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
    input zero,           // equal enable
	 input greater,        // greater enable
    input [31:0] PC,
    input [31:0] offset,
	 input [31:0] jr_add,
	 input [25:0] instr_index,
    input beq,            // is beq instruction
    input bgtz,           // is bgtz instruction
    input jal,
    input jr,
    output [31:0] NPC
    );
	 
	 wire [31:0] PC4,PC_beq,PC_jal,PC_jr,PC_bgtz;
	 
	 assign PC4 = PC + 4;
	 assign PC_beq = PC4 + (offset << 2);
	 assign PC_jal = {PC4[31:28],instr_index,2'b00};
	 assign PC_jr = jr_add;
	 assign PC_bgtz = PC4 + (offset << 2);
	 assign NPC = (beq && zero)? PC_beq : 
					  (jal)? PC_jal :
					  (jr) ? PC_jr :
					  (bgtz && greater)?PC_bgtz : PC4;
	
	

endmodule
