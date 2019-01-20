`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:21:09 10/12/2017
// Design Name:   adder
// Module Name:   C:/Users/cqx/Desktop/Verilog/Adder/adder4_tb.v
// Project Name:  Adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder4_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Clk;
	reg En;

	// Outputs
	wire [3:0] Sum;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.A(A), 
		.B(B), 
		.Clk(Clk), 
		.En(En), 
		.Sum(Sum), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		#0 A = 4'b0001;
			B = 4'b0001;
			Clk = 0;
			En = 1'b1;
	end
	
	always #10 begin
		Clk = ~ Clk;
		A = A + 4'b0001;
		B = B + 4'b0110;
	end
      
endmodule

