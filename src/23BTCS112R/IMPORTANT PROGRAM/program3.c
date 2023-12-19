#include <stdio.h>

int factorial(int num);

int main(){
    int num,result=1,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    // result = factorial(num);
    if(num==0){
        printf("factorial of 0 is always 1");
        return 0;
    }
    for(i=1;i<=num;i++){
        result *= i;
    }
    printf("Factorial of %d is %d",num,result);
    return 0;
}
//using recursion
// int factorial(int num){
//     if(num==0){
//         return 1;
//     }
//     return num * factorial(num-1);
// }