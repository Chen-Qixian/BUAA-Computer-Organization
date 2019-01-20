`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:17:50 11/25/2017 
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
`define INITIAL 32'h0000_3000

module PC(
    input [31:0] npc,
    input clk,
    input reset,
    output reg [31:0] pc,
	 output [31:0] pc4
    );
	 
	 initial begin
		pc = `INITIAL;
	 end
	 
	 assign pc4 = pc + 4;
	 
	 always  @(posedge clk) begin
		if (reset) begin
			pc = `INITIAL;
		end
		else begin
			pc = npc;
		end
	 end

endmodule
