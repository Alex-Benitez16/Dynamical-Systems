#include "../include/Exporter.hpp"
#include <fstream>

Exporter::Exporter() {
  file_name = "output";
  file.open("output/output.csv");
  file << "x,y,z\n";
}
Exporter::Exporter(std::string _file_name) {
  file_name = _file_name;
  file.open("output/" + file_name + ".csv");
  file << "x,y,z\n";
}

void Exporter::add_state(State state) {
  file << state.x << ',' << state.y << ',' << state.z << '\n';
}
