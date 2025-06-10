/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Se definen las funciones de Rossler_System
 */

#include "../include/Rossler_System.hpp"

/**
 * Rossler_System crea un objeto de tipo Rossler_System default
 *
 * @param
 *
 * @return objeto Rossler_System
 */
Rossler_System::Rossler_System() : Dynamical_System((State){10.0, 0.0, 10.0}) {
  a = 0.2;
  b = 0.2;
  c = 5.7;
}

/**
 * Rossler_System crea un objeto de tipo Rossler_System default
 *
 * @param State _state double _a double _b double _c
 *
 * @return objeto Rossler_System
 */
Rossler_System::Rossler_System(State _state, double _a, double _b, double _c)
    : Dynamical_System(_state) {
  a = _a;
  b = _b;
  c = _c;
}

/**
 * equation devuelve las ecuaciones evaludadas en el estado dado
 *
 * @param State state
 *
 * @return struct ODE (ordinary differential equation)
 */
ODE Rossler_System::equation(State state) {
  ODE temp;
  temp.dx = -(state.y + state.z);
  temp.dy = state.x + a * state.y;
  temp.dz = b + state.z * (state.x - c);

  return temp;
}
