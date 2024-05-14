#include "Cirrus.h"
#include "Weather.h"

int main () {
  int choice;
  // init plane
  Cirrus cirrus;
  Weather weather;
  cirrus.turnOn();
  // get inputs from pilot
  std::cout << "1. Take Off\t2. Weather Report: ";
  std::cin >> choice;
  switch (choice) {
      case 1:
        std::cout << "Taking Off" << std::endl;
      case 2:
        std::cout << weather.getWindSpeed() << std::endl;
  }
  // have interaction with plane
  return 0;
}
