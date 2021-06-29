/*
 * Temp_sensor.c
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */

#include "temp_sensor.h"


u32 temperature_conversion()
{
	u8 temp3=0;
	temp3=(u8)(void_StartConversion_Readvoltage(temperature_channel)*Step_resolution*100);
	return temp3;
}
