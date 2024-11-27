//COUNT NUMBER OF DIGITS IN A GIVEN NUMBER USING 
#include<stdio.h>
#include<math.h>
int main()
{
    int num, count=0,a;       // a is declared to pritn Count of num = output   , here num=a;
    printf("Enter Number : ");
    scanf("%d" ,&num);
    a=num;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("Count of %d = %d",a,count);
    return  0;
}