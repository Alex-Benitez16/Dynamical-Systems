#include "../include/Lorenz_System.hpp"

Lorenz_System::Lorenz_System() : Dynamical_System() {
  sigma = 10.0;
  rho = 28.0;
  beta = 8.0 / 3.0;
}

Lorenz_System::Lorenz_System(State _state, double _sigma, double _rho,
                             double _beta)
    : Dynamical_System(_state) {
  sigma = _sigma;
  rho = _rho;
  beta = _beta;
}

ODE Lorenz_System::equation(State state) {
  ODE temp;
  temp.dx = sigma * (state.y - state.x);
  temp.dy = state.x * (rho - state.z) - state.y;
  temp.dz = state.x * state.y - beta * state.z;

  return temp;
}
