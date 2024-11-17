// Build command: 

// verilator --cc --exe --build -j 0 -Wall sim_main.cpp our.v <- basic example, without multiple modules
// or a test bench with delay statements

// verilator --cc --timing --exe --build -j 0 -Wall sim_main.cpp --top-module mem_tb mem_tb.v test.v

// ------------------  Below is a command breakdown from the documentation ---------
// 1. --cc to get C++ output (versus e.g., SystemC, or only linting).
// 2. --exe, along with our sim_main.cpp wrapper file, so the build will create an executable instead of only a
// library.
// 3. --build so Verilator will call make itself. This is we don’t need to manually call make as a separate step. You
// can also write your own compile rules, and run make yourself as we show in Example SystemC Execution.)
// 4. -j 0 to Verilate using use as many CPU threads as the machine has.
// 5. -Wall so Verilator has stronger lint warnings enabled.
// 6. And finally, our.v [test.v and mem_tb.v here] which is our [Verilog] design file

// for our project, since we have multiple modules, the test bench and the actual design, we have to specify
// the name of the top module name with --top-module


// ---------------------- BUILDING A PROJECT ----------

// This command generates the C++ main() function automatically so that it doesn't need to be written
// it only works if the top module doesn't have any inputs, which is suitable for testbenches.
// Also possible to use that generated main file as a starting point for a wrapper.
// File will be placed in obj_dir "V<module_name>__main.cpp"

// verilator --cc --timing --exe --build -j 0 -Wall --main --trace --top-module mem_tb mem_tb.v test.v


// -------------------- RUNNING THE PROJECT ----------------
// run command: obj_dir/Vmem_tb

#include "Vmem_tb.h" // Use to run test bench
#include <verilated.h>

int main(int argc, char** argv) {
   VerilatedContext* contextp = new VerilatedContext;
   contextp->commandArgs(argc, argv);
   Vmem_tb* top = new Vmem_tb{contextp};

   while (!contextp->gotFinish()) {
      top->eval(); 
      if(!top->eventsPending()) break; // use eventsPending() and nextTimeSlot() when delay statements
      top->nextTimeSlot();
   }

   top->final();

   delete top;
   delete contextp;
   return 0;
}
