#pragma once
#ifdef __cplusplus
extern "C"{
#endif
#include <stdio.h>
#include "driver/pwm.h"
#define PERIOD  1000
uint32_t pwm_duty_cycle = 10;
uint32_t pwm_pins[8];
uint8_t pwm_pin_num = 0;
uint32_t pwm_dutys[8];

void add_pwm_pin(uint32_t,uint32_t);
void start_pwm_pins();

#ifdef __cplusplus
}
#endif

