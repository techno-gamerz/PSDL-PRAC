/*
 * File:   desc.c
 * Author: ADMIN
 *
 * Created on 30 April, 2025, 4:24 PM
 */


#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

void main(void){
    int temp , i , j ;
    int num[] = {10,2,5,1,6} ;
    
    for(i = 0 ; i < 5 ; i++){
        for (j = i + 1 ; j < 5 ; j++){
            if(num[i] < num[j]){
                temp = num[i] ;
                num[i] = num[j] ;
                num[j] = temp ;
            }
        }
    }
    
    TRISA = 0 ;
    TRISB = 0 ;
    TRISC = 0 ;
    TRISD = 0 ;
    TRISE = 0 ;
    
    PORTA = num[0] ;
    PORTB = num[1] ;
    PORTC = num[2] ;
    PORTD = num[3] ;
    PORTE = num[4] ;

    return;
}