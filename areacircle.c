#include<stdio.h>
#include<stdlib.h>
int main()
{
    float radius, area;
    printf("Enter Radius");
    scanf("%f" ,&radius);
    area = 3.141 * radius * radius;
    printf("Area of Circle = %f" ,area);
    return 0;
}