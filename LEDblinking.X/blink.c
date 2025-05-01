/*
 * File:   blink.c
 * Author: ADMIN
 *
 * Created on 30 April, 2025, 11:32 PM
 */


// main.c

#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "config.h"

void main(void) {
    LED_TRIS = 0;   // Set RB0 as output
    LED = 0;        // Initially turn off the LED
/*
    while (1) {
        LED = 1;       // Turn LED ON
        __delay_ms(500);

        LED = 0;       // Turn LED OFF
        __delay_ms(500);
    }
*/
    while(1){
        LED = ~LED;
        __delay_ms(500);
    }
}


/*
 #include <p18f4550.h> //Include Controller specific .h
//Configuration bit settings
#pragma config FOSC = HS //Oscillator Selection
#pragma config WDT = OFF //Disable Watchdog timer
#pragma config LVP = OFF //Disable Low Voltage Programming
//Declarations
#define LED PORTCbits.RC2 //LED interfaced to RC2 pin of microcontroller
//Function Prototypes
void msdelay (unsigned int time);//Function for delay
//Start of Program Code
void main() //Main Program
{
	TRISCbits.TRISC2 = 0; //To configure RC2 (LED Pin) as output
	LED = 0; //Turn OFF LED at initial stage
	while (1) 
	{
		LED = 1;  // Turn ON the LED
		msdelay(250);
		LED = 0;  // Turn OFF the LED
		msdelay(250);
	} 
}

//Function Definitions
void msdelay (unsigned int time)//Function for delay
{
	unsigned int i, j;
	for (i = 0; i < time; i++)
	for (j = 0; j < 275; j++); //Calibrated for a 1 ms delay in MPLAB
}
 */