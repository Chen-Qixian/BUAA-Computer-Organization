`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:26:16 11/12/2017
// Design Name:   IM
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/IM_tb.v
// Project Name:  Pre_P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IM_tb;

	// Inputs
	reg [11:2] addr;

	// Outputs
	wire [31:0] instr;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.addr(addr), 
		.instr(instr)
	);

	initial begin
		addr = 4;
	end
	
	always #5 addr = addr + 1;
      
endmodule

