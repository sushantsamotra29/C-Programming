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
	int firstdigit = num/(int)pow(10,count);
	int rem = num%(int)pow(10,count);
	num = lastdigit*pow(10,count+1) + rem*10 + firstdigit;
	printf("After swaping number is = %d", num);
    return 0;
}