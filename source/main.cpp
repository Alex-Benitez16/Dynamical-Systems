#include "../include/Lorenz_System.hpp"
#include "../include/Solver.hpp"
#include <iostream>

int main() {
  Solver solv = Solver(new Lorenz_System(), 0.002, 0.0, 800.0, "lorenz");
  solv.euler();
  return 0;
}
