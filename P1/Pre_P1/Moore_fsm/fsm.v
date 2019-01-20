`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:53:09 10/22/2017 
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
	 
	 integer state = 0;
	 reg out = 0;
	 assign Z = out;
	
	 always @(posedge Clk or posedge Clr) begin
		if (Clr) begin
			state <= 0;
			out <= 0;
		end
		else begin
			case (state)                        // caution the expression of case ()
				0:
					begin                          //caution use 'begin' and 'end' under each case
						out <= 0;
						state <= (X)? 1 : 0;
					end 
				1:
					begin
						out <= 0;
						state <= (X)? 1 : 2;
					end
				2:
					begin
						out <= 0;
						state <= (X)? 3 : 0;
					end
				3:
					begin            
						out <= 1;
						state <= (X)? 1 : 2;
					end
			endcase
		end
	 end
	 
endmodule
