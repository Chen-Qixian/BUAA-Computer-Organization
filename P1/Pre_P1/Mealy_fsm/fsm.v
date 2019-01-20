`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:55:25 10/22/2017 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
    input Clk,
    input Clr,
    input X,
    output Z
    );
	 integer state = 1;
	 reg out = 0;
	 
	 assign Z = out;
	 
	 always @(posedge Clk or posedge Clr) begin
		if (Clr) begin
			out <= 0;
			state <= 1;
		end
		case (state)
			1:begin
				out <= 0;
				state <= (X)? 2 : 1;
			end
			2:begin
				out <= 0;
				state <= (X)? 2 : 3;
			end
			3:begin
				out <= (X)? 1 : 0;
				state <= (X)? 2 : 1;
			end
		endcase
	 end

endmodule
