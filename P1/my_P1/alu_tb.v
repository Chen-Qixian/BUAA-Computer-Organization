`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:38:49 11/03/2017
// Design Name:   alu
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/my_P1/alu_tb.v
// Project Name:  my_P1
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
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.C(C)
	);

	initial begin
		
		A = 10;
		B = 100;
		ALUOp = 0;

		#100;
        
		A = 100;
		B = 10;
		ALUOp = 1;
		
		#100;
		
		A = 5;
		B = 4;
		ALUOp = 2;
		
		#100;
		
		ALUOp = 3;
		
		#100;
		
		A = 6;
		B = 1;
		ALUOp = 4;
		
		#100;
		ALUOp = 5;
		B = 4;
		A = 32'b1010_0110_0000_0000_0000_0000_0000_0000; 

	end
      
endmodule

