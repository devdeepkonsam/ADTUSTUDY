#include <stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num != 0){
        if(num % 2 == 0){
            printf("%d is an even number.",num);
        } else {
            printf("%d is a odd number.",num);
        }
    } else {
        printf("0 is neither even nor odd number.");
    }
    return 0;
}