/*
 * timer_software.h
 *
 *  Created on: Oct 28, 2024
 *      Author: Acer
 */

#ifndef INC_TIMER_SOFTWARE_H_
#define INC_TIMER_SOFTWARE_H_

extern int timer1_flag;
extern int timer2_flag;
extern int TIMER_CYCLE;

void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();

#endif /* INC_TIMER_SOFTWARE_H_ */
