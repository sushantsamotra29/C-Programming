#include<stdio.h>
int main()
{
    int n,count,p;
    printf("Enter the value of N");
    scanf("%d" ,n);
    int lastdigit = n%10;
	n = n/10;
    count = log10(n);
    int firstdigit = n/p;
	int rem = n%p;
	n = lastdigit*p*10+rem*10 + firstdigit;
    printf(Revr)
}