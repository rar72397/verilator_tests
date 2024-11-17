// Russell Rodriguez
// Test Module

// Simple 4 bit memory
// Let the memory work on a clock and an enable

`timescale 1ns/1ps // need to include timescale!

// in verilator, have to make the module the same name as the file name
module test(
	input clk,
	input reset,
	input en,
	input [3:0] address,
	output reg [7:0] out
);

always@(posedge clk or negedge reset) begin
	if(!reset) out <= 8'b1000_0000; // on reset have the memory output all 0's
	else begin // output will only update 
		if(en) begin
			case(address)
				4'b0000: out <= 8'b0000_0000;
				4'b0001: out <= 8'b0000_0001;
				4'b1111: out <= 8'b0000_1111;
				default: out <= 8'b1111_1111;
			endcase
		end
	end
end


endmodule
