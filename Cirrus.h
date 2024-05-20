#ifndef CIRRUS_H
#define CIRRUS_H
#include <iostream>

class Cirrus {
private:
    bool turnedOn;
    float speed;
    int altitude;
    int weight;
    int coefficentLift;
    int wingArea;
public:
    // Constructor
    Cirrus();

    // Function to turn on the plane
    void turnOn();
    void turnOff();
    // Function to increase speed
    void increaseSpeed(int amount);
    void decreaseSpeed(int amount);
    float getSpeed();
    // Function to increase altitude
    void increaseAltitude(int amount);
    void decreaseAltitude(int amount);
    int getAltitude();
    int getWeight();
    int getCoefficientLift();
    int getWingArea();
};

#endif
