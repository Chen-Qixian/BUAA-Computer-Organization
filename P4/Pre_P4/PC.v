`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:41:54 11/12/2017 
// Design Name: 
// Module Name:    PC 
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

`define BASE 32'h0000_3000              //difference

module PC(
    input [31:0] NPC,                   //difference by [31:0]
    input clk,
    input reset,
    output [31:0] PC
    );
	 
	 reg [31:0] pc;
	 
	 assign PC = pc;
	 
	 initial begin
		pc = `BASE;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			pc = `BASE;
		end
		else begin
			pc = NPC;
		end
	 end
	 
	 
	 
	 
endmodule
