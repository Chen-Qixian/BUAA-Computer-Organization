`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:00:06 12/04/2017 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] pc,
    output [31:0] instr
    );
	 
	 wire [13:0] im_add;
	 reg [31:0] im [4095:0];
	 integer i;
	 
	 assign im_add = pc[13:0] - 14'h3000;
	 
	 initial begin
		for(i = 0 ; i < 4096 ; i = i + 1) begin
			im[i] = 0;
		end	
		$readmemh("code.txt",im);
	 end
	 
	 assign instr = im[im_add[13:2]];        // extend im memory ? bits?


endmodule
