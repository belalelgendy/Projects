/*
 * LDR_sensor.h
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */

#ifndef LDR_SENSOR_H_
#define LDR_SENSOR_H_

#include "ADC.h"
#include "basic_function.h"
#include "data_types.h"

// LDR_channel----> channel_ADC in AVR

#define LDR_channel     4
#define Morning         0
#define Evening         1
#define LDR_threshold  2.5

f32 LDR_conversion(void);
u8 LDR_MODE(void);

#endif /* LDR_SENSOR_H_ */
