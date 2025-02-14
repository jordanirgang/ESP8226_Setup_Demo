#include "Nidec24H055M020.h"
//#include "driver/pwm.h"
struct motor_params init_Nidec(uint32_t pwm_pin,
				uint32_t start_stop,
				uint32_t brake,
				uint32_t dir){

	struct motor_params mp;
	mp.ctrl_PWM_pin = pwm_pin;
	mp.ctrl_start_stop_pin = start_stop;
	mp.ctrl_brake_pin = brake;
	mp.ctrl_direction_pin = dir;
	return mp;
}

void set_outputs(struct motor_params* mp){
	//TODO add pwm init here	
	gpio_set_direction(mp->ctrl_start_stop_pin,GPIO_MODE_OUTPUT);
	gpio_set_direction(mp->ctrl_brake_pin,GPIO_MODE_OUTPUT);
	gpio_set_direction(mp->ctrl_direction_pin,GPIO_MODE_OUTPUT);
}

void start_motor(struct motor_params* mp){

}
