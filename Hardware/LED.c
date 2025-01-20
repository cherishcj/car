#include "stm32f10x.h"                  // Device header

/**
  * 函    数：LED初始化
  * 参    数：无
  * 返 回 值：无
  */
void LED_Init(void)
{
	/*开启时钟*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);		//开启GPIOA的时钟
	
	/*GPIO初始化*/
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);						//将PA3,PA4,PA5引脚初始化为推挽输出
	
	/*设置GPIO初始化后的默认电平*/
	GPIO_ResetBits(GPIOB, GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5);				//设置PA3,PA4,PA5引脚为低电平
}

/**
  * 函    数：LED3开启
  * 参    数：无
  * 返 回 值：无
  */
void LED3_ON(void)
{
	GPIO_SetBits(GPIOB, GPIO_Pin_3);		//设置PA3引脚为高电平
}

/**
  * 函    数：LED3关闭
  * 参    数：无
  * 返 回 值：无
  */
void LED3_OFF(void)
{
	GPIO_ResetBits(GPIOB, GPIO_Pin_3);		//设置PA3引脚为低电平
}

/**
  * 函    数：LED4开启
  * 参    数：无
  * 返 回 值：无
  */
void LED4_ON(void)
{
	GPIO_SetBits(GPIOB, GPIO_Pin_4);		//设置PA4引脚为高电平
}

/**
  * 函    数：LED4关闭
  * 参    数：无
  * 返 回 值：无
  */
void LED4_OFF(void)
{
	GPIO_ResetBits(GPIOB, GPIO_Pin_4);		//设置PA4引脚为低电平
}

/**
  * 函    数：LED4开启
  * 参    数：无
  * 返 回 值：无
  */
void LED5_ON(void)
{
	GPIO_SetBits(GPIOB, GPIO_Pin_5);		//设置PA5引脚为高电平
}

/**
  * 函    数：LED4关闭
  * 参    数：无
  * 返 回 值：无
  */
void LED5_OFF(void)
{
	GPIO_ResetBits(GPIOB, GPIO_Pin_5);		//设置PA5引脚为低电平
}
