`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:53:02 11/09/2017 
// Design Name: 
// Module Name:    counter 
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
module counter(
    input Clk,
    input Reset,
    input En,
    input Slt,
    output reg [63:0] Output0,
    output reg [63:0] Output1
    );
	 
	 reg [2:0] temp = 0;
	 
	 initial begin
		Output0 <= 0;
		Output1 <= 0;
	 end

	 always @(posedge Clk) begin
		if (Reset) begin
			Output0 <= 0;
			Output1 <= 0;
			temp <= 0;
		end
		else begin
			if(Slt) begin
				if(temp == 3) begin
					Output1 <= Output1 + 1'b1;
					temp <= 0;
				end
				else begin
					temp <= temp + 1'b1;
				end
			end
			else begin
				Output0 <= Output0 + 1'b1;
			end
		end
	 end
	 
	 
	 
endmodule
