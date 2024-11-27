//WAP TO READ A 5 DIGIT NUMBER FROM USER AND PERFORM THE SUM OF THREE DIGITS.
#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,sum;
    printf("Enter 5 digit number");
    scanf("%d" ,&n);
    a = n%10;   //6    using modulus function gives the end digit of any number
    n=n/10;     //7829   using (/) divide function we gets the number except its last digit
    b=n%10;     //9
    n=n/10;     //782
    c=n%10;     //2
    n=n/10;     //78
    d=n%10;     //8
    n=n/10;     //7
    e=n%10;     //7 - (%) used to get the value
    n=n/10;     //7 - (/) used to removed the value
    printf("Sum of The Digits = %d" ,a*b*c*d*e);
    return 0;
}