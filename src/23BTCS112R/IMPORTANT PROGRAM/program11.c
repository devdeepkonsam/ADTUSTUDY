#include <stdio.h>
#define m 10
int main(){
    int i,j;
    int arr1[m]={9,7,5,3,1,8,6,4,2,1};
    int arr2[m]={11,12,15,14,16,17,18,19,20,13};
    int resultant[m];
    //adding 2 arrays
    for(i =0; i < m; i++){
        resultant[i] = arr1[i]+arr2[i];
    }
    //sorting bubble method
    for(i=0; i<m; i++){
        for(j=i+1;j<m;j++){
            if(resultant[i]>resultant[j]){
                int temp = resultant[i];
                resultant[i]=resultant[j];
                resultant[j]=temp;
            }
        }
    }
    for(i=0;i<m;i++){
        printf("%d ",resultant[i]);
    }
    return 0;

}