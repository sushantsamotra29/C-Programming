//TOggle string mean convert upper to lower and lower to upper
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("Enter String : ");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=90) ||(str[i]>97 && str[i]<=122)
        str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<=122)
        str[i]=str[i]-32;
        printf("%c",str[i]);    // can also be printeD AS toogle string is %s, str
    }
       return 0;
}