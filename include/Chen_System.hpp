/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a el sistema Chen
 */

#ifndef CHEN_SYSTEM_H
#define CHEN_SYSTEM_H

#include "Dynamical_System.hpp"
#include "additional.hpp"

// Declaro la clase Chen_System que hereda de Dynamical_System
class Chen_System : public Dynamical_System {
  // Declaro los parámetros (atributos) del sistema
private:
  double alpha;
  double beta;
  double delta;

  // Declaro los métodos públicos
public:
  Chen_System(); // constructor default
  Chen_System(State _state, double _alpha, double _beta, double _delta);

  ODE equation(State state); // método sobreescrito
};

#endif
