#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "driver/gpio.h"
#include "pwm_handler.h"
	

struct motor_params{
	uint32_t ctrl_PWM_pin;
	uint32_t ctrl_start_stop_pin;
	uint32_t ctrl_brake_pin;
	uint32_t ctrl_direction_pin;

};

struct motor_params init_Nidec(uint32_t,uint32_t,uint32_t,uint32_t);

void set_outputs(struct motor_params*);

void start_motor(struct motor_params*);



#ifdef __cplusplus
}
#endif
