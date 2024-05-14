#include "Cirrus.h"

Cirrus::Cirrus() {
  turnedOn = false;
  speed = 0;
  altitude = 0;
}

void Cirrus::turnOn() {
  std::cout << "Attempting to turn on Cirrus SR-20\n";
  turnedOn = true;
  std::cout << "Cirrus SR-20 has been turned on\n";
}
