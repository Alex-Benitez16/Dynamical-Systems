#ifndef DYNAMICAL_SYSTEM_H
#define DYNAMICAL_SYSTEM_H

#include "additional.hpp"

class Dynamical_System {
protected:
  State state;

public:
  Dynamical_System();
  Dynamical_System(State _state);
  virtual ODE formula() = 0;
};

#endif
