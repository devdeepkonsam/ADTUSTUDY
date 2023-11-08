#include <stdio.h>
int main()
{
    int num,fac=1;
    printf("Enter the Number: ");
    scanf("%d",&num);
    while(num>0){
        fac = num*fac;
        num--;
    }
    printf("Factorial is %d",fac);
    return 0;
}