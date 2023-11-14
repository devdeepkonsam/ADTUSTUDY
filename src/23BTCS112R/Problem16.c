#include <stdio.h>
 
int main()
{
    int num1 = 2147483647;  //maximum value of int 
    int num2 = -2147483649;  //minimum value of int 
    printf("%d\n",num1);
    printf("%d\n",num2);
    int num3 = 2147483648;   
    printf("%d\n",num3); //after adding 1 in maximun int value we get -2147483648


    /*long keyword */
    long int num =2147483649;
    printf("%d\n",num);

    return 0;
}