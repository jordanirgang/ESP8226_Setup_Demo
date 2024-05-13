#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>


struct motor_params{
	uint8_t ctrl_PWM_pin;
	uint8_t ctrl_start_stop_pin;
	uint8_t ctrl_brake_pin;
	uint8_t ctrl_direction_pin;

	};

struct motor_params init_Nidec(uint8_t*,uint8_t*,uint8_t*,uint8_t*);

void set_outputs(struct motor_params*);

void start_motor(struct motor_params*);



#ifdef __cplusplus
}
#endif
