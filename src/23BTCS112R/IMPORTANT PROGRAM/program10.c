#include <stdio.h>

int main(){
    int arr[]={10,5,5,10,10};
    int sum=0,i,len=sizeof(arr)/sizeof(arr[0]);
    for(i =0;i<len;i++){
        sum += arr[i];
    }
    printf("Avg of the number is the array is %d",sum/len);
    return 0;
}
