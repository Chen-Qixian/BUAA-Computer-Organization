`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:04:50 11/12/2017
// Design Name:   DM
// Module Name:   C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/DM_tb.v
// Project Name:  Pre_P4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DM_tb;

	// Inputs
	reg [31:0] addr;
	reg clk;
	reg reset;
	reg [31:0] StoreData;
	reg WriteEnable;

	// Outputs
	wire [31:0] LoadData;

	// Instantiate the Unit Under Test (UUT)
	DM uut (
		.addr(addr), 
		.clk(clk), 
		.reset(reset), 
		.SotreData(StoreData), 
		.WriteEnable(WriteEnable), 
		.LoadData(LoadData)
	);

	initial begin
		#0;
		addr = 32'h1234_5678;
		clk = 0;
		reset = 0;
		StoreData = 100;
		WriteEnable = 1;
		#10 WriteEnable = 0;
		#10;
		addr = 32'h1234_5698;
		#10;
		addr = 32'h1234_5678;
        
		// Add stimulus here

	end
   
	always #5 clk = ~clk;
	
	
endmodule

