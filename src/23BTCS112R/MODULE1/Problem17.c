#include <stdio.h>
int main ()
{ 
    int num1, num2, temp;
    printf("Enter the two number : ");
    scanf("%d%d",&num1,&num2);
    printf("before swap num1=%d and num2=%d\n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("after swap num1=%d and num2=%d\n",num1,num2);
    /*Now reswap the number without using temp */
    printf("Now without using temp\n");
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    printf("after swap num1=%d and num2=%d",num1,num2);
    
    return 0;
}