/*
 * adc.c
 *
 *  Created on: 22 Mar 2020
 *      Author: HP
 */


#include "ADC.h"



void void_INITADC(void)
{
	Set_BIT(ADC_Control,ADEN);             //Enable ACD

	/*------------Select V_Referenece--------------------*/
#if(Vref ==1)
 {
	Set_BIT(ADC_Multiplexer_Channel,REFS0);
 }

#elif (Vref==2)
	 {
	Set_BIT(ADMUX,REFS0);
	Set_BIT(ADMUX,REFS1);
	}
#endif
			/*-----------------Select PRESCALER------------------*/
#if (PRESCALER==1)
	{
	Set_BIT(ADCSRA,ADPS0);
	}
#elif (PRESCALER==2)
	{
	Set_BIT(ADCSRA,ADPS1);
	}
#elif  (PRESCALER==3)
	{
	Set_BIT(ADCSRA,ADPS0);
	Set_BIT(ADCSRA,ADPS1);
#elif  (PRESCALER==4)
	{
	Set_BIT(ADCSRA,ADPS2);
	}
#elif  (PRESCALER==5)
	{
	Set_BIT(ADCSRA,ADPS0);
	Set_BIT(ADCSRA,ADPS2);
	}
#elif  (PRESCALER==6)
	{
	Set_BIT(ADCSRA,ADPS1);
	Set_BIT(ADCSRA,ADPS2);
	}
#elif  (PRESCALER==7)
	{
	Set_BIT(ADC_Control,ADPS0);
	Set_BIT(ADC_Control,ADPS1);
	Set_BIT(ADC_Control,ADPS2);
	}
#endif
		/*--------------Enable Interrupt---------------*/
#if (Enable_Intrrupt == ON)
	{
	Set_BIT(ADC_Control,ADIE);
	}
#elif  (Enable_Intrrupt == OFF)
	}
	Clear_BIT(ADCSRA,ADIE);

#endif
}
/*--------------Start-Conversion---------------*/
f32 void_StartConversion_Readvoltage(u8 channel)
{
	f32 ADCOut;
	channel &= 0b00000111;
	ADC_Multiplexer_Channel=(ADC_Multiplexer_Channel & 0xF8)|channel;
	Set_BIT(ADC_Control,ADSC);               //Start-Conversion
	while ((ADC_Control &(1<<ADIF)) == 0); //End-Conversion
	ADCOut=ADC_LOW_DATA|(ADC_HIGH_DATA<<8);              //Read-data after shifting ADCH
	return ADCOut;
}


/*---------------------------------------------*/





