#include <stdio.h>
int main(){
    char ch1,ch2;
    int sum =0;
    printf("Enter the character:");
    scanf("%c",&ch1);
    printf("Enter the character:");
    scanf("\n%c",&ch2);
    printf("ASCII value of %c -> %d and %c -> %d \n",ch1,(int)ch1,ch2,(int)ch2);
    sum = ch1 + ch2;
    printf("Sum of the ASCII value of '%c' and '%c' is %d",ch1,ch2,sum);
    return 0;
}