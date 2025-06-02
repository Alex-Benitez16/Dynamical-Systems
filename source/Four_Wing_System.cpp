#include "../include/Four_Wing_System.hpp"

Four_Wing_System::Four_Wing_System()
    : Dynamical_System((State){1.3, -0.18, 0.01}) {
  a = 0.2;
  b = 0.01;
  c = -0.4;
}

Four_Wing_System::Four_Wing_System(State _state, double _a, double _b,
                                   double _c)
    : Dynamical_System(_state) {
  a = _a;
  b = _b;
  c = _c;
}

ODE Four_Wing_System::equation(State state) {
  ODE temp;
  temp.dx = a * state.x + state.y * state.z;
  temp.dy = b * state.x + c * state.y - state.x * state.z;
  temp.dz = -state.z - state.x * state.y;
  return temp;
}
