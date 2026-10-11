#ifndef STEPPER_MOTOR_H
#define STEPPER_MOTOR_H

#include <stdint.h>

void stepper_motor_setDirection(uint8_t direction);
void stepper_motor_generatePulse(uint32_t delay_time_us);

#endif