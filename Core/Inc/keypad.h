/*
 * keypad.h
 *
 *  Created on: Sep 2, 2024
 *      Author: saaci
 */

#ifndef INC_KEYPAD_H_
#define INC_KEYPAD_H_

#include <stdint.h>

/**
 * @brief Scans the keypad for a pressed key.
 *
 * This function scans the keypad and returns the value of the pressed key.
 *
 * @param GPIO_Pin The GPIO pin associated with the keypad.
 * @return The value of the pressed key as an 8-bit unsigned integer.
 */
uint8_t keypad_scan(uint16_t GPIO_Pin);


#endif /* INC_KEYPAD_H_ */
