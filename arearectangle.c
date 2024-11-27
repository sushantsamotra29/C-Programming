#include<stdio.h>
#include<stdlib.h>
int main()
{
    float length, breadth, area;
    printf("Enter Length");
    scanf("%f" ,&length);
    printf("Enter Breadth");
    scanf("%f" ,&breadth);
    area = length * breadth;
    printf("Area of Rectangle = %f" ,area);
    return 0;
}