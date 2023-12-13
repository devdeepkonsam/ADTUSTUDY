#include <stdio.h>

int main(){

    int divisor,dividend,quotient,remainder;
    printf("Enter the dividend: ");
    scanf("%d",&dividend);
    printf("Enter the divisor: ");
    scanf("%d",&divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotinet -> %d \nRemainder -> %d ",quotient,remainder);
    return 0;
    
}