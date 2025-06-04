#include "../include/Chen_System.hpp"
#include "../include/Four_Wing_System.hpp"
#include "../include/Halvorsen_System.hpp"
#include "../include/Lorenz_System.hpp"
#include "../include/Rossler_System.hpp"
#include "../include/Solver.hpp"
#include "../include/Sprott_System.hpp"
#include <iostream>

int main() {
  Dynamical_System *sys = new Rossler_System();
  Solver solv = Solver(sys, 0.001, 0.0, 500.0, "lorenz");
  solv.euler();
  delete sys;
  return 0;
}
