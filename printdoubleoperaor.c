#include<stdio.h>
int main()
{
    float radius, area, perimeter, length, breadth, side;
    printf("ENter Radius ");
    scanf("%f" ,&radius);
    printf("Area of Circle = %f\nPerimeter of Circle = %f\n" ,3.141*radius*radius,2*3.141*radius);
    printf("Enter Side ");
    scanf("%f" ,&side);
    printf("Area of Square = %f\nPerimeter of Square = %f\n" ,side*side,4*side);
    printf("Enter Length and Breadth ");
    scanf("%f %f" ,&length ,&breadth);
    printf("Area of Rectangle =%f\nPerimter of Rectangle =%f" ,length*breadth, 2*(length+breadth));
    return 0;
}