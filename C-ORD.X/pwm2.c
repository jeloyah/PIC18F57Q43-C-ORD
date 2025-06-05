#include <xc.h>
#include "pwm2.h"

/* PWM Initialization */
void PWM2_Initialize(void) {  
      

    
    /* PWM21 output is high true; PWM22 output is high-true. left-aligned mode */
    PWM2S1CFG = 00;
        
  
    
     /* PWMC is enabled; reload registers */
    PWM2CON = 0x84;
}
