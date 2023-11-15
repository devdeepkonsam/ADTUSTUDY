#include <stdio.h>
int main(){
    int n,remainder,originaln,result=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    originaln=n;
    while(n!=0){
     remainder = n%10;
     result += remainder*remainder*remainder;
     n /= 10;
     }
    /*if(result==originaln) printf("%d is Armstrong number",originaln);
    else printf("%d is a Armstrong number",originaln); */
    (result==originaln)? printf("%d is a Armstrong number",originaln):printf("%d is a Armstrong number",originaln);
    return 0;

}

