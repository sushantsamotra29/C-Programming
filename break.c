#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%5==0 && i%7==0)
        break;
        printf("%d ", i);
    }
    return 0;
}