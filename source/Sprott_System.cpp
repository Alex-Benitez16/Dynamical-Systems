/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Se definen las funciones de Sprott_System
 */

#include "../include/Sprott_System.hpp"

/**
 * Sprott_System crea un objeto de tipo Sprott_System default
 *
 * @param
 *
 * @return objeto Sprott_System
 */
Sprott_System::Sprott_System() : Dynamical_System((State){0.63, 0.47, -0.54}) {
  a = 2.07;
  b = 1.79;
}

/**
 * Sprott_System crea un objeto de tipo Sprott_System
 *
 * @param State _state double _a double _b
 *
 * @return objeto Sprott_System
 */
Sprott_System::Sprott_System(State _state, double _a, double _b)
    : Dynamical_System(_state) {
  a = _a;
  b = _b;
}

/**
 * equation devuelve las ecuaciones evaludadas en el estado dado
 *
 * @param State state
 *
 * @return struct ODE (ordinary differential equation)
 */
ODE Sprott_System::equation(State state) {
  ODE temp;
  temp.dx = state.y + a * state.x * state.y + state.x * state.z;
  temp.dy = 1 - b * state.x * state.x + state.y * state.z;
  temp.dz = state.x - state.x * state.x - state.y * state.y;
  return temp;
}
