#include "pwm_handler.h"

void add_pwm_pin(uint32_t pin,uint32_t duty){
	if (pwm_pin_num < 8){
		pwm_pins[pwm_pin_num] = pin;
		pwm_dutys[pwm_pin_num] = duty;
		pwm_pin_num = pwm_pin_num + 1;
	}
}

void start_pwm_pins(){
	pwm_init(PERIOD,pwm_dutys,pwm_pin_num,pwm_pins);
	pwm_start();

}
