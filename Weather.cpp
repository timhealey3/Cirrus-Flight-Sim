#include "Weather.h"

// TODO add weather api
// TODO change weather variables dynamically

Weather::Weather() {
    windSpeed = 0;
    airDensity = 0.0023769f; // slugs/ft^3
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
