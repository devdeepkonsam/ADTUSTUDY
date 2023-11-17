#include <stdio.h>
int main(){
    int length , width , perimeter;
    printf("Please Enter the length and width respectively in cm : ");
    scanf("%d%d",&length,&width);
    perimeter = 2 *(length+width);
    printf("The perimeter of the rectangle is %d cm",perimeter);
    return 0 ;
}