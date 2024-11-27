//COUNT NUMBER OF DIGITS IN A GIVEN NUMBER USING 
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter Number : ");
    scanf("%d", &n);
    printf("%d\n%d\n",a ,b);
    for(int i=3; i<=n; i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }   
    return  0;
}