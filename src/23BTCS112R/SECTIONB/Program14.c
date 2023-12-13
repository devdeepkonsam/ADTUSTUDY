#include <stdio.h>


int main(){
    int num,original,count= 0;
    original = num;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i = 1 ;i< sqrt(num);i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>1){
        printf(" not prime number.");
    } else{
        printf(" a prime number.");
    }
    return 0;
}