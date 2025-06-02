#include "../include/Halvorsen_System.hpp"
#include "../include/Lorenz_System.hpp"
#include "../include/Solver.hpp"
#include "../include/Sprott_System.hpp"
#include <iostream>

int main() {
  Solver solv = Solver(new Sprott_System(), 0.001, 0.0, 500.0, "lorenz");
  solv.euler();
  return 0;
}
