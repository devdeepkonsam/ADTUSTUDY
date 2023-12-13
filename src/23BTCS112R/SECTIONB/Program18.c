#include <stdio.h>

int main(){
    int length, volume;
    printf("Enter the edge :");
    scanf("%d",&length);
    volume = length*length*length;
    printf("Volume of the square is %d ",volume);
    return 0;

}