#include<stdio.h>
#include<math.h>
int main()
{
    int num,count;
    printf("Enter NUmber : ");
    scanf("%d" ,&num);
    int lastdigit = num%10;
	num = num/10;
	count = (int)log10(num);
    int p=1;
    for(int i=1; i<=count; i++)
    {
        p = p*10;
    }
	int firstdigit = num/p;
	int rem = num%p;
	num = lastdigit*p*10+rem*10 + firstdigit;
	printf("After swaping number is = %d", num);
    return 0;
}