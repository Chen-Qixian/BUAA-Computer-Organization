`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:22:08 11/09/2017 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output reg out = 0
    );
	 
	 reg [1:0] state = 0;

	 always @ (posedge clk) begin
		case (state)
			0:
			begin
				if (char >="a" && char <= "z" || char >= "A" && char <= "Z") begin
					state <= 1;
					out <= 0;
				end
				else begin
					state <= 0;
					out <= 0;
				end
			end
			1:
			begin
				if (char >="a" && char <= "z" || char >= "A" && char <= "Z") begin
					state <= 1;
					out <= 0;
				end
				else if (char >= "0" && char <= "9") begin
					state <= 2;
					out <= 1;
				end
				else begin
					state <= 0;
					out <= 0;
				end
			end
			2:
			begin
				if (char >="a" && char <= "z" || char >= "A" && char <= "Z") begin
					state <= 1;
					out <= 0;
				end
				else if (char >= "0" && char <= "9") begin
					state <= 2;
					out <= 1;
				end
				else begin
					state <= 0;
					out <= 0;
				end
			end
			
		endcase
	 end	 
endmodule
