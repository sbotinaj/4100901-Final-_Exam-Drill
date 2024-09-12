/*
 * led_lib.c
 *
 *  Created on: Sep 9, 2024
 *      Author: 57316
 */

#include "led_lib.h"

// Function blink led

void heartbeat(int8_t led_case, GPIO_TypeDef* SYSTEM_LED_GPIO_Port, uint16_t SYSTEM_LED_Pin)
{
	if(led_case==0)
	{
		// blink led for 3 seconds to 4 Hz
		for (int i=0; i<6; i++)
		{
			HAL_GPIO_WritePin(SYSTEM_LED_GPIO_Port, SYSTEM_LED_Pin, GPIO_PIN_SET);
			HAL_Delay(125);
			HAL_GPIO_WritePin(SYSTEM_LED_GPIO_Port, SYSTEM_LED_Pin, GPIO_PIN_RESET);
			HAL_Delay(125);
		}
	}
	if(led_case==1)
	{
		// blink led for 3 seconds to 0 Hz
		HAL_GPIO_WritePin(SYSTEM_LED_GPIO_Port, SYSTEM_LED_Pin, GPIO_PIN_SET);
		HAL_Delay(500);

	}
}

