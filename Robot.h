#ifndef ROBOT_H
#define ROBOT_H

#include "MotorControl.h"
#include "Sensor.h"

class Robot {
public:
    Robot(int motorPin, int sensorPin);
    void moveIfSensorActive();
private:
    MotorControl motor;
    Sensor sensor;
};

#endif
