/*
 * timer.c
 *
 *  Created on: Nov 2, 2023
 *      Author: 84869
 */
#include "timer.h"


int timer0_counter = 0;
int timer0_flag = 0;
int timer1_counter = 0;
int timer1_flag = 0;


void setTimer0(int duration) {
	timer0_counter = duration / TIMER_CYCLE;
	timer0_flag = 0;
}
void setTimer1(int duration) {
	timer1_counter = duration / TIMER_CYCLE;
	timer1_flag = 0;
}

void timer_run() {
	if (timer0_counter > 0) {
		timer0_counter--;
		if (timer0_counter == 0) timer0_flag = 1;
	}

	if (timer1_counter > 0) {
		timer1_counter--;
		if (timer1_counter == 0) timer1_flag = 1;
	}
}

int get_timer0_flag() {
	return timer0_flag;
}
int get_timer1_flag() {
	return timer1_flag;
}

void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim ){
	timer_run();
	if(htim -> Instance == TIM2 ){
		button_reading ();
	}
}

