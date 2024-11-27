/*#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int temp=num;
    int digits = (int)log10(num)+1;
    while(num!=0)
    {
        int rem=num%10;
        sum=sum+(int)pow(rem,digits);
        num=num/10;
    }
if(temp==sum)
    printf("Number is Armstrong");
    else
    printf("Number is not Armstrong");
    return 0;
}*/
/*
#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    int temp = num;
    int digits = (int)log10(num) + 1;  // Calculate the number of digits

    while (num != 0) {
        int rem = num % 10;
        sum = sum + (int)pow(rem, digits);  // Add the digit raised to the power of digits
        num = num / 10;
    }

    if (temp == sum)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");

    return 0;
}
*/
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);

    int temp = num;
    int digits = 0;

    // Calculate the number of digits
    int temp_num = num;
    while (temp_num != 0) {
        temp_num /= 10;
        digits++;
    }

    // Calculate the sum of each digit raised to the power of 'digits'
    while (num != 0) {
        int rem = num % 10;
        int power = 1;

        // Calculate rem^digits without using pow()
        for (int i = 0; i < digits; i++) {
            power *= rem;
        }

        sum += power;
        num /= 10;
    }

    if (temp == sum)
        printf("Number is Armstrong\n");
    else
        printf("Number is not Armstrong\n");

    return 0;
}
