#ifndef LORENZ_SYSTEM_H
#define LORENZ_SYSTEM_H

#include "Dynamical_System.hpp"

class Lorenz_System : public Dynamical_System {
private:
  double sigma;
  double rho;
  double beta;

public:
  Lorenz_System();
  Lorenz_System(State _state, double _sigma, double _rho, double _beta);

  ODE equation(State state);
};

#endif
