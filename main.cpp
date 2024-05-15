#include "Cirrus.h"
#include "Weather.h"

int main () {
  int choice = 0;
  // init plane
  Cirrus cirrus;
  Weather weather;
  cirrus.turnOn();
  // get inputs from pilot
  while (choice != 3) {

      std::cout << "1. Take Off\t2. Weather Report:\t3. Turn Off\n";
      std::cin >> choice;

      if (choice == 1) {
          std::cout << "Taking Off" << std::endl;
          while (cirrus.getSpeed() != 150) {
            std::cout << "\nSpeed: " << cirrus.getSpeed() << " Altitude: " << cirrus.getAltitude() << "\n\n\n";
            cirrus.increaseSpeed(5);
          }
      }
      if (choice == 2) {
          std::cout << "Wind Speed of " << weather.getWindSpeed() << " knots"<< std::endl;
      }
  }
  cirrus.turnOff();
  // have interaction with plane
  return 0;
}
