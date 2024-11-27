//WAP to perform the su of all input number nutil user enter zero.
#include<stdio.h>
int main()
{
    int n, sum=0;
    do
    {
        printf("Enter Number : ");
        scanf("%d" ,&n);
        sum += n;
    }
    while(n != 0);
    printf("sum = %d" ,sum);
    return 0;
}