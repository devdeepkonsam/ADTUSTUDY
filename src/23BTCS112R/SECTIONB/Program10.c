#include <stdio.h>

int main (){
    int farhenheit, celcius;
    printf("Enter the farhenheit :");
    scanf("%d",&farhenheit);
    celcius = (farhenheit - 32)* 5/9;  //far -32 * 5 / 9
    printf("%d Farhenheit is equal to %d Celcius.",farhenheit,celcius);
    return 0;
}