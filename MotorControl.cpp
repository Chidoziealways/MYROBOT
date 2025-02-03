#include "MotorControl.h"
#include <Arduino.h>

MotorControl::MotorControl(int motorPin) : _motorPin(motorPin) {
    pinMode(_motorPin, OUTPUT);
}

void MotorControl::start() {
    digitalWrite(_motorPin, HIGH);
}

void MotorControl::stop() {
    digitalWrite(_motorPin, LOW);
}
