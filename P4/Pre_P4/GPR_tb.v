`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:55:17 11/12/2017
// Design Name:   GPR
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/GPR_tb.v
// Project Name:  Pre_P4
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
	reg [4:0] RegWrite;
	reg [4:0] RegA;
	reg [4:0] RegB;
	reg WriteEnable;
	reg [31:0] WriteData;
	reg [4:0] shamt;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] BusA;
	wire [31:0] BusB;

	// Instantiate the Unit Under Test (UUT)
	GPR uut (
		.RegWrite(RegWrite), 
		.RegA(RegA), 
		.RegB(RegB), 
		.WriteEnable(WriteEnable), 
		.WriteData(WriteData), 
		.BusA(BusA), 
		.BusB(BusB), 
		.shamt(shamt), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		#0;
		RegWrite = 4;
		RegA = 0;
		RegB = 4;
		WriteEnable = 1;
		WriteData = 5;
		shamt = 0;
		clk = 0;
		reset = 0;

		#10;
		RegWrite = 0;
		WriteData = 5;
		
		#10;
		shamt = 1;
      WriteEnable = 0;  
		
		#10 reset = 1;
		

	end
	
	always #5 clk = ~clk;
      
endmodule

