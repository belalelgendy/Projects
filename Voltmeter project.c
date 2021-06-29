/*
 * Voltmeter project.c
 *
 *  Created on: ???/???/????
 *      Author: ALEX
 */

#include "Voltmeter project.h"

u8 state=0;
u8 first_time=0;

void Voltmeter (void)
{
	u8 scan_switch;
	scan_switch=u8_Read_channel(sw_pin);

	switch (scan_switch)
	{
	/*------------------------steadyState_window----------------------------------*/
	   case steadyState_window:
		   /*to clear window when move form window or first time*/
		   if (state ==Voltmeter_window || first_time==0)
		   {
			   voidClear_LCD();
			   LCD_String_xy(2,0,"Temperature=");
			   LCD_String_xy(2,15,"C");
		   }
		   /*---------------------LDR Mode---------------------------*/
		   switch (LDR_MODE())
		   {
		        case Morning :
			   LCD_String_xy(1,3,"Good Morning");
		       break;

		       case Evening :
			   LCD_String_xy(1,3,"Good Evening");
		       break;
		   }
       /*---------------------Temperature---------------------------*/
		   u32Diplay_NUMBER_XY(2,12,temperature_conversion());
		   state=steadyState_window;                         // Save state
		   first_time=1;                                    // indicating that application moved from window to other
	   break;

/*************************Voltmeter_window************************************/
	   case Voltmeter_window:
		   /*to clear window when move form window or first time*/
		   if (state ==steadyState_window || first_time==0)
		   {
			   voidClear_LCD();
			   LCD_String_xy(1,0,"Digit_Voltmeter");
			   LCD_String_xy(2,0,"Volt= ");
			   LCD_String_xy(2,11,"v");
		   }

		   f32Diplay_NUMBER_XY(2,6,Volt_Measurment());
		   state=Voltmeter_window;                         // Save state
		   first_time=1;                                   // indicating that application moved from window to other
           break;
	}
}
