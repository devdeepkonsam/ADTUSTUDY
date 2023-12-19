#include <stdio.h>

int main(){
    int i;
    printf("ALPHABET IN CAPITAL:\n");
    for(i=65;i<=90;i++){
        printf("%c ",i);
    }
    printf("\nALPHABET IN SMALL:\n");
    for(i=97;i<=122;i++){
        printf("%c ",i);
    }
    return 0;
}