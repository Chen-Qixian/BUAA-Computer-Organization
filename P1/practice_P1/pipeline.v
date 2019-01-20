`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:05:28 11/09/2017 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline(
    input [31:0] A1,
    input [31:0] A2,
    input [31:0] B1,
    input [31:0] B2,
    input Clk,
    output reg [31:0] C=0
    );
	 
	 reg [31:0] step1 [1:0];
	 reg [31:0] step2;
	 
	 initial begin
		step1[1] <= 0;
		step1[0] <= 0;
		step2 <= 0;
	 end
	 
	 always @ (posedge Clk) begin
		step1[0] <= A1 * B1;
		step1[1] <= A2 * B2;
		
		step2 = step1[1] + step1[0];
		C = step2;
	 end	

endmodule
