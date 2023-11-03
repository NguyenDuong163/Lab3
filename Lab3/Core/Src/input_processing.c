/*
 * input_processing.c
 *
 *  Created on: Nov 2, 2023
 *      Author: 84869
 */
#include "main.h"
#include "initial.h"
#include "input_reading.h"
enum ButtonState { BUTTON_RELEASED , BUTTON_PRESSED ,BUTTON_PRESSED_MORE_THAN_1_SECOND } ;
enum ButtonState buttonState[3] = {BUTTON_RELEASED} ;
void fsm_for_input_processing ( void ){
	switch ( buttonState[0] ){
	case BUTTON_RELEASED :
		if( is_button_pressed (0)){
			buttonState[0] = BUTTON_PRESSED ;
			mode++;
			if (mode>4){
				mode=1;
				resetToInitial();
			}
			// INCREASE VALUE OF PORT A BY ONE UNIT
		}
		break ;
	case BUTTON_PRESSED :
		if (! is_button_pressed (0)){
			buttonState[0] = BUTTON_RELEASED ;
		}
		break ;
	default:
		break;
	}
}

void IncreaseManualValue(){
	switch (mode){
	case 2:
		red_manual++;
		if (red_manual>99) red_manual =0;
		break;
	case 3:
		yellow_manual++;
		if (yellow_manual >99) yellow_manual=0;
		break;
	case 4:
		green_manual ++;
		if (green_manual >99) green_manual=0;
		break;
	default:
		break;
	}
}

