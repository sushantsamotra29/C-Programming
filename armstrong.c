/*
A number that is equal to the sum of its own digit raised to power number of digits is known as armstrong number
153 - 3 digit number = 1^3 + 5^3 + 3^3 = should be equal to 153 itself.
*/
//Wap to check whether the given number is armstrong or not
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