`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:52:46 11/26/2017
// Design Name:   DM
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/My_P4/Project4/DM_tb.v
// Project Name:  Project4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DM_tb;

	// Inputs
	reg clk;
	reg reset;
	reg WE;
	reg [31:0] WD;
	reg [31:0] addr;

	// Outputs
	wire [31:0] RD;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.clk(clk), 
		.reset(reset), 
		.WE(WE), 
		.WD(WD), 
		.addr(addr), 
		.RD(RD)
	);

	initial begin
		#0;
		clk = 0;
		reset = 0;
		WE = 0;
		WD = 0;
		addr = 0;
		#10;
		WE = 1;
		WD = 100;
		addr = 32'h0000_0004;
		#10;
		WD = 200;
		addr = 32'h0000_000c;


	end
	
	always #5 clk = ~clk;
      
endmodule

