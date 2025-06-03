#ifndef ROSSLER_SYSTEM_H
#define ROSSLER_SYSTEM_H

#include "Dynamical_System.hpp"
#include "additional.hpp"

class Rossler_System : public Dynamical_System {
private:
  double a;
  double b;
  double c;

public:
  Rossler_System();
  Rossler_System(State _state, double _a, double _b, double _c);

  ODE equation(State state);
};

#endif
