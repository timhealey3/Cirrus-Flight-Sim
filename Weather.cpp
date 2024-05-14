#include "Weather.h"

Weather::Weather() {
    windSpeed = 0;
}

void Weather::increaseWindSpeed() {
    windSpeed++;
}

int Weather::getWindSpeed() {
    return windSpeed;
}
