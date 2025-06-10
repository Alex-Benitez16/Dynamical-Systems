/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a el sistema Lorenz
 */

#ifndef LORENZ_SYSTEM_H
#define LORENZ_SYSTEM_H

#include "Dynamical_System.hpp"

// Declaro la clase Lorenz_System que hereda de Dynamical_System
class Lorenz_System : public Dynamical_System {
  // Declaro los parámetros (atributos) del sistema
private:
  double sigma;
  double rho;
  double beta;

  // Declaro los métodos públicos
public:
  Lorenz_System(); // constructor default
  Lorenz_System(State _state, double _sigma, double _rho, double _beta);

  ODE equation(State state); // método sobreescrito
};

#endif
