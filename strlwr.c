//Example of strlwr() function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter String : ");
    gets(str);  //used to give input using space
    strlwr(str);
    printf("%s",str);
    return 0;
}