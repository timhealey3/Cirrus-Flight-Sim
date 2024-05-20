#include "Lift.h"
#include "Cirrus.h"
#include "Weather.h"

Lift::Lift() {
    Weather weather;
    gravity = 9.8;
    airDensity = weather.getAirDensity();
}

float Lift::calculateLift(int wingArea, float velocityPlane) {
    // calculate lift for airplane
    float liftCoefficent = calculateLiftCoefficient();
    velocityPlane = velocityPlane * 1.46; // change mph to feet per second
    lift = 0.5f * airDensity * (velocityPlane * velocityPlane) * wingArea * liftCoefficent;
    return lift;
}

float Lift::calculateLiftCoefficient() {
    // TODO change w/ AoA, wing shape, etc etc
    return 1.2; // for now this is typical
}
