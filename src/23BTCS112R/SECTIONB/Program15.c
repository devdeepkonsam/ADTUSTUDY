#include <stdio.h>

int main(){
    int start,end;
    printf("Enter the last number :");
    scanf("%d",&end);
    //Using for loop 
    for(start = 1; start <= end; start++){
        printf("%d ",start);
    }
    start = 1;
    //Using while loop
    while(start<=end){
        printf("%d ",start);
        start++;
    }
    return 0 ;
} 
