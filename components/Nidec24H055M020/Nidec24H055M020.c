#include "Nidec24H055M020.h"

struct motor_params init_Nidec(uint8_t* pwm_pin,
				uint8_t* start_stop,
				uint8_t* brake,
				uint8_t* dir){

	struct motor_params mp;
	mp.ctrl_PWM_pin = *pwm_pin;
	mp.ctrl_start_stop_pin = *start_stop;
	mp.ctrl_brake_pin = *brake;
	mp.ctrl_direction_pin = *dir;
	return mp;
	
}

void set_outputs(struct motor_params* mp){
	
}

void start_motor(struct motor_params* mp){

}
