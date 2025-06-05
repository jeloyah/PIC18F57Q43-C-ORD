#include <xc.h>
#include "pwm3.h"

/* PWM Initialization */
void PWM3_Initialize(void) {  
     

    /* PWM31 output is high true; PWM32 output is high-true. left-aligned mode */
    PWM3S1CFG = 00;
        
   
    
     /* PWMC is enabled; reload registers */
    PWM3CON = 0x84;
}
