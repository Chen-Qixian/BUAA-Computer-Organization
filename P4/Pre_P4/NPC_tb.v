`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:05:12 11/12/2017
// Design Name:   NPC
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/NPC_tb.v
// Project Name:  Pre_P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NPC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module NPC_tb;

	// Inputs
	reg zero;
	reg greater;
	reg [31:0] PC;
	reg [31:0] offset;
	reg [31:0] jr_add;
	reg [25:0] instr_index;
	reg beq;
	reg bgtz;
	reg jal;
	reg jr;

	// Outputs
	wire [31:0] NPC;

	// Instantiate the Unit Under Test (UUT)
	NPC uut (
		.zero(zero), 
		.greater(greater), 
		.PC(PC), 
		.offset(offset), 
		.jr_add(jr_add), 
		.instr_index(instr_index), 
		.beq(beq), 
		.bgtz(bgtz), 
		.jal(jal), 
		.jr(jr), 
		.NPC(NPC)
	);

	initial begin
		#0;
		zero = 1;
		greater = 0;
		PC = 32'h1234_5678;
		offset = 32'h0000_0008;
		jr_add = 0;
		instr_index = 0;
		beq = 0;
		bgtz = 0;
		jal = 0;
		jr = 0;
		#10 beq = 1;
		#100;
		zero = 0;
		greater = 0;
		beq = 0;
		bgtz = 1;
		#10 greater = 1;
		#100;
		instr_index = 26'b00_0000_0000_0000_0000_0000_1010;
		greater = 0;
		bgtz = 0;
		jal = 1;
		#100;
		jal = 0;
		jr = 1;
		jr_add = 32'h8765_4321;
		
	end
      
endmodule

