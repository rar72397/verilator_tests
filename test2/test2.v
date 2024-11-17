`timescale 1ns/100ps // need to include timescale!

// in verilator, have to make the module the same name as the file name
module test2(
	input clk,
	input reset,
	input [7:0] data_in,
	output reg [7:0] data_out
);

always@(posedge clk or negedge reset) begin
	if(!reset) data_out <= 8'b0; // on reset have the memory output all 0's
	else data_out <= data_in; 
end

endmodule
