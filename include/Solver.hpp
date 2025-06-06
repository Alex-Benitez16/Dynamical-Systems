#ifndef SOLVER_H
#define SOLVER_H

#include "Exporter.hpp"
#include "additional.hpp"
#include <string>

#include "Dynamical_System.hpp"

class Solver {
private:
  Dynamical_System *system;
  Exporter exporter;
  double h;
  double start_time;
  double end_time;

  State ode2state(ODE ode);

public:
  Solver();
  Solver(Dynamical_System *_system, double _h, double _start_time,
         double _end_time, std::string _file_name);

  void euler();
  void rk4();
};

#endif
