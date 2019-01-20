`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:41:50 11/26/2017
// Design Name:   mips
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/My_P4/Project4/mips_tb.v
// Project Name:  Project4
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

