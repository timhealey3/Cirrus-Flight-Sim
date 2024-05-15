#ifndef WEATHER_H
#define WEATHER_H
#include <iostream>

class Weather {
private:
    int windSpeed;
    float airDensity;
public:
    // Constructor
    Weather();
    void increaseWindSpeed();
    int getWindSpeed();
    float getAirDensity();
};

#endif
