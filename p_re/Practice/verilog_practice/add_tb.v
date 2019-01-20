`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:56:39 10/26/2017
// Design Name:   adder
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/preproduction_phase/Practice/verilog_practice/add_tb.v
// Project Name:  verilog_practice
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

module add_tb;

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
		A = 0;
		B = 0;
		Clk = 0;
		En = 0;

		#10;
		En = 1;
		A = 4'b1010;
		B = 4'b0011;
		#10;
		A = 4'b1110;
		B = 4'b0010;
		#10;
		A = 4'b0111;
		B = 4'b1000;
		#10;
		En = 0;
		A = 4'b1001;
		B = 4'b1010;
	end
	
	always #5 Clk = ~Clk;
      
endmodule

