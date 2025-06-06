#include "../include/Solver.hpp"

Solver::Solver() {
  system = nullptr;
  h = 0.01;
  start_time = 0.0;
  end_time = 50.0;
  exporter = Exporter();
}
Solver::Solver(Dynamical_System *_system, double _h, double _start_time,
               double _end_time, std::string _file_name) {
  system = _system;
  h = _h;
  start_time = _start_time;
  end_time = _end_time;
  exporter = Exporter(_file_name);
}

State Solver::ode2state(ODE ode) {
  State temp;
  temp.x = ode.dx;
  temp.y = ode.dy;
  temp.z = ode.dz;
  return temp;
}

void Solver::euler() {
  State current = system->get_initial_state();
  State next;
  for (double t = start_time; t <= end_time; t += h) {
    ODE f = system->equation(current);
    next.x = current.x + h * f.dx;
    next.y = current.y + h * f.dy;
    next.z = current.z + h * f.dz;

    exporter.add_state(current);
    current = next;
  }
  exporter.add_state(current);
}

void Solver::rk4() {
  State current = system->get_initial_state();
  State next;
  for (double t = start_time; t <= end_time; t += h) {
    State k_1 = ode2state(system->equation(current));
    State k_2 = ode2state(system->equation(
        (State){current.x + 0.5 * h * k_1.x, current.y + 0.5 * h * k_1.y,
                current.z + 0.5 * h * k_1.z}));
    State k_3 = ode2state(system->equation(
        (State){current.x + 0.5 * h * k_2.x, current.y + 0.5 * h * k_2.y,
                current.z + 0.5 * h * k_2.z}));
    State k_4 = ode2state(system->equation((State){
        current.x + h * k_3.x, current.y + h * k_3.y, current.z + h * k_3.z}));

    next.x = current.x + (k_1.x + 2 * k_2.x + 2 * k_3.x + k_4.x) * h / 6;
    next.y = current.y + (k_1.y + 2 * k_2.y + 2 * k_3.y + k_4.y) * h / 6;
    next.z = current.z + (k_1.z + 2 * k_2.z + 2 * k_3.z + k_4.z) * h / 6;

    exporter.add_state(current);
    current = next;
  }
  exporter.add_state(current);
}
