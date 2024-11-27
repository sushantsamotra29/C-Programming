#include<stdio.h>
int main()
{
    system("cls");
    int n, rev=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    int temp = n;
    while(n!=0)
    {
        int rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(temp == rev)
    printf("Number is Pallindrome");
    else
    printf("Number is not Pallindrome");
    return 0;
}