`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:12:48 11/09/2017
// Design Name:   pipeline
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/practice_P1/pipeline_tb.v
// Project Name:  practice_P1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module pipeline_tb;

	// Inputs
	reg [31:0] A1;
	reg [31:0] A2;
	reg [31:0] B1;
	reg [31:0] B2;
	reg Clk;
	wire [31:0] C;
	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.A1(A1), 
		.A2(A2), 
		.B1(B1), 
		.B2(B2), 
		.Clk(Clk), 
		.C(C)
	);

	initial begin
		#0;
		A1 = 0;
		A2 = 0;
		B1 = 0;
		B2 = 0;
		Clk = 0;
		#10;
		A1 = 0;
		B1 = 1;
		A2 = 2;
		B2 = 3;
		#10;
		A1 = 1;
		B1 = 1;
		A2 = 3;
		B2 = 4;

	end
	
	always #5 Clk = ~Clk;
      
endmodule

