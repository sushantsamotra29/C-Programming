//Example of strrev() function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30],str2[30];
    printf("Enter String1 : ");
    gets(str1);
    printf("ENter String2 : ");
    gets(str2);
    int x = strcmp(str1,str2);
    if(x==0)
        printf("Both are Same");
    else if(x==-1)
    printf("String1 is less then string2");
    else
    printf("String1 is greater then string2");
    return 0;
}/*
if output entered abc and xyz it checks whether a==xor not
or a>x is greater or not on the basis of their askai value
or a<x is lesser or not on the basis of their ascii value
*/