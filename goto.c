//goto is used to display multiple times without using loops
#include<stdio.h>
int main()
{
    abc:
    printf("Main Function called");
    goto abc;
    return 0;
}