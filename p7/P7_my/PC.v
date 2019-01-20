`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:15 12/04/2017 
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
    input [31:0] in_pc,
    input clk,
	 input en,
    input reset,
    output reg [31:0] pc
    );
	 
	 initial begin
		pc = `INITIAL;
	 end
	 
	 always  @(posedge clk) begin
		if (reset) begin
			pc = `INITIAL;
		end
		else begin
			if (en) begin
				pc = in_pc;
			end
		end
	 end

endmodule
