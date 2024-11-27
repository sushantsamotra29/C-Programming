#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Value of a ");
    scanf("%d" , &a);
    printf("Value of b ");
    scanf("%d" , &b);
    c = a,
    a = b,
    b = c;
    printf("New Value of a = %d\t", a);
    printf("New Value of b = %d", b);
    return 0;
}
