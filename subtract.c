#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1, num2, sub;
    printf("Enter the value of 1st Number = ");
    scanf("%d" ,&num1);
    printf("Enter the value of 2nd Number = ");
    scanf("%d" ,&num2);
    sub = num1 - num2;
    printf("%d" ,sub);
    return 0;
}