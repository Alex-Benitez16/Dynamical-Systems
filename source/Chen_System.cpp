/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Se definen las funciones de Chen_System
 */

#include "../include/Chen_System.hpp"

/**
 * Chen_System crea un objeto de tipo Chen_System default
 *
 * @param
 *
 * @return objeto Chen_System
 */
Chen_System::Chen_System() : Dynamical_System((State){5.0, 10.0, 10.0}) {
  alpha = 5.0;
  beta = -10.0;
  delta = -0.38;
}

/**
 * Chen_System crea un objeto de tipo Chen_System
 *
 * @param State _state double _alpha double _beta double _delta
 *
 * @return objeto Chen_System
 */
Chen_System::Chen_System(State _state, double _alpha, double _beta,
                         double _delta)
    : Dynamical_System(_state) {
  alpha = _alpha;
  beta = _beta;
  delta = _delta;
}

/**
 * equation devuelve las ecuaciones evaludadas en el estado dado
 *
 * @param State state
 *
 * @return struct ODE (ordinary differential equation)
 */
ODE Chen_System::equation(State state) {
  ODE temp;
  temp.dx = alpha * state.x - state.y * state.z;
  temp.dy = beta * state.y + state.x * state.z;
  temp.dz = delta * state.z + state.x * state.y / 3;
  return temp;
}
