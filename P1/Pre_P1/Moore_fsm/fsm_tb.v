`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:18:36 10/22/2017
// Design Name:   fsm
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/Moore_fsm/fsm_tb.v
// Project Name:  Moore_fsm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fsm_tb;

	// Inputs
	reg Clk;
	reg Clr;
	reg X;

	// Outputs
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	fsm uut (
		.Clk(Clk), 
		.Clr(Clr), 
		.X(X), 
		.Z(Z)
	);

	initial begin
		#0;
		Clk = 0;
		Clr = 0;
		X = 0;
		#10;
		X = 1;
		#10;
		X = 0;
		#10;
		X = 1;
		#10;
		X = 0;
		#10;
		X = 1;
		#10;
		X = 0;
		#10;
		X = 0;
		#10;
		X = 1;
		#10;
		X = 0;
		#10;
		X = 1;
		#10;
		Clr = 1;
		X = 0;
		#10;
		X = 1;
		#10;
		X = 0;
		#10;
		X = 1;
		#10;
		Clr = 0;
		X = 1;
		#10;
		X = 0;
		#10
		X = 1;
	end
	
   always #5 Clk = ~Clk;
	
endmodule

