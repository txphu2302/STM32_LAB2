/*
 * timer_software.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Acer
 */
#include "timer_software.h"

int timer1_flag = 0;
int timer2_flag = 0;
int timer1_counter = 1;
int timer2_counter = 1;
int TIMER_CYCLE = 10;

void setTimer1(int duration)
{
	timer1_counter = duration / TIMER_CYCLE;
	timer1_flag = 0;
}

void setTimer2(int duration)
{
	timer2_counter = duration / TIMER_CYCLE;
	timer2_flag = 0;
}


void timerRun()
{
	if (timer1_counter == 0)
	{
		timer1_flag = 1;
	}
	if (timer2_counter == 0)
	{
		timer2_flag = 1;
	}
	timer1_counter--;
	timer2_counter--;
}
