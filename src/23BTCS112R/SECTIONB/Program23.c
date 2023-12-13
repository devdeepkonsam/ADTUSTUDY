#include <stdio.h>

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num==0){
        printf("0 is neither odd or even");
        return 0;
    }
    switch(num%2 ==0){
        case 0:
            printf("%d is odd number",num);
            break;
        case 1:
            printf("%d is even number",num);
            break;
    }
    return 0;
}