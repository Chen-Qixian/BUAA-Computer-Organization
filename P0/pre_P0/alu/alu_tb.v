`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:51:34 10/20/2017
// Design Name:   alu
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P0/alu/alu_tb.v
// Project Name:  alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg [1:0] ALUOp;

	// Outputs
	wire [3:0] C;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.ALUOp(ALUOp)
	);

	initial begin
		#0;
		A = 0;
		B = 0;
		ALUOp = 0;
		#10;
		A = 4'b1001;
		B = 4'b0001;
		#10;
		A = 4'b0111;
		B = 4'b1010;
		#10;
		ALUOp = 2'b01;
		A = 4'b1111;
		B = 4'b0011;
		#10;
		A = 4'b1000;
		B = 4'b0101;
		#10;
		ALUOp = 2'b10;
		#10
		A = 4'b1110;
		B = 4'b0111;
		#10
		ALUOp = 2'b11;
		#10
		A = 4'b1001;
		B = 4'b0010;

	end
      
endmodule

