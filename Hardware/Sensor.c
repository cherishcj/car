#include "stm32f10x.h"                  // Device header
void Sensor_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);		//开启GPIOA的时钟
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);						//将PA4和PA5引脚初始化为推挽输出	
}

uint8_t Get_Lsensor(void)
{
	return GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_4);          
}

uint8_t Get_Rsensor(void)
{
	return GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1);         
}
