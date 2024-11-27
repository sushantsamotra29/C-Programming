#include<stdio.h>
#include<string.h>
#include<stdlib.h>//atio = function is stored in stdlib.h
int main()
{
    char str[30];
    printf("Enter String : ");
    gets(str);
    int num = atoi(str);
    printf("%d",num);
    return 0;
}