#include <stdio.h>
#include <math.h>

int main(){
    float amount,rate,time;
    printf("Enter the amount: ");
    scanf("%f",&amount);
    printf("Enter the rate: ");
    scanf("%f",&rate);
    printf("Enter the time: ");
    scanf("%f",&time);
    //SIMPLE INTEREST
    int si = amount * rate * time / 100;
    printf("Simple Interest : %d\n",si);

    //COMPOUND INTEREST
    float ci = amount * pow(1 + rate/100,time);
    printf("Compund Interest : %.2f",ci);

    return 0;



}