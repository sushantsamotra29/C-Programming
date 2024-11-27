//Wap to print all the Numbers from 1 to N
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter Number");
    scanf("%d" ,&n);
    for(int i=0 ; i<=n ; i+=2)
    {
        sum = sum+i;
    }
    printf("Sum = %d",sum);
}