#ifndef SPROTT_SYSTEM_H
#define SPROTT_SYSTEM_H

#include "Dynamical_System.hpp"

class Sprott_System : public Dynamical_System {
private:
  double a;
  double b;

public:
  Sprott_System();
  Sprott_System(State _state, double _a, double _b);

  ODE equation(State state);
};

#endif
