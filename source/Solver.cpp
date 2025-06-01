#include "../include/Solver.hpp"

Solver::Solver() {
  system = nullptr;
  h = 0.01;
  start_time = 0.0;
  end_time = 50.0;
}
Solver::Solver(Dynamical_System *_system, double _h, double _start_time,
               double _end_time) {
  system = _system;
  // TODO: Validate h > 0
  h = _h;
  // TODO: Validate start_time < end_time
  start_time = _start_time;
  end_time = _end_time;
}

void Solver::euler() {
  State current = system->get_initial_state();
  State next;
  for (double t = start_time; t < end_time; t += h) {
    ODE f = system->equation(current);
    next.x = current.x + h * f.dx;
    next.y = current.y + h * f.dy;
    next.z = current.z + h * f.dz;

    // TODO: send current to data
    current = next;
  }
  // TODO: send current to data (this is no error, send again)
}
