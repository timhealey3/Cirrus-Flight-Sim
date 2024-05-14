#ifndef WEATHER_H
#define WEATHER_H
#include <iostream>

class Weather {
private:
    int windSpeed;

public:
    // Constructor
    Weather();
    void increaseWindSpeed();
    int getWindSpeed();
};

#endif
