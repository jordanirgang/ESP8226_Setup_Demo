#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "driver/gpio.h"
#include "driver/pwm.h"
#include "decl.h"
#define PWM_PIN 	4 //D2
#define START_STOP_PIN 	5
#define BRAKE_PIN	6
#define DIRECTION_PIN	7

void app_main()
{
	while(true){

		struct motor_params brushless_motor_1;
		brushless_motor_1 = init_Nidec(PWM_PIN,START_STOP_PIN,BRAKE_PIN,DIRECTION_PIN);
		printf("brushless motor %d, %d, %d, %d\n",brushless_motor_1.ctrl_PWM_pin,
		       				brushless_motor_1.ctrl_start_stop_pin,
						brushless_motor_1.ctrl_brake_pin,
						brushless_motor_1.ctrl_direction_pin);
		vTaskDelay(100 / portTICK_PERIOD_MS);
	}	
	
}
