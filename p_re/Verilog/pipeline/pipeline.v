`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:34 10/13/2017 
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
    input clk,
    output reg [31:0] C = 0
    );
	 
	 reg [31:0] step1 [2:0];
	 reg [31:0] step2;
	 integer i;
	 
	 
	 
	 initial begin 
		for(i = 1; i <= 2; i = i + 1)begin
			step1[i] <= 0;
		end
		step2 <= 0;
	 end
	 
	 always @(posedge clk) begin
		
		step1[1] <= A1 * B1;
		step1[2] <= A2 * B2;
		
		step2 = step1[1] + step1[2];
		
		C = step2;
 	 end
	

endmodule
