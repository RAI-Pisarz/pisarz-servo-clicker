#ifndef LUT_H
#define LUT_H

#include <stdint.h>
#include <Adafruit_PWMServoDriver.h>

extern Adafruit_PWMServoDriver servoDriver;

extern const uint8_t servoChannelLUT[96];
extern const Adafruit_PWMServoDriver *servoDriverLUT[96];


#endif