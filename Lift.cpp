#include "Lift.h"
#include "Weather.h"

Lift::Lift() {
    Weather weather;
    gravity = 9.8;
    airDensity = weather.getAirDensity();
}

int Lift::calculateLift() {
    // calculate lift for airplane
    //
    return 0;
}

float Lift::calculateLiftCoefficient() {
    return 0;
}
