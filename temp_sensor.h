/*
 * temp_sensor.h
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */

#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_

#include "ADC.h"
#include "basic_function.h"
#include "data_types.h"

// temperature_channel----> channel_ADC in AVR
#define temperature_channel  3

u32 temperature_conversion();

#endif /* TEMP_SENSOR_H_ */
