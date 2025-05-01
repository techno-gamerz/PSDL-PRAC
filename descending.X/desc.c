/*
 * File:   desc.c
 * Author: ADMIN
 *
 * Created on 30 April, 2025, 4:17 PM
 */

#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void bubble_sort(int arr[], int size);

void main(void) {
    int arr[SIZE] = {4, 2, 9, 6, 7};
    
    bubble_sort(arr, SIZE);
    
    return;
}

void bubble_sort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if(arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;                
            }
        }
    }
}