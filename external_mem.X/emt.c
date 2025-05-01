/*
 * File:   emt.c
 * Author: ADMIN
 *
 * Created on 30 April, 2025, 3:32 PM
 */


#include <xc.h>

void main(void) {
    int temp,i;
    int source[]={0x21,0x22,0x23,0x24,0x25};
    int dest[]={0x99,0x99,0x99,0x99,0x99};
    
    for(i=0;i<=4;i++){
        temp=source[i];
        source[i]=dest[i];
        dest[i]=temp;
    }
    
    return;
}
