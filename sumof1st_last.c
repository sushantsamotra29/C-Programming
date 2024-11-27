//WAP to perform the sum of first and last digit of a number
#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    int num,firstdigit,lastdigit,sum;
    printf("Enter Number : ");
    scanf("%d" ,&num);
    int count = (int)log10(num);
    lastdigit = num%10;
    firstdigit = num/pow(10,count);
    sum = lastdigit + firstdigit;
    printf("Sum of %d = %d" ,num,sum);
    return 0;
}