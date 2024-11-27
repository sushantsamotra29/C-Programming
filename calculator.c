#include<stdio.h>
int main(){
    system("cls");
    int num1, num2, sum, sub, multiply ,remainder;
    printf("Enter the value of num1 = ");
    scanf("%d" ,&num1);
    printf("Enter the value of num2 = ");
    scanf("%d" ,&num2);
    sum = num1 + num2,
    sub = num1 - num2,
    multiply = num1 * num2,
    remainder = num1 % num2;
    printf("Sum = %d\n" ,sum);
    printf("Subtract = %d\n" ,sub);
    printf("Multiply = %d\n" ,multiply);
    printf("Remainder = %d" ,remainder);
        return 0;
}