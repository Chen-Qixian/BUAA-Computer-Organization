`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:09:15 11/13/2017
// Design Name:   mips
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/mips_tb.v
// Project Name:  Pre_P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_tb;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		clk = 0;
		reset = 0;

	end
	
	always #5 clk = ~clk;
      
endmodule

