/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Esta clase define a Exporter que se encarga de exportar los valores a un csv
 */

#ifndef EXPORTER_H
#define EXPORTER_H

#include "additional.hpp"

#include <fstream>
#include <sstream>
#include <string>

// Declaro la clase Exporter
class Exporter {
  // Declaro los atributos
private:
  std::string file_name;
  std::ofstream file;

  // Declaro los métodos públicos
public:
  Exporter();
  Exporter(std::string _file_name);

  void add_state(State state);
};

#endif
