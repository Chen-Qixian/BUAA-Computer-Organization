`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:15:22 12/04/2017 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input clk,
    input reset,
    input WE,	 				 //Memory Write Enable
    input [31:0] WD,        //data of writing memory :from gpr[rt] or part of gpr[rt](sb,sh)
    input [31:0] addr,
	 input [31:0] pc,
    output [31:0] RD
    );
	 
	 reg [31:0] dm [1023:0];

	 integer i;
	 
	 assign RD = dm[addr[11:2]];
	 
	 initial begin
		for(i = 0;i < 1024;i = i + 1) begin
			dm[i] = 0;
		end
	 end
	 
	 always @ (posedge clk) begin
		if(reset) begin
			for(i = 0;i < 1024;i = i + 1) begin
				dm[i] = 0;
			end
		end		
		else begin
			if(WE) begin
				dm[addr[11:2]] = WD;
				$display("%d@%h: *%h <= %h", $time,pc,addr,WD);
			end
		end
	 end
	 

endmodule

