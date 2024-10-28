/*
 * Ex9.h
 *
 *  Created on: Oct 28, 2024
 *      Author: Acer
 */

#ifndef INC_UPDATELEDMATRIX_H_
#define INC_UPDATELEDMATRIX_H_

#include "timer_software.h"
#include "main.h"

extern const int MAX_LED_MATRIX;
extern uint8_t matrix_buffer[8];
extern int index_led_matrix;
void displayMatrix(uint8_t matrix_buffer[], int index);
void updateLEDMatrix(int index);
void ex9();

#endif /* INC_UPDATELEDMATRIX_H_ */
