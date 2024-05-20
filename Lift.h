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
    float calculateLift(int wingArea, float velocityPlane);
    float calculateLiftCoefficient();
};

#endif
