`timescale 1ns/1ps

module mem_tb;

// inputs
reg clk;
reg reset;
reg en;
reg [3:0] address;

// outputs
wire [7:0] out;

// test unit instatiation
test uut(
	.clk(clk),
	.reset(reset),
	.en(en),
	.address(address),
	.out(out)
);

// clock signal generator
initial begin
	begin: CLOCK_GENERATOR
		clk = 0;
		forever begin
			#5 clk = ~ clk;
		end
	end
end

// initial reset signal
initial begin
	#0 reset = 1;
	#20 reset = 0;
	#20 reset = 1;
	en = 1'b0;
end

initial begin
	#100;
	
	$display("Hello");
	
	@(posedge clk);
	#2 address = 4'b0000; // output should not change here since the enable is off
	#5 $display("out: %b", out);
	
	@(posedge clk);
	#2 en = 1'b1; // turns on the enable
	address = 4'b0001;
	#5 $display("out: %b", out);
	
	@(posedge clk);
	#2 address = 4'b1111;
	#5 $display("out: %b", out);
	
	@(posedge clk);
	#2 address = 4'b1010;
	#5 $display("out: %b", out);
	
	#10 $finish;
	
end

initial begin
    $dumpfile("mem_tb.vcd");
    $dumpvars(0, mem_tb);
end

endmodule
