//WAP to print all numbers from N to 1
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number");
    scanf("%d" ,&n);
    for(int i=n ; i>=1 ; i--)
    {
        printf("%d\n" ,i);
    }
    return 0;
}
