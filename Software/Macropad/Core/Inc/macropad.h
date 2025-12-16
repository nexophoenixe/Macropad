/*
 * macropad.h
 *
 *  Created on: 24 Nov 2025
 *      Author: jangr
 */

#ifndef INC_MACROPAD_H_
#define INC_MACROPAD_H_



#endif /* INC_MACROPAD_H_ */

#include "stm32f4xx_hal.h"
#include "main.h"
#include "usb_device.h"



typedef struct {
	uint8_t MODIFIER;
	uint8_t RESERVED;
	uint8_t KEYCODE1;
	uint8_t KEYCODE2;
	uint8_t KEYCODE3;
	uint8_t KEYCODE4;
	uint8_t KEYCODE5;
	uint8_t KEYCODE6;
}keyRepStruct;



uint16_t PORT_shifting();


