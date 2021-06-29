/*
 * ADC.h
 *
 *  Created on: 22 Mar 2020
 *      Author: HP
 */

#include"Main_Library.h"


/*----------------------PRESCALER Options-----------------------
 1 = CLK/2    2=CLK/4    3=CLK/8     4=CLK/16
 5=CLK/32    6=CLK/64    7=CLK/128                       */
#define PRESCALER  7
/*------------------- --Voltage Reference---- -----------------*/
#define   Vref       1      // 1=5V----2=2.5V
#define  no_channel 3
/*-------------------------------------------------------------*/
#define Enable_Intrrupt  OFF
#define Step_resolution    0.0048    // 5 (max_volt) / 1023 (2 ^10)
/*-------Register ADC-----------*/
#define ADC_Multiplexer_Channel   		 *((volatile u8*)0x27)
#define ADC_Control   		 	 	 	 *((volatile u8*)0x26)
#define ADC_LOW_DATA  			 		 *((volatile u8*)0x24)
#define ADC_HIGH_DATA  			 		 *((volatile u8*)0x25)
/*-----------PINS--------------------*/
#define ADPS0   0
#define ADPS1   1
#define ADPS2   2
#define ADIE    3
#define ADIF    4
#define ADATE   5
#define ADSC    6
#define ADEN    7

#define MUX0    0
#define MUX1    1
#define MUX2    2
#define MUX3    3
#define MUX4    4
#define ADLAR   5
#define REFS0   6
#define REFS1   7
/*--------------------------Function --------------------------*/
void void_INITADC(void);
f32 void_StartConversion_Readvoltage(u8 channel);

/*--------------------------------------------------------------*/
