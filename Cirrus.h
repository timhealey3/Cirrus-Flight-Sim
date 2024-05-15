#ifndef CIRRUS_H
#define CIRRUS_H
#include <iostream>

class Cirrus {
private:
    bool turnedOn;
    int speed;
    int altitude;
    int weight;

public:
    // Constructor
    Cirrus();

    // Function to turn on the plane
    void turnOn();
    void turnOff();
    // Function to increase speed
    void increaseSpeed(int amount);
    void decreaseSpeed(int amount);
    int getSpeed();
    // Function to increase altitude
    void increaseAltitude(int amount);
    void decreaseAltitude(int amount);
    int getAltitude();
};

#endif
