#include <stdio.h>
#include <string.h>
int main ()

/*C Program to Print a String (Entered by the User)*/

{
    char str[100];
    printf("Enter the String : ");
    //scanf("%s",&str); // scanf function doesn't read the space 
    fgets(str,sizeof(str),stdin); // fgets functino read the space too
    printf("%s",str);
    return 0;

}