#include "../include/Lorenz_System.hpp"
#include "../include/Solver.hpp"
#include <iostream>

int main() {
  Solver solv = Solver(new Lorenz_System(), 0.001, 0.0, 100.0, "lorenz");
  solv.euler();
  return 0;
}
