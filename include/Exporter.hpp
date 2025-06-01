#ifndef EXPORTER_H
#define EXPORTER_H

#include "additional.hpp"

#include <sstream>
#include <string>

class Exporter {
private:
  std::string file_name;
  std::stringstream buffer;

public:
  Exporter();
  Exporter(std::string _file_name);

  void add_state(State state);
  void write_to_file();
};

#endif
