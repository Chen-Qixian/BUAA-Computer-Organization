`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:37 11/08/2017 
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
	 reg [2:0]a=0,b=0;
	 
	 always@(posedge Clk)
	 begin
	 
	 if(Reset) 
	 begin
	 Overflow = 1 ;
	 Output = 0;
	 end
	 
	 if(!Reset) 
	 begin
	   if(En)
		begin
		  if(a==3'b111)
		  begin
		  Overflow=1;
		  Output=0;
		  end
		  else
		  begin
		  a=a+1;
		  end
		  Output=a;
		  b=Output>>Output;
		  Output=Output^b;
		  end
	end
	end
	
	
	endmodule
