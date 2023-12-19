#include <stdio.h>
#include <math.h>


int prime(int num);

int main(){
    for(int i =2;i<1000;i++){
        if(prime(i)){
            printf("%d   ",i);
        }
    }
}
int prime(int num){
    for(int i = 2; i < sqrt(num)+1;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}