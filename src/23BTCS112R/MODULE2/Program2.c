#include <stdio.h>
int main()
{
    int num,sum=0,i=0;
    printf("Enter the n number : ");
    scanf("%d",&num);
    while(i<=num){
        sum = (i*i)+sum;
        i++;
    }
    printf("The summation of the n numbers is %d\n",sum);
    return 0;
}