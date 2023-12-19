#include <stdio.h>
#include <string.h>

int main(){
    char arr[]= "hello world this is devdeep singha";
    int len= sizeof(arr)/sizeof(arr[0]),i=0;
    char temp;
    while(i<=len/2){
        temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i] = temp;
        i++;
    }
    i=0;
    while(i<len){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
    
}