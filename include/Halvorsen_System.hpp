/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a el sistema Halvorsen
 */

#ifndef HALVORSEN_SYSTEM_H
#define HALVORSEN_SYSTEM_H

#include "Dynamical_System.hpp"

// Declaro la clase Chen_System que hereda de Dynamical_System
class Halvorsen_System : public Dynamical_System {
  // Declaro los parámetros (atributos) del sistema
private:
  double a;

  // Declaro los métodos públicos
public:
  Halvorsen_System(); // constructor default
  Halvorsen_System(State _state, double _a);

  ODE equation(State state); // método sobreescrito
};

#endif
