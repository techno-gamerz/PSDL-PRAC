/*
 * File:   div.c
 * Author: ADMIN
 *
 * Created on 30 April, 2025, 3:13 PM
 */


#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

void main(void) {
    
    int div = 0x0A / 0x03;
    int rem = 0x0A % 0X03;
    
    TRISC = 0;
    TRISD = 0;
    
    PORTC = div;
    PORTD = rem;
    return;
}
