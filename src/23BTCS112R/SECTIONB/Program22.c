#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);
    if(num1==num2){
        printf("Equal Number");
        return 0;
    }
    switch(num2>num1) {
        case 1:
            printf("%d is largest",num2);
            break;
        default:
            printf("%d is largest",num1);
    }
    return 0;

}