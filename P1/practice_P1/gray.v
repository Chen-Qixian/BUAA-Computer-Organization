`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:01:49 11/09/2017 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
    );
	 
	 reg [2:0] cnt = 0;
	 
	 initial begin
		Output = 0;
		Overflow = 0;
	 end	
	 
	 always @ (posedge Clk) begin
		if (Reset) begin
			cnt = 0;
			Output = 0;
			Overflow = 0;
		end
		else begin
			if (En) begin
				if (cnt == 7) begin
					cnt = 0;
					Output = 0;
					Overflow = 1;
				end
				else begin
					cnt = cnt + 1;
					Output = {cnt[2],cnt[2]^cnt[1],cnt[1]^cnt[0]};
				end
			end
		end
	 end
	 


endmodule
