#include "../include/Sprott_System.hpp"

Sprott_System::Sprott_System() : Dynamical_System((State){0.63, 0.47, -0.54}) {
  a = 2.07;
  b = 1.79;
}

Sprott_System::Sprott_System(State _state, double _a, double _b)
    : Dynamical_System(_state) {
  a = _a;
  b = _b;
}

ODE Sprott_System::equation(State state) {
  ODE temp;
  temp.dx = state.y + a * state.x * state.y + state.x * state.z;
  temp.dy = 1 - b * state.x * state.x + state.y * state.z;
  temp.dz = state.x - state.x * state.x - state.y * state.y;
  return temp;
}
