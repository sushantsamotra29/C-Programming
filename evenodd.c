//ternary operator
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("Enter number");
    scanf("%d" ,&n);
    (n%2==0)? printf("Even") : printf("Odd");
    return 0;
}