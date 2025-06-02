#ifndef HALVORSEN_SYSTEM_H
#define HALVORSEN_SYSTEM_H

#include "Dynamical_System.hpp"

class Halvorsen_System : public Dynamical_System {
private:
  double a;

public:
  Halvorsen_System();
  Halvorsen_System(State _state, double _a);

  ODE equation(State state);
};

#endif
