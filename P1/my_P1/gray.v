`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:33:49 11/03/2017 
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
    output [2:0] Output,
    output Overflow
    );
	 
	 reg [2:0] cnt;
	 reg overflow;
	 
	 initial begin
		cnt <= 0;
		overflow <= 0;
	 end
	 
	 always @(posedge Clk)begin
		if (Reset) begin
			cnt <= 0;
			overflow <= 0;
		end
		
		else if (En) begin
			case (cnt)
				3'b000:
					cnt <= 3'b001;
				3'b001:
					cnt <= 3'b011;
				3'b011:
					cnt <= 3'b010;
				3'b010:
					cnt <= 3'b110;
				3'b110:
					cnt <= 3'b111;
				3'b111:
					cnt <= 3'b101;
				3'b101:
					cnt <= 3'b100;
				3'b100:
					begin
						cnt <= 3'b000;
						overflow <= 1;
					end
			endcase
		end
		
	 end
	 
	 assign Overflow = overflow;
	 assign Output = cnt;


endmodule
