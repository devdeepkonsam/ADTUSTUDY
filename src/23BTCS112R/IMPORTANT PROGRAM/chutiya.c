#include <stdio.h>

int main() 
{
    int a = 10;
    int b = 90;
    printf("%p",&a);
    printf("\n%d",&a);
    printf("\n%p",&b);
    printf("\n%d",&b);
    printf("\n%d",*a);
    printf("\n%d",*b);
    return 0;
}