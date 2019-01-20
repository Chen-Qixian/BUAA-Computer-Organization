`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:18:35 10/12/2017
// Design Name:   code
// Module Name:   C:/Users/cqx/Desktop/Verilog/counter/code_tb.v
// Project Name:  counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module code_tb;

	// Inputs
	reg Clk;
	reg Reset;
	reg Slt;
	reg En;

	// Outputs
	wire [63:0] Output0;
	wire [63:0] Output1;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.Slt(Slt), 
		.En(En), 
		.Output0(Output0), 
		.Output1(Output1)
	);

	initial begin
		#0 Clk = 0;
			Reset = 0;
			Slt = 1;
			En = 1;
	   #50 Reset = 1; 
		#10 Reset = 0;
	end
	
	always begin
		#5 Clk = ~Clk;
	end      
endmodule

