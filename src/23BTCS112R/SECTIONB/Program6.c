#include <stdio.h>
int main()
{
    int a = 10,b=13;
    printf("Before the swap a->%d and b->%d\n",a,b);

    //Using temp variable
    int temp = a; // temp = 10
    a = b; //a = 13
    b = temp; //b = 10
    printf("After the swap a->%d and b->%d\n",a,b);
    
    //By Summation
    a = a + b; // a = 10+13 -> 23
    b = a - b; // b = 23-13 -> 10
    a = a - b; // a = 23-10 -> 13
    printf("Again after swap a->%d and b->%d",a,b);


    return 0;


}