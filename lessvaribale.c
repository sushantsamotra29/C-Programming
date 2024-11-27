#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter 5 digit Number");
    scanf("%d" ,&n);
    sum = sum + n%10;
    n=n/10;
    sum = sum + n%10;
    n=n/10;
    sum += n%10;
    n=n/10;
    sum += n%10;
    n=n/10;
    sum += n%10;
    n=n/10;
    printf("Sum of 5 Digits = %d ",sum);
    return 0;
}