#ifndef SOLVER_H
#define SOLVER_H

#include "additional.hpp"

#include "Dynamical_System.hpp"

class Solver {
private:
  Dynamical_System *system;
  // data collector
  double h;
  double start_time;
  double end_time;

public:
  Solver();
  Solver(Dynamical_System *_system, double _h, double _start_time,
         double _end_time);

  void euler();
  void rk4();
};

#endif
