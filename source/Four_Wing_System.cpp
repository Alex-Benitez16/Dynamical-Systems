/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Se definen las funciones de Four_Wing_System
 */

#include "../include/Four_Wing_System.hpp"

/**
 * Four_Wing_System crea un objeto de tipo Four_Wing_System default
 *
 * @param
 *
 * @return objeto Four_Wing_System
 */
Four_Wing_System::Four_Wing_System()
    : Dynamical_System((State){1.3, -0.18, 0.01}) {
  a = 0.2;
  b = 0.01;
  c = -0.4;
}

/**
 * Four_Wing_System crea un objeto de tipo Four_Wing_System
 *
 * @param State _state double _a double _b double _c
 *
 * @return objeto Four_Wing_System
 */
Four_Wing_System::Four_Wing_System(State _state, double _a, double _b,
                                   double _c)
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
ODE Four_Wing_System::equation(State state) {
  ODE temp;
  temp.dx = a * state.x + state.y * state.z;
  temp.dy = b * state.x + c * state.y - state.x * state.z;
  temp.dz = -state.z - state.x * state.y;
  return temp;
}
