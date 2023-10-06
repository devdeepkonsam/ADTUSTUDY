#include <stdio.h>
int main()

/*C program to find the discriminant value of the quadratic equation
  from the given input a, b, c*/

{
    int a = 1 , b = -2, c = 3;
    //formula for discriminant is d = bsqr - 4ac
    int d = (b*b)- 4*a*c;
    printf("%d",d);
    return 0;
}