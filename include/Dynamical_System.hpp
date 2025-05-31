#ifndef DYNAMICAL_SYSTEM_H
#define DYNAMICAL_SYSTEM_H

#include "additional.hpp"

class Dynamical_System {
protected:
  State initial_state;

public:
  Dynamical_System();
  Dynamical_System(State _state);
  virtual ODE equation(State state) = 0;
};

#endif
