#include "../include/Chen_System.hpp"
#include "../include/Four_Wing_System.hpp"
#include "../include/Halvorsen_System.hpp"
#include "../include/Lorenz_System.hpp"
#include "../include/Rossler_System.hpp"
#include "../include/Solver.hpp"
#include "../include/Sprott_System.hpp"
#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

int ask_for_system_choice() {
  std::string choice;
  int n_choice;
  do {
    std::cout << "\nPlease select one of the following attractors: \n";
    std::cout << "\t 1. Lorenz Attractor \n\t 2. Four_Wing Attractor \n\t 3. "
                 "Halvorsen Attractor \n\t 4. Rossler Attractor \n\t 5. Chen "
                 "Attractor \n\t 6. Sprott Attractor\n";
    std::cout << "Choice (select the number of the attractor): ";
    std::getline(std::cin, choice);
    if (choice.size() == 1 && choice[0] - '0' >= 0 && choice[0] - '0' <= 9)
      n_choice = std::stoi(choice);
    else
      n_choice = 100;
  } while (!(n_choice >= 1 && n_choice <= 7));
  return n_choice;
}

int ask_for_default_choice() {
  std::string choice;
  int n_choice;

  do {
    std::cout << "\nPlease select default or custom attractor: \n";
    std::cout << "\t 1. Default \n\t 2. Custom\n";
    std::cout << "Choice (select the number of the choice): ";
    std::getline(std::cin, choice);

    // More readable digit check
    if (choice.size() == 1 && std::isdigit(choice[0])) {
      n_choice = choice[0] - '0';
    } else {
      n_choice = -1; // Invalid
    }
  } while (n_choice < 1 || n_choice > 2);

  return n_choice;
}

