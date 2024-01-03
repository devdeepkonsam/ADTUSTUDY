#include <stdio.h>
#include <string.h>


int main(){
    char string[] = "Hello";
    int i,count=0;
    for(i =0;string[i]!='\0';i++){
        count++;
    }
    printf("The length of the string is %d\n",count);
    printf("The length of the string is %d\n",strlen(string));
    printf("%d",sizeof("hello"));
    return 0;
}