#include <stdio.h>

int main(){
    int arr[]={20,12,2,6,7,8,9,16,1,18,34};
    int max = arr[0] , min = arr[0] , i;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max){
            max = arr[i];
        } if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Max and Min of the arrry is %d and %d respectively",max,min);
    return 0;
}