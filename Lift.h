#ifndef LIFT_H
#define LIFT_H
#include <iostream>

class Lift {
private:
    float gravity;
    float airDensity;
    float lift;
public:
    // Constructor
    Lift();
    int calculateLift();
    float calculateLiftCoefficient();
};

#endif
