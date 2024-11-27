//Example of strupr() function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter String : ");
    gets(str);  //used to give input using space
    strupr(str);
    printf("%s",str);
    return 0;
}