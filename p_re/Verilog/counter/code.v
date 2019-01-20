`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:02:53 10/12/2017 
// Design Name: 
// Module Name:    code 
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
module code(
    input Clk,
    input Reset,
    input Slt,
    input En,
    output [63:0] Output0,
    output [63:0] Output1
    );
	 
	 reg [63:0] out0,out1,temp;
	 
	 assign Output0 = out0;
	 assign Output1 = out1;
	 
	 initial begin
		out0 <= 0;
		out1 <= 0;
		temp <= 0;
	 end
	 
	 always @(posedge Clk) begin
		if (Reset) begin
			out0 <= 0;
			out1 <= 0;
			temp <= 0;
		end
		else begin
			if (En) begin
				if (Slt) begin
					if (temp == 3) begin
						out1 <= out1 + 1;
						temp <= 0 ;
					end
					else begin
						temp <= temp + 1;
					end
				end
				else begin
					out0 <= out0 + 1;
				end
			end
		end
	 end
endmodule
