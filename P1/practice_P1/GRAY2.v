`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:03 11/16/2017 
// Design Name: 
// Module Name:    GRAY2 
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
module GRAY2(
    input Clk,
    input Reset,
    input En,
    output reg Overflow,
    output reg [2:0] Output
    );
	 
	 initial begin
		Overflow = 0;
		Output = 0;
	 end
	 
	 always @ (posedge Clk) begin
	   if (Reset) begin
			Output = 0;
			Overflow = 0;
		end
		else begin
			if(En)begin
				case (Output)
					3'b000:
						Output = 3'b001;
					3'b001:
						Output = 3'b011;
					3'b011:
						Output = 3'b010;
					3'b010:
						Output = 3'b110;
					3'b110:
						Output = 3'b111;
					3'b111:
						Output = 3'b101;
					3'b101:
						Output = 3'b100;
					3'b100:
					begin
						Overflow = 1;
						Output = 3'b000;
					end
				endcase
			end
		end
	 end


endmodule
