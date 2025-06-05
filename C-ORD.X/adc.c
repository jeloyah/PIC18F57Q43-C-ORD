#include <xc.h>
#include "adc.h"

void ADC_Initialize(void)
{


	
}


void ADC_Start(void)
{
	/* GO = 1 */
	ADCON0 |= 0x01;
}

