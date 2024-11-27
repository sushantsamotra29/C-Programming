#include<stdio.h>
int main()
{
    float f;
    printf("Enter the temperature in Fahrenheit ");
    scanf("%f" ,&f);
    printf("Temperature in Celsius = %.3f" ,(f-32)*0.55555555);
    return 0;
}