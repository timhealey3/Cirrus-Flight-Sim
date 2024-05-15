#include "Lift.h"
#include "Weather.h"

Lift::Lift() {
    Weather weather;

    gravity = 9.8;
    airDensity = weather.getAirDensity();
}
