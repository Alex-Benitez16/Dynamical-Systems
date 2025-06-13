/*
 * Proyecto Visualizador de Sistemas Caóticos
 * Alejandro Benítez Bravo
 * A01712835
 * 10/06/2025
 * Se definen las funciones de Dynamical_System
 */

#include "../include/Dynamical_System.hpp"

/**
 * Dynamical_System crea un objeto de tipo Dynamical_System default
 *
 * @param
 *
 * @return objeto Dynamical_System
 */
Dynamical_System::Dynamical_System() { initial_state = (State){1.0, 1.0, 1.0}; }

/**
 * Dynamical_System crea un objeto de tipo Dynamical_System
 *
 * @param State _state
 *
 * @return objeto Dynamical_System
 */
Dynamical_System::Dynamical_System(State _state) { initial_state = _state; }

/**
 * ~Dynamical_System destruye el objeto Dynamical_System
 *
 * @param
 *
 * @return
 */
Dynamical_System::~Dynamical_System() {}

/**
 * get_initial_state devuelve el estado original
 *
 * @param
 *
 * @return initial_state
 */
State Dynamical_System::get_initial_state() { return initial_state; }
