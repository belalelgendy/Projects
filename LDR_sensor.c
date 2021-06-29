/*
 * LDR_sensor.c
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */

#include "LDR_sensor.h"


f32 LDR_conversion(void)
{
	 f32 LDR;
	 LDR=void_StartConversion_Readvoltage(LDR_channel)*Step_resolution;
	return LDR;
}

u8 LDR_MODE(void)
{
	u8 state;
	state=(LDR_conversion() > LDR_threshold) ?  Morning : Evening ;
	return state;

}
