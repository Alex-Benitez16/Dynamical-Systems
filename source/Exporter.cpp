/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Se definen las funciones de Exporter
 */

#include "../include/Exporter.hpp"
#include <fstream>

/**
 * Exporter crea un objeto de tipo Exporter default
 *
 * Asigna al nombre del archivo final output y prepara el csv para ser llenado
 *
 * @param
 *
 * @return objeto Exporter
 */
Exporter::Exporter() {
  file_name = "output";
  file.open("output/output.csv");
  file << "x,y,z\n";
}

/**
 * Exporter crea un objeto de tipo Exporter
 *
 * Asigna al nombre del archivo final y prepara el csv para ser llenado
 *
 * @param
 *
 * @return objeto Exporter
 */
Exporter::Exporter(std::string _file_name) {
  file_name = _file_name;
  file.open("output/" + file_name + ".csv");
  file << "x,y,z\n";
}

/**
 * add_state añade el estado dado al csv
 *
 * @param State state
 *
 * @return
 */
void Exporter::add_state(State state) {
  file << state.x << ',' << state.y << ',' << state.z << '\n';
}
