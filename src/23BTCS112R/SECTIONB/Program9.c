#include <stdio.h>

int main(){

    int celcius,fahrenheit;
    printf("Enter the celcius :");
    scanf("%d",&celcius);
    fahrenheit = (celcius * 9/5) + 32;  //celcius * 9/5 +32 
    printf("\n%d Celsius is equal to %d Fahrenheit.",celcius,fahrenheit);
    return 0;
}
