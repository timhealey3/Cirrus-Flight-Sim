#ifndef CIRRUS_H
#define CIRRUS_H
#include <iostream>

class Cirrus {
private:
    bool turnedOn;
    int speed;
    int altitude;

public:
    // Constructor
    Cirrus();

    // Function to turn on the plane
    void turnOn();

    // Function to increase speed
    void increaseSpeed(int amount);
    void decreaseSpeed(int amount);
    // Function to increase altitude
    void increaseAltitude(int amount);
    void decreaseAltitude(int amount);
};

#endif
