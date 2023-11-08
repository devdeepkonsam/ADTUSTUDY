#include <stdio.h>

int main(){
    int dividend , divisor, quotient,remainder;
    printf("Enter the dividend: ");
    scanf("%d",&dividend);
    printf("Enter the divisor: ");
    scanf("%d",&divisor);
    quotient = dividend/divisor;
    remainder = dividend%divisor;
    printf("Quotient : %d Remainder :%d ",quotient,remainder);
    return 0;
}