/*
 * File:   addarray.c
 * Author: ADMIN
 *
 * Created on 28 April, 2025, 5:54 PM
 */


#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

void main(void) {
    
    int i;
    int n[] = {2,6,3,8,4};
    int sum = 0;
    
    for(i = 0; i < 5; i++){
        sum += n[i];
    }
    
    TRISD = 0;
    PORTD = sum;
    return;
}
