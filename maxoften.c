#include<limits.h>
#include<stdio.h>
int main()
{
    int n,max=INT_MIN,num;    //INT_MIN is used when you want to print max of numbers so we take lowest of numbers
    printf("Enter how many numbers you want to read : ");
    scanf("%d", &n);
    printf("Enter %d Number : ",n);
    for(int i=1; i<=n; i++)
    {                                                   //
        scanf("%d",&num);
        if(num>max)
            max=num;
    }
    printf("Max = %d" ,max);
    return 0;
}