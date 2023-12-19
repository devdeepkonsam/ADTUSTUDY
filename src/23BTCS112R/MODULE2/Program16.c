#include <stdio.h>
int main(){
    int num, n,result=1,i;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the power :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        result *= num;
    }
    printf("%d",result);
    return 0;
}