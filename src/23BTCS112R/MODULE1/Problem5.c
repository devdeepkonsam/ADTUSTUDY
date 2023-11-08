#include <stdio.h>
int main()
{
    int fah;
    float cel;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d",&fah);
    cel = (((float)fah-32)*5)/9; //type casting int value to be float
    printf("%.2f c",cel);
    return 0;
}