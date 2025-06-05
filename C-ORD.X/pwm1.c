#include <xc.h>
#include "pwm1.h"

/* PWM Initialization */
void PWM1_Initialize(void) {  
        
    /* PWM1 Compare clock source = HFINTOSC */
	PWM1CLK = 0x03;  
    
    /* PWM Clock Prescale Value = 100 */
    PWM1CPRE = 0x63;
    
    PWM1PRH = 0x00;
    PWM1PRL = 0xFF;
    
    /* PWM11 output is high true; PWM12 output is high-true. left-aligned mode */
    PWM1S1CFG = 00;
        
    /* Compare match occurs when PWM1 counter = 8dec (8h)*/
    /* 8 * 1us = 8 us (d.c. = 8 us / 100 us = 8%) */
    PWM1S1P1H = 0x00;
    PWM1S1P1L = 0x1;
       
     /* PWMC is enabled; reload registers */
    PWM1CON = 0x84;
}