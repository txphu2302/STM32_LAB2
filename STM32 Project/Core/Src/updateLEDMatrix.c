/*
 * Ex9.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Acer
 */

#include <stdint.h>
#include <updateLEDMatrix.h>

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer [8] = {
		0b00011000,
		0b00111100,
		0b01100110,
		0b01100110,
		0b01111110,
		0b01100110,
		0b01100110,
		0b01100110
};

void displayMatrix(uint8_t matrix_buffer[], int index)
{
	for (int i = 0; i < 8; i++)
	{
		if ((matrix_buffer[index] >> i) & 1)
		{
			switch(i)
			{
			case 0:
				HAL_GPIO_WritePin(GPIOA, ENM7_Pin, RESET);
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOA, ENM6_Pin, RESET);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOA, ENM5_Pin, RESET);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOA, ENM4_Pin, RESET);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOA, ENM3_Pin, RESET);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOA, ENM2_Pin, RESET);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOA, ENM1_Pin, RESET);
				break;
			case 7:
				HAL_GPIO_WritePin(GPIOA, ENM0_Pin, RESET);
				break;
			default:
				break;
			}
		}
		else
		{
			switch(i)
			{
				case 0:
					HAL_GPIO_WritePin(GPIOA, ENM7_Pin, SET);
					break;
				case 1:
					HAL_GPIO_WritePin(GPIOA, ENM6_Pin, SET);
					break;
				case 2:
					HAL_GPIO_WritePin(GPIOA, ENM5_Pin, SET);
					break;
				case 3:
					HAL_GPIO_WritePin(GPIOA, ENM4_Pin, SET);
					break;
				case 4:
					HAL_GPIO_WritePin(GPIOA, ENM3_Pin, SET);
					break;
				case 5:
					HAL_GPIO_WritePin(GPIOA, ENM2_Pin, SET);
					break;
				case 6:
					HAL_GPIO_WritePin(GPIOA, ENM1_Pin, SET);
					break;
				case 7:
					HAL_GPIO_WritePin(GPIOA, ENM0_Pin, SET);
					break;
				default:
					break;
			}
		}
	}
}

void updateLEDMatrix(int index)
{
	switch (index)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, SET);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, RESET);
		break;
	default:
		break;
	}

	displayMatrix(matrix_buffer, index);
}

