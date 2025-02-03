#include "Robot.h"

Robot::Robot(int motorPin, int sensorPin) : motor(motorPin), sensor(sensorPin) {}

void Robot::moveIfSensorActive() {
    if (sensor.readValue() > 500) {
        motor.start();
    } else {
        motor.stop();
    }
}
