#ifndef FOUR_WING_SYSTEM_H
#define FOUR_WING_SYSTEM_H

#include "Dynamical_System.hpp"

class Four_Wing_System : public Dynamical_System {
private:
  double a;
  double b;
  double c;

public:
  Four_Wing_System();
  Four_Wing_System(State _state, double _a, double _b, double _c);

  ODE equation(State state);
};

#endif
