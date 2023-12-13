#include <stdio.h>

int main(){
    int num1, num2, result;
    char operator;
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);
    printf("Enter the operation :");
    scanf("\n%c",&operator);
    switch(operator){
        case '+':
            result = num1+num2;
            printf("Sum-> %d",result);
            break;
        case '-':
            result = num1-num2;
            printf("Substract-> %d",result);
            break;
        case '*':
            result = num1*num2;
            printf("Multiply-> %d",result);
            break;
        case '/':
            result = num1/num2;
            printf("Divide-> %d",result);
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;

}