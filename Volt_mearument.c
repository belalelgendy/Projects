/*
 * Voltmeter.c
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */


#include "Volt_mearument.h"


f32 Volt_Measurment(void)
{
	f32 temp1=0;
	temp1=void_StartConversion_Readvoltage(Volt_Measurment_channel)*Step_resolution;
	return temp1;
}
