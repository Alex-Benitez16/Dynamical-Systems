/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a el sistema Four Wing
 */

#ifndef FOUR_WING_SYSTEM_H
#define FOUR_WING_SYSTEM_H

#include "Dynamical_System.hpp"

// Declaro la clase Four_Wing_System que hereda de Dynamical_System
class Four_Wing_System : public Dynamical_System {
  // Declaro los parámetros (atributos) del sistema
private:
  double a;
  double b;
  double c;

  // Declaro los métodos públicos
public:
  Four_Wing_System(); // constructor default
  Four_Wing_System(State _state, double _a, double _b, double _c);

  ODE equation(State state); // método sobreescrito
};

#endif
