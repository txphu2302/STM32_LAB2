/*
 * update7SEG.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Acer
 */

#include "update7SEG.h"

void update7SEG(int index)
{
	switch (index)
	{
	case 0:
		// Display the first 7 SEG with led_buffer[0]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[index]);
		break;
	case 1:
		// Display the second 7 SEG with led_buffer[1]
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[index]);
		break;
	 case 2:
		 // Display the third 7 SEG with led_buffer[2]
		 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		 display7SEG(led_buffer[index]);
		 break;
	 case 3:
		 // Display the forth 7 SEG with led_buffer[3]
		 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		 display7SEG(led_buffer[index]);
		 break;
	 default:
		 break;
	 }
 }
