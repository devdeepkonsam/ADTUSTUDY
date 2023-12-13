#include <stdio.h>

int main(){
    int length, breadth, perimeter;
    printf("Enter the length :");
    scanf("%d",&length);
    printf("Enter the breadth :");
    scanf("%d",&breadth);
    perimeter = 2 * (length+breadth);
    printf("The perimeter of the rectangle is %d",perimeter);
    return 0 ;
}