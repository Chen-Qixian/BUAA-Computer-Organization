`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:21:01 10/30/2017
// Design Name:   analysis
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/preproduction_phase/Practice/verilog_practice/ana_tb.v
// Project Name:  verilog_practice
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: analysis
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ana_tb;

	// Inputs
	reg q1;
	reg q2;
	reg q3;
	reg clk;

	// Outputs
	wire o1;
	wire o2;
	wire o3;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	analysis uut (
		.q1(q1), 
		.q2(q2), 
		.q3(q3), 
		.clk(clk), 
		.o1(o1), 
		.o2(o2), 
		.o3(o3), 
		.c(c)
	);

	initial begin

		q1 = 0;
		q2 = 0;
		q3 = 0;
		clk = 0;


	end
	
	always #5 clk = ~clk;
      
endmodule

