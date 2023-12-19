#include <stdio.h>

int main(){
    int arr[] = {89,67,6,45,34,2,31,45,54,9,23,90,33,23};
    int i,num=31;
    for(i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==num){
            printf("found at index %d\n",i);
        }
    }
    //similarly for char
    char arr1[] ={'a','b','c','d','e','f','g','h','i','j'};
    char c = 'i';
    for(i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr1[i]==c){
            printf("found at index %d",i);
        }
    }
    return 0;
}