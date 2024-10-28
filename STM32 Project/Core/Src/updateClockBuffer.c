/*
 * updateClockBuffer.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Acer
 */

#include "updateClockBuffer.h"

int led_buffer[4];
int hour = 15 , minute = 8 , second = 50;
int status = 0;

//Todo Ex5
void updateClockBuffer()
{
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
	switch(status)
	{
	case 0:
		update7SEG(0);
		status++;
		break;
	case 1:
		update7SEG(1);
		status++;
		break;
	case 2:
		update7SEG(2);
		status++;
		break;
	case 3:
		update7SEG(3);
		status = 0;
		break;
	default:
		break;
	}
}
