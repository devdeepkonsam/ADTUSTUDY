#include <stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num!=0){
        if(num>0) {
            printf("A positive number");
        } else {
            printf("A negative number");
        }
    } else{
        printf("Zero");
    }
    return 0;
}