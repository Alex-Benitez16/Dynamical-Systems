#include "../include/Dynamical_System.hpp"

Dynamical_System::Dynamical_System() { state = (State){1.0, 1.0, 1.0, 0.0}; }

Dynamical_System::Dynamical_System(State _state) { state = _state; }
