/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a el sistema Rossler
 */

#ifndef ROSSLER_SYSTEM_H
#define ROSSLER_SYSTEM_H

#include "Dynamical_System.hpp"
#include "additional.hpp"

// Declaro la clase Chen_System que hereda de Dynamical_System
class Rossler_System : public Dynamical_System {
  // Declaro los parámetros (atributos) del sistema
private:
  double a;
  double b;
  double c;

  // Declaro los métodos públicos
public:
  Rossler_System(); // Constructor default
  Rossler_System(State _state, double _a, double _b, double _c);

  ODE equation(State state); // método sobreescrito
};

#endif
