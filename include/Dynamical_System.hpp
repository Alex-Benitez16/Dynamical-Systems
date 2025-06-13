/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a los sistemas dinámicos base, y es la clase abstracta
 * de dónde todos heredan
 */

#ifndef DYNAMICAL_SYSTEM_H
#define DYNAMICAL_SYSTEM_H

#include "additional.hpp"

// Declaro la clase de sistema dinámico que es abstracta
class Dynamical_System {
  // Declaro variables
protected:
  State initial_state;

  // Declaro métodos
public:
  Dynamical_System(); // Constructor default
  Dynamical_System(State _state);

  virtual ODE equation(State state) = 0; // Función virtual
  State get_initial_state();
};

#endif
