/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a la clase solver que resuelve los sistemas
 * utilizando métodos numéricos
 */

#ifndef SOLVER_H
#define SOLVER_H

#include "Exporter.hpp"
#include "additional.hpp"
#include <string>

#include "Dynamical_System.hpp"

// Declaro la clase Solver
class Solver {
  // Declaro los atributos de la clase
private:
  Dynamical_System *system; // apuntador para polimorfismo
  Exporter exporter;
  double h;
  double start_time;
  double end_time;

  State ode2state(ODE ode);

  // Declaro los métodos públicos
public:
  Solver(); // constructor default
  Solver(Dynamical_System *_system, double _h, double _start_time,
         double _end_time, std::string _file_name);

  void euler();
  void rk4();
};

#endif
