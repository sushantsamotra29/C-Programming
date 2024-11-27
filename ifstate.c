//WAP to read a number from the user and if number is +ve the print the cube of that number.
#include<stdio.h>
int main()
{
    int num,cube;
    printf("ENter Number : ");
    scanf("%d" ,&num);
    if(num>0)
        printf("Cube of %d is %d" ,num,num*num*num);  // here first %d displays num value and second %d displays cube
     // here if num is -ve cube is not printed and if +ve cube is printed.
    return 0;
}