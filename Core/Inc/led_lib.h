/*
 * led_lib.h
 *
 *  Created on: Sep 9, 2024
 *      Author: 57316
 */

#ifndef INC_LED_LIB_H_
#define INC_LED_LIB_H_

void heartbeat(int8_t led_case, GPIO_TypeDef* SYSTEM_LED_GPIO_Port, uint16_t SYSTEM_LED_Pin);

#endif /* INC_LED_LIB_H_ */
