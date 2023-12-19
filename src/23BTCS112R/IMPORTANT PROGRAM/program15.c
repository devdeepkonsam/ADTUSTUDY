#include <stdio.h>
#define s 20
int main(){
    int arr[s]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int odd[s]={};
    int even[s]={};
    int i=0,j=0,k=0,len=sizeof(arr)/sizeof(arr[0]);
    while(i<len){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
        if(arr[i]%2!=0){
            odd[k]=arr[i];
            k++;
        }
        i++;
    }
    for(i=0;i<sizeof(even)/sizeof(even[0]);i++){
        printf("%d  ",even[i]);
    }
    printf("\n");
    for(i=0;i<sizeof(odd)/sizeof(odd[0]);i++){
        printf("%d  ",odd[i]);
    }
    return 0;
}