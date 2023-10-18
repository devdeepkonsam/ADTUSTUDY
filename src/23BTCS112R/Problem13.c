#include <stdio.h>

int main(){
    int mark1, mark2, mark3, mark4, mark5;
    float avg;
    printf("Enter all the marks ?/100---\n");
    printf("Enter the mark sub1 :");
    scanf("%d",&mark1);
    printf("Enter the mark sub2 :");
    scanf("%d",&mark2);
    printf("Enter the mark sub3 :");
    scanf("%d",&mark3);
    printf("Enter the mark sub4 :");
    scanf("%d",&mark4);
    printf("Enter the mark sub5 :");
    scanf("%d",&mark5);
    avg = (mark1+mark2+mark3+mark4+mark5)/5.0;
    printf("The Average mark is %.2f",avg);
    return 0;
}