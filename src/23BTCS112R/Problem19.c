#include<stdio.h>
  int main()
  {
    int num1, num2;
    printf("Enter the two number ");
    scanf("%d %d",&num1,&num2);
    for(int i = 1;i<=10;i++){
        printf("[ %d * %d = %d ] [%d * %d = %d]\n",num1,i,num1*i,num2,i,num2*i);
    }
    return 0 ;
  }