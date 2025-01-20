#include "stm32f10x.h"                  // Device header
#include "Motor.h"
#include "Sensor.h"
#include "LED.h"
#include <stdint.h>

int main(void)
{
	Motor_Init();
    Sensor_Init();
	LED_Init();
	uint8_t l_sensor,r_sensor;
	while(1)
	{
		l_sensor=Get_Lsensor();
		r_sensor=Get_Rsensor();
		if(l_sensor != 1 && r_sensor != 1)
		{
			Forword();
		}
		else if(l_sensor != 1)
		{
			Turn_Left();
		}
		else if(r_sensor != 1)
		{
			Turn_Right();
		}
		else
		{
			Stop();
		}
	}
	
		
}
