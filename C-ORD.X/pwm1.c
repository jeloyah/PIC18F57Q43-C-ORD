#include <xc.h>
#include "pwm1.h"

/* PWM Initialization */
void PWM1_Initialize(void) {  
        
   
    
    /* PWM11 output is high true; PWM12 output is high-true. left-aligned mode */
    PWM1S1CFG = 00;
        
  
     /* PWMC is enabled; reload registers */
    PWM1CON = 0x84;
}
