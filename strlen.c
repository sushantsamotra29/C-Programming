//Example of strlen() function
#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    printf("Enter Password");
    gets(password);  //used to give input using space
    int len = strlen(password);
    printf("Number of Charachter in password string is %d",len);
    return 0;
}