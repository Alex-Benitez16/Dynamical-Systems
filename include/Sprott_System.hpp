/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a el sistema Sprott
 */

#ifndef SPROTT_SYSTEM_H
#define SPROTT_SYSTEM_H

#include "Dynamical_System.hpp"

// Declaro la clase Sprott_System que hereda de Dynamical_System
class Sprott_System : public Dynamical_System {
  // Declaro los parámetros (atributos) del sistema
private:
  double a;
  double b;

  // Declaro los métodos públicos
public:
  Sprott_System(); // Constructor default
  Sprott_System(State _state, double _a, double _b);

  ODE equation(State state); // método sobreescrito
};

#endif
