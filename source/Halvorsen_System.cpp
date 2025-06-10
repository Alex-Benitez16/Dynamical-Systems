/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Se definen las funciones de Halvorsen_System
 */

#include "../include/Halvorsen_System.hpp"

/**
 * Halvorsen_System crea un objeto de tipo Halvorsen_System default
 *
 * @param
 *
 * @return objeto Halvorsen_System
 */
Halvorsen_System::Halvorsen_System()
    : Dynamical_System((State){-1.48, -1.51, 2.04}) {
  a = 1.89;
}

/**
 * Halvorsen_System crea un objeto de tipo Halvorsen_System
 *
 * @param State _state double _a
 *
 * @return objeto Halvorsen_System
 */
Halvorsen_System::Halvorsen_System(State _state, double _a)
    : Dynamical_System(_state) {
  a = _a;
}

/**
 * equation devuelve las ecuaciones evaludadas en el estado dado
 *
 * @param State state
 *
 * @return struct ODE (ordinary differential equation)
 */
ODE Halvorsen_System::equation(State state) {
  ODE temp;
  temp.dx = -a * state.x - 4 * state.y - 4 * state.z - state.y * state.y;
  temp.dy = -a * state.y - 4 * state.z - 4 * state.x - state.z * state.z;
  temp.dz = -a * state.z - 4 * state.x - 4 * state.y - state.x * state.x;
  return temp;
}