Lorenz_System *ask_lorenz() {
  int default_choice = ask_for_default_choice();
  if (default_choice == 1) {
    return new Lorenz_System();
  }

  double sigma, rho, beta;
  bool is_valid_output = false;

  while (!is_valid_output) {
    std::cout << "\nEnter value for parameters separated by a space \n\t "
                 "(sigma rho beta): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> sigma >> rho >> beta) {

      std::string remaining;
      if (!(iss >> remaining)) {
        if (sigma > 0 && rho > 0 && beta > 0) {
          is_valid_output = true;
        } else {
          std::cout << "All parameters must be positive.\n";
        }
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  double x, y, z;
  is_valid_output = false;

  while (!is_valid_output) {
    std::cout
        << "\nEnter initial conditions separated by a space \n\t (x y z): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> x >> y >> z) {
      std::string remaining;
      if (!(iss >> remaining)) {
        is_valid_output = true;
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  return new Lorenz_System((State){x, y, z}, sigma, rho, beta);
}

Four_Wing_System *ask_four_wing() {
  int default_choice = ask_for_default_choice();
  if (default_choice == 1) {
    return new Four_Wing_System();
  }

  double a, b, c;
  bool is_valid_output = false;

  while (!is_valid_output) {
    std::cout << "\nEnter value for parameters separated by a space \n\t "
                 "(a b c): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> a >> b >> c) {

      std::string remaining;
      if (!(iss >> remaining)) {
        if (a > 0 && b > 0 && c > 0) {
          is_valid_output = true;
        } else {
          std::cout << "All parameters must be positive.\n";
        }
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  double x, y, z;
  is_valid_output = false;

  while (!is_valid_output) {
    std::cout
        << "\nEnter initial conditions separated by a space \n\t (x y z): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> x >> y >> z) {
      std::string remaining;
      if (!(iss >> remaining)) {
        is_valid_output = true;
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  return new Four_Wing_System((State){x, y, z}, a, b, c);
}

Halvorsen_System *ask_halvorsen() {
  int default_choice = ask_for_default_choice();
  if (default_choice == 1) {
    return new Halvorsen_System();
  }

  double a;
  bool is_valid_output = false;

  while (!is_valid_output) {
    std::cout << "\nEnter value for parameter \n\t "
                 "(a): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> a) {

      std::string remaining;
      if (!(iss >> remaining)) {
        if (a > 0) {
          is_valid_output = true;
        } else {
          std::cout << "All parameters must be positive.\n";
        }
      } else {
        std::cout << "Please follow the correct format.\n";
      }
    } else {
      std::cout << "Invalid input. \n";
    }
  }

  double x, y, z;
  is_valid_output = false;

  while (!is_valid_output) {
    std::cout
        << "\nEnter initial conditions separated by a space \n\t (x y z): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> x >> y >> z) {
      std::string remaining;
      if (!(iss >> remaining)) {
        is_valid_output = true;
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  return new Halvorsen_System((State){x, y, z}, a);
}

Rossler_System *ask_rossler() {
  int default_choice = ask_for_default_choice();
  if (default_choice == 1) {
    return new Rossler_System();
  }

  double a, b, c;
  bool is_valid_output = false;

  while (!is_valid_output) {
    std::cout << "\nEnter value for parameters separated by a space \n\t "
                 "(a b c): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> a >> b >> c) {

      std::string remaining;
      if (!(iss >> remaining)) {
        if (a > 0 && b > 0 && c > 0) {
          is_valid_output = true;
        } else {
          std::cout << "All parameters must be positive.\n";
        }
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  double x, y, z;
  is_valid_output = false;

  while (!is_valid_output) {
    std::cout
        << "\nEnter initial conditions separated by a space \n\t (x y z): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> x >> y >> z) {
      std::string remaining;
      if (!(iss >> remaining)) {
        is_valid_output = true;
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  return new Rossler_System((State){x, y, z}, a, b, c);
}

Chen_System *ask_chen() {
  int default_choice = ask_for_default_choice();
  if (default_choice == 1) {
    return new Chen_System();
  }

  double a, b, c;
  bool is_valid_output = false;

  while (!is_valid_output) {
    std::cout << "\nEnter value for parameters separated by a space \n\t "
                 "(alpha beta delta): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> a >> b >> c) {

      std::string remaining;
      if (!(iss >> remaining)) {
        if (a > 0 && b > 0 && c > 0) {
          is_valid_output = true;
        } else {
          std::cout << "All parameters must be positive.\n";
        }
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  double x, y, z;
  is_valid_output = false;

  while (!is_valid_output) {
    std::cout
        << "\nEnter initial conditions separated by a space \n\t (x y z): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> x >> y >> z) {
      std::string remaining;
      if (!(iss >> remaining)) {
        is_valid_output = true;
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  return new Chen_System((State){x, y, z}, a, b, c);
}

Sprott_System *ask_sprott() {
  int default_choice = ask_for_default_choice();
  if (default_choice == 1) {
    return new Sprott_System();
  }

  double a, b;
  bool is_valid_output = false;

  while (!is_valid_output) {
    std::cout << "\nEnter value for parameters separated by a space \n\t "
                 "(a b): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> a >> b) {

      std::string remaining;
      if (!(iss >> remaining)) {
        if (a > 0 && b > 0) {
          is_valid_output = true;
        } else {
          std::cout << "All parameters must be positive.\n";
        }
      } else {
        std::cout << "Please follow the correct format (exactly 2 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  double x, y, z;
  is_valid_output = false;

  while (!is_valid_output) {
    std::cout
        << "\nEnter initial conditions separated by a space \n\t (x y z): ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    if (iss >> x >> y >> z) {
      std::string remaining;
      if (!(iss >> remaining)) {
        is_valid_output = true;
      } else {
        std::cout << "Please follow the correct format (exactly 3 numbers).\n";
      }
    } else {
      std::cout
          << "Invalid input. Please enter three numbers separated by spaces.\n";
    }
  }

  return new Sprott_System((State){x, y, z}, a, b);
}

int main() {
  std::cout << "Hello, this is a solver for strange attractors. Enjoy!\n";

  Dynamical_System *sys;

  int choice = ask_for_system_choice();

  switch (choice) {
  case 1:
    sys = ask_lorenz();
    break;
  case 2:
    sys = ask_four_wing();
    break;
  case 3:
    sys = ask_halvorsen();
    break;
  case 4:
    sys = ask_rossler();
    break;
  case 5:
    sys = ask_chen();
    break;
  case 6:
    sys = ask_sprott();
    break;
  }

  Solver sovl = Solver(sys, 0.01, 0, 100, "output");
  sovl.euler();

  delete sys;

  return 0;
}
