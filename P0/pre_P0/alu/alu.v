`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:44:36 10/20/2017 
// Design Name: 
// Module Name:    alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu(
    input [3:0] A,
    input [3:0] B,
    output [3:0] C,
    input [1:0] ALUOp
    );
	 reg [3:0] a,b,c;
	 reg [1:0] op;
	 
	 always @* begin
		case (ALUOp)
			2'b00:
				c <= A + B;
			2'b01:
				c <= A - B;
			2'b10:
				c <= A & B;
			2'b11:
				c <= A | B;
		endcase
	 end
	 assign C = c;
endmodule
