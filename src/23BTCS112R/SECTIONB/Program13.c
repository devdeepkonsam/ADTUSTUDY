#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter the first nuumber :");
    scanf("%d",&num1);
    printf("Enter the second nuumber :");
    scanf("%d",&num2);
    printf("Enter the third nuumber :");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("%d is the largest number.",num1);
    } else if(num2>num3 && num2>num1){
        printf("%d is the largest number.",num2);
    } else{
        printf("%d is the largest number.",num3);
    }
    return 0;

}