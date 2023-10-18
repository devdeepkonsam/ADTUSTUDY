#include <stdio.h>
#define pi 3.14
int main(){
    int radius;
    float volume;
    printf("Enter the radius of the sphere in cm : ");
    scanf("%d",&radius);
    volume = (4.0 / 3.0) * pi * radius * radius * radius;
    printf("Volume of the sphere is %.2f cm3",volume);
    return 0;
    }