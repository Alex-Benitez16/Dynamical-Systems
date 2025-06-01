#include "../include/Dynamical_System.hpp"

Dynamical_System::Dynamical_System() { initial_state = (State){1.0, 1.0, 1.0}; }

Dynamical_System::Dynamical_System(State _state) { initial_state = _state; }

State Dynamical_System::get_initial_state() { return initial_state; }
