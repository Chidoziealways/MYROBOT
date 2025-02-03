#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H

class MotorControl {
public:
    MotorControl(int motorPin);
    void start();
    void stop();
private:
    int _motorPin;
};

#endif
