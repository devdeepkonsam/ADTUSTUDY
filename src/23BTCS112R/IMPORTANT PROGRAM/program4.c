#include <stdio.h>
int main(){
    int num;
    int n1=0,n2=1,n3,i;
    printf("Enter the number of series :");
    scanf("%d",&num);
    if(num==1){
        printf("%d",n1);
    } 
    if(num==2){
        printf("%d %d ",n1,n2);
    }
    else{
        printf("%d %d ",n1,n2);
        for(i=3;i<=num;i++){
            n3=n1+n2;
            printf("%d ",n3);
            n1=n2;
            n2=n3;
        }
    }
    return 0;
}