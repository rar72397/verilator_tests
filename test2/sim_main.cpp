// This example is supposed to show how you can drive a Verilog module through a C++ wrapper instead of having
// to write a testbench to control it, which makes implementation slightly faster. You can access the ports
// of a module through <module name>-><port name>, so in this example: top->clk, top->reset, etc.

// build: verilator --cc --exe --build -j 0 -Wall sim_main.cpp --trace test2.v
// build with auto main: verilator --cc --exe --build -j 0 -Wall --main --trace test2.v

// run: obj_dir/Vtest2

// open waveform:  gtkwave test2_waveform.vcd

#include "Vtest2.h"
#include <verilated.h>
#include <iostream>
#include <verilated_vcd_c.h> // for VCD tracing

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtest2* top = new Vtest2{contextp};

    // Note: Possible to set up waveform recording in both C++ wrapper, and Verilog module itself.
    // Here we are using the wrapper.
    Verilated::traceEverOn(true); // Enable tracing
    VerilatedVcdC* trace = new VerilatedVcdC;
    top->trace(trace, 0); // 2nd parameter is trace depth. 0 is for the top only
    trace->open("test2_waveform.vcd"); // Output file

    int sim_time = 0;
    int max_sim_time = 100;

    while(sim_time < max_sim_time){
            top->clk = sim_time % 2; // Toggle clock every two iterations of while loop
            top->reset = (sim_time > 10); // Reset active for first 10 iterations. Reset is active low
            top->data_in = sim_time; //
            top->eval();
            trace->dump(sim_time);
            std::cout << "Time: " << sim_time << " Data Out: " << (int)top->data_out << std::endl;
            sim_time++;
    }

    top->final();
    delete trace;
    delete top;
    delete contextp;
    return 0;
}