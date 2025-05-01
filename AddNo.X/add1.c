/*
 * File:   add1.c
 * Author: ADMIN
 *
 * Created on 28 April, 2025, 4:47 PM
 */


#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
//#include <p18f4550.h>

void main(void) {
    
    int sum = 0;
	sum = 0x0A + 0x04;
    
	TRISD = 0;
	PORTD = sum;
    return;
}
