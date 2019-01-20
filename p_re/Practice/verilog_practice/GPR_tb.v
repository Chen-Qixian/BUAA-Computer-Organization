`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:20:35 10/26/2017
// Design Name:   GPR
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/preproduction_phase/Practice/verilog_practice/GPR_tb.v
// Project Name:  verilog_practice
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
	reg Clk;
	reg Reset;
	reg [4:0] RS1;
	reg [4:0] RS2;
	reg [4:0] RD;
	reg RegWrite;
	reg [63:0] WData;

	// Outputs
	wire [63:0] RData1;
	wire [63:0] RData2;

	// Instantiate the Unit Under Test (UUT)
	GPR uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.RS1(RS1), 
		.RS2(RS2), 
		.RD(RD), 
		.RegWrite(RegWrite), 
		.WData(WData), 
		.RData1(RData1), 
		.RData2(RData2)
	);

	initial begin
		Clk = 0;
		Reset = 0;
		RS1 = 2;
		RS2 = 1;
		RD = 1;
		RegWrite = 0;
		WData = 0;
		
		#20;
		RegWrite = 1;
		WData = 100;
		
		#20;
		Reset = 1;


	end
	
	always #5 Clk = ~Clk;
      
endmodule

