/*
 * led_display.c
 *
 *  Created on: Nov 2, 2023
 *      Author: 84869
 */
#include "initial.h"
#include "led_display.h"
 void display7SEG(int a){
  	  switch (a){
  	  case 0:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  		  break;
  	  case 1:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  		  break;
  	  case 2:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 3:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 4:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 5:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 6:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 7:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  		  break;
  	  case 8:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  case 9:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_RESET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_RESET);
  		  break;
  	  default:
  		  HAL_GPIO_WritePin(a_GPIO_Port,a_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(b_GPIO_Port,b_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(c_GPIO_Port,c_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(d_GPIO_Port,d_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(e_GPIO_Port,e_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(f_GPIO_Port,f_Pin,GPIO_PIN_SET);
  		  HAL_GPIO_WritePin(g_GPIO_Port,g_Pin,GPIO_PIN_SET);
  	  }
    }


 int count1=Red_time;
 int count2=Green_time;
 enum LEDState {RED, YELLOW, GREEN};
 enum LEDState state1=RED;
 enum LEDState state2=GREEN;

 void resetToInitial(){
 	count1=red_value;
 	count2=green_value;
 	state1=RED;
 	state2=GREEN;
 }
 void NormalMode() {
 	count1--;
 	count2--;
 	switch (state1) {
 		case RED:
 			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_SET);
 			if (count1 < 0) {
 				count1 = Green_time - 1;
 				state1 = GREEN;
 				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_RESET);
 			}
 			break;
 		case YELLOW:
 			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_SET);
 			if (count1 < 0) {
 				count1 = Red_time - 1;
 				state1 = RED;
 				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_RESET);
 				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_SET);
 			}
 			break;
 		case GREEN:
 			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_RESET);
 			if (count1 < 0) {
 				count1 = Yellow_time - 1;
 				state1 = YELLOW;
 				HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, GPIO_PIN_RESET);
 				HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, GPIO_PIN_SET);
 			}
 			break;
 		default:
 			break;
 	}
 	switch (state2) {
 		case RED:
 			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, GPIO_PIN_SET);
 			if (count2 < 0) {
 				count2 = Green_time - 1;
 				state2 = GREEN;
 				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, GPIO_PIN_RESET);
 			}
 			break;
 		case YELLOW:
 			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, GPIO_PIN_SET);
 			if (count2 < 0) {
 				count2 = Red_time - 1;
 				state2 = RED;
 				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, GPIO_PIN_RESET);
 				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, GPIO_PIN_SET);
 			}
 			break;
 		case GREEN:
 			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, GPIO_PIN_SET);
 			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, GPIO_PIN_RESET);
 			if (count2 < 0) {
 				count2 = Yellow_time - 1;
 				state2 = YELLOW;
 				HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, GPIO_PIN_SET);
 				HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, GPIO_PIN_RESET);
 				HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, GPIO_PIN_SET);
 			}
 			break;
 		default:
 			break;
 	}

 }
 int get7SEG1Value(){
	 return count1;
 }
 int get7SEG2Value(){
	 return count2;
 }
 void LEDScanning() {
 	static int scan_index = 0;
 	switch (scan_index) {
 		case 0:
 			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_SET);
 			display7SEG(get7SEG1Value() / 10);
 			scan_index = 1;
 			break;
 		case 1:
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_SET);
 			display7SEG(get7SEG1Value() % 10);
 			scan_index = 2;
 			break;
 		case 2:
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_SET);
 			display7SEG(get7SEG2Value() / 10);
 			scan_index = 3;
 			break;
 		case 3:
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_SET);
 			display7SEG(get7SEG2Value() % 10);
 			scan_index = 4;
 			break;
 		case 4:
 			HAL_GPIO_WritePin(EN4_GPIO_Port, EN4_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, GPIO_PIN_RESET);
 			HAL_GPIO_WritePin(MODE_GPIO_Port, MODE_Pin, GPIO_PIN_SET);
 			display7SEG(mode);
 			scan_index = 0;
 			break;
 		default:
 			break;
 	}
 }
