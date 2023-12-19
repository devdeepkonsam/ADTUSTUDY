#include <stdio.h>
#include <math.h>

int main(){
    float principal,rate,time;
    float amount;
    printf("Enter the principal : ");
    scanf("%f",&principal);
    printf("Enter the rate : ");
    scanf("%f",&rate);
    printf("Enter the time : ");
    scanf("%f",&time);
    amount = principal * pow(1 + rate / 100,time);
    printf("%.2f is the compound interest",amount);
    return 0;

}