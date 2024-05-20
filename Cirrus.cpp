#include "Cirrus.h"

Cirrus::Cirrus() {
  turnedOn = false;
  speed = 0;
  altitude = 0;
  weight = 2122; // pounds
  wingArea = 147; // square feet
}

void Cirrus::turnOn() {
  std::cout << "Attempting to turn on Cirrus SR-20\n";
  turnedOn = true;
  std::cout << "Cirrus SR-20 has been turned on\n";
}

void Cirrus::turnOff() {
    std::cout << "Attempting to turn off Cirrus SR-20\n";
    turnedOn = false;
    std::cout << "Cirrus SR-20 has been turned off\n";
}

int Cirrus::getSpeed() {
    return speed;
}

int Cirrus::getAltitude() {
    return altitude;
}

void Cirrus::increaseSpeed(int amount) {
    speed += amount;
}

int Cirrus::getWeight() {
    return weight;
}

int Cirrus::getWingArea() {
    return wingArea;
}
