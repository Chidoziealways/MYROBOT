#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    Sensor(int sensorPin);
    int readValue();
private:
    int _sensorPin;
};

#endif
