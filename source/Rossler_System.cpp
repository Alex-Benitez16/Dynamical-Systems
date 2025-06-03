#include "../include/Rossler_System.hpp"

Rossler_System::Rossler_System() : Dynamical_System((State){10.0, 0.0, 10.0}) {
  a = 0.2;
  b = 0.2;
  c = 5.7;
}

Rossler_System::Rossler_System(State _state, double _a, double _b, double _c)
    : Dynamical_System(_state) {
  a = _a;
  b = _b;
  c = _c;
}

ODE Rossler_System::equation(State state) {
  ODE temp;
  temp.dx = -(state.y + state.z);
  temp.dy = state.x + a * state.y;
  temp.dz = b + state.z * (state.x - c);

  return temp;
}
