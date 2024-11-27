//Wap to print the Sum of all numbers From 1 to N
#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter Number ");
    scanf("%d" ,&n);
    sum = 0;
    for(int i=0; i<=n ; i++)
    {
        printf("%d " ,sum = sum + i);
    }
    return 0;
}