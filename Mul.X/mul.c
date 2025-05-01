/*
 * File:   mul.c
 * Author: ADMIN
 *
 * Created on 29 April, 2025, 3:45 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

void main(void) {
    
    int mul = 0x05 * 0x02;
    
    TRISD = 0;
    PORTD = mul;
    return;
}
