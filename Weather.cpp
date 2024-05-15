#include "Weather.h"

Weather::Weather() {
    windSpeed = 0;
    airDensity = 0.9711;
}

void Weather::increaseWindSpeed() {
    windSpeed++;
}

int Weather::getWindSpeed() {
    return windSpeed;
}

float Weather::getAirDensity() {
    return airDensity;
}
