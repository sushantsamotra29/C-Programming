#include<stdio.h>
int main()
{
    int a, b;
    printf("value of a");
    scanf("%d" ,&a);
    printf("value of b");
    scanf("%d" ,&b);
    a = a + b,
    b = a - b,
    a = a - b;
    printf("Value of a = %d\n" ,a);
    printf("Value of b = %d" ,b);
    return 0;
}