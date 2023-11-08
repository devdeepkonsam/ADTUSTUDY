#include <stdio.h>
int main()
{
    int n,ans=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0){
        int temp = n%10;
        ans = ans+(temp*temp*temp);
        n /= 10;
    }
    if(n==ans)printf("true");
    else printf("false");
    return 0;

}