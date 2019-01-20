`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:44:01 11/25/2017
// Design Name:   GPR
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/My_P4/Project4/GPR_tb.v
// Project Name:  Project4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GPR
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GPR_tb;

	// Inputs
	reg clk;
	reg reset;
	reg WE;
	reg [4:0] RA;
	reg [4:0] RB;
	reg [4:0] RW;
	reg [31:0] WD;

	// Outputs
	wire [31:0] BusA;
	wire [31:0] BusB;

	// Instantiate the Unit Under Test (UUT)
	GPR uut (
		.clk(clk), 
		.reset(reset), 
		.WE(WE), 
		.RA(RA), 
		.RB(RB), 
		.RW(RW), 
		.WD(WD), 
		.BusA(BusA), 
		.BusB(BusB)
	);

	initial begin
		clk = 0;
		reset = 0;
		WE = 1;
		RA = 0;
		RB = 10;
		RW = 0;
		WD = 100;
		#10 RW = 10;
		#10;
		RW = 20;
		WD = 200;
		RA = 20;

	end
	
	always #5 clk = ~clk;
      
endmodule

