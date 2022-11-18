/**
  ******************************************************************************
  * @file    main.c
  * @author  Sameh Belaid
  * @brief   GPIO DRIVER
  * @version V1.0.0
  * @date    16-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "gpio.h"
/*----------------Private Functions Prototype---------------------------------*/


/* Private define ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/


int main()
{

GPIO_Clock_Enable(GPIOD);
GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL);
  while(1)
  {
  
  }
}

/**************************************END OF FILE**************************************/