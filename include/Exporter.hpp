#ifndef EXPORTER_H
#define EXPORTER_H

#include "additional.hpp"

#include <fstream>
#include <sstream>
#include <string>

class Exporter {
private:
  std::string file_name;
  std::ofstream file;

public:
  Exporter();
  Exporter(std::string _file_name);

  void add_state(State state);
};

#endif
