/*
 * File:   imt.c
 * Author: ADMIN
 *
 * Created on 30 April, 2025, 3:28 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

void main(void) {
    int temp,i;
    int source[]={0x21,0x22,0x23,0x24,0x25};
    int dest[]={0x00,0x00,0x00,0x00,0x00};
    
    for(i=0;i<=4;i++){
        dest[i]=source[i];
    }
    
    return;
}
