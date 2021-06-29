/*
 * main.c
 *
 *  Created on: 26 Dec 2020
 *      Author: HP
 */


#include"Main_Library.h"

int main()
{
	void_initDIO();
	void_LCD_INIT();
	void_INITADC();
	void_write_channel(PORTD0,high);
	while(1)
	{

		Voltmeter();
	}
}
