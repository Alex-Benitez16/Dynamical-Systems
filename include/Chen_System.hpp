#ifndef CHEN_SYSTEM_H
#define CHEN_SYSTEM_H

#include "Dynamical_System.hpp"
#include "additional.hpp"

class Chen_System : public Dynamical_System {
private:
  double alpha;
  double beta;
  double delta;

public:
  Chen_System();
  Chen_System(State _state, double _alpha, double _beta, double _delta);

  ODE equation(State state);
};

#endif
