//Wap to find the greatest number among three  using ternary operator
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b,c;
    printf("Enter value of Three Number");
    scanf("%d%d%d" ,&a,&b,&c);
    (a>b && b>c)?printf("a is greatest"):(b>c)?printf("b is greatest"):printf("c is greatest");
    return 0;
}