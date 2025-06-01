#include "../include/Exporter.hpp"
#include <fstream>

Exporter::Exporter() {
  file_name = "output";
  buffer << "x,y,z\n";
}
Exporter::Exporter(std::string _file_name) {
  file_name = _file_name;
  buffer << "x,y,z\n";
}

void Exporter::add_state(State state) {
  buffer << state.x << ',' << state.y << ',' << state.z << '\n';
}

void Exporter::write_to_file() {
  std::ofstream file("output/" + file_name + ".csv");
  if (file) {
    file << buffer.str();
  }
  file.close();
}
