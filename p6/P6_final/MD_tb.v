`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:30:25 12/18/2017
// Design Name:   MD
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/p6/My_P6/MD_tb.v
// Project Name:  My_P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MD_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [31:0] WD;
	reg mthi;
	reg mtlo;
	reg clk;
	reg reset;
	reg start;
	reg [1:0] MDOp;

	// Outputs
	wire busy;
	wire [31:0] hi;
	wire [31:0] lo;

	// Instantiate the Unit Under Test (UUT)
	MD uut (
		.A(A), 
		.B(B), 
		.WD(WD), 
		.mthi(mthi), 
		.mtlo(mtlo), 
		.clk(clk), 
		.reset(reset), 
		.start(start), 
		.MDOp(MDOp), 
		.busy(busy), 
		.hi(hi), 
		.lo(lo)
	);

	initial begin
		A = 100000;
		B = 928172;
		WD = 0;
		mthi = 0;
		mtlo = 0;
		clk = 0;
		reset = 0;
		start = 1;
		MDOp = 0;
		#10 start = 0;
	end
	
	always #5 clk = ~clk;
      
endmodule

