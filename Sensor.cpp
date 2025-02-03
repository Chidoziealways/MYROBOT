#include "Sensor.h"
#include <Arduino.h>

Sensor::Sensor(int sensorPin) : _sensorPin(sensorPin) {
    pinMode(_sensorPin, INPUT);
}

int Sensor::readValue() {
    return analogRead(_sensorPin);
}
