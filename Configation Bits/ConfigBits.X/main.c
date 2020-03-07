/* 
 * File:   main.c
 * Author: IBRAHIM LABS
 *
 * Website: http://ibrahimlabs.blogspot.com/
 *
 * Created on September 3, 2013, 10:16 AM
 */

#include <xc.h>

/*
 * 
 */
#ifndef OVERRIDE_CONFIG_BITS
    
    #pragma config FPLLIDIV = DIV_2         // PLL Input Divider
    #pragma config FPLLODIV = DIV_1         // PLL Output Divider
    #pragma config FPBDIV   = DIV_1         // Peripheral Clock divisor
    #pragma config FWDTEN   = OFF           // Watchdog Timer
    #pragma config POSCMOD  = HS            // Primary Oscillator
    #pragma config FNOSC    = PRIPLL        // Oscillator Selection
    #pragma config FPLLMUL  = MUL_20        // PLL Multipler

#endif // OVERRIDE_CONFIG_BITS


int main() {


    int i;    
    
    TRISBbits.TRISB0 = 0;       /*  making this pin as output   */
    
    LATBbits.LATB0 = 1;         /*  writing 1 to this PINB0     */

    while( 1)
    {
        /*  this code will toggle the state of PIN B0*/
        LATBbits.LATB0 = ~LATBbits.LATB0;

        for (i = 0; i < 0xFFFF; i++)
            ;
    } 
    return 0;
}
