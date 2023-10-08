/*
 * File:   led.c
 * Author: pc
 *
 * Created on 04 October 2023, 15:13
 */


#include <xc.h>
#include "anas.h"
#define _XTAL_FREQ 4000000
void main(void) {
    
    TRISB5= 1;      //Set pin B5 as a input controled by the BUTTON
    TRISB1= 0;      // SET pin B1 as an output to control LED
    
    while(1)
    {
       while(!RB5)
       {
           RB1 = 1;
           __delay_ms(500);
           RB1 = 0;
           __delay_ms(500);
       }
    }
    
    return;
}
