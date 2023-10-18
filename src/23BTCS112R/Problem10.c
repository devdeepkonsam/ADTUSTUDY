#include <stdio.h>

int main(){
    int length,volume;
    printf("Please Enter the length in cm :");
    scanf("%d",&length);
    volume = length*length*length;
    printf("The Volume of the cube is %d cm sq",volume);
    return 0;
}