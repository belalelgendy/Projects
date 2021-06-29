/*

 * Voltmeter.h
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */

#ifndef VOLT_MEARUMENT_H_
#define VOLT_MEARUMENT_H_

#include "ADC.h"
#include "basic_function.h"
#include "data_types.h"

// Volt_Measurment_channel ----> channel_ADC in AVR
#define Volt_Measurment_channel  5

f32 Volt_Measurment(void);

#endif /* VOLT_MEARUMENT_H_ */
