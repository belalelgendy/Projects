/*
 * Voltmeter project.h
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */

#ifndef VOLTMETER_PROJECT_H_
#define VOLTMETER_PROJECT_H_

#include"Main_Library.h"
#include "temp_sensor.h"
#include "Volt_mearument.h"
#include "LDR_sensor.h"


#define sw_pin               PORTD0

#define steadyState_window      1
#define Voltmeter_window        0

void Voltmeter (void);

#endif /* VOLTMETER_PROJECT_H_ */
