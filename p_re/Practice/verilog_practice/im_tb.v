`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:12:30 10/26/2017
// Design Name:   im
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/preproduction_phase/Practice/verilog_practice/im_tb.v
// Project Name:  verilog_practice
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: im
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module im_tb;

	// Inputs
	reg [11:2] Addr;
	reg Clk;

	// Outputs
	wire [31:0] Out;

	// Instantiate the Unit Under Test (UUT)
	im uut (
		.Addr(Addr), 
		.Clk(Clk), 
		.Out(Out)
	);

	initial begin
		Addr = 0;
		Clk = 0;
		#20;
		Addr = 4;
		#20;
		Addr = 8;
	end
   
	always #5 Clk = ~Clk;
endmodule

