/*
 * display7SEG.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Acer
 */

#include "Ex1.h"

int status = 1;
int count = 0;

void ex1()
{
	if (count == 0)
	{
		count = 50;
		if (status)
		{
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			display7SEG(1);
			status = 0;
		}
		else
		{
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
			display7SEG(2);
			status = 1;
		}
	}
	count--;
}
