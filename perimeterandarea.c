#include<stdio.h>
int main() {
    system("cls");
    float radius, length, breadth, side, area, perimeter;
    printf("Enter the radius of circle = ");
    scanf("%f" ,&radius);
    area = 3.141 * radius * radius;
    perimeter = 2 * 3.141 * radius;
    printf("Area of Circle = %.2f\n" ,area);
    printf("Perimeter of Circle = %.2f\n" ,perimeter);
    printf("Enter the Side of square = ");
    scanf("%f" ,&side);
    area = side * side;
    perimeter = 4 * side;
    printf("Area of Square = %.2f\n" ,area);
    printf("Perimeter of Square = %.2f\n" ,perimeter);
    printf("Enter the length of Rectangle = ");
    scanf("%f" ,&length);
    printf("Enter the Breadth of Rectangle = ");
    scanf("%f" ,&breadth);
    area = length * breadth;
    perimeter = 2 * ((length + breadth));
    printf("Area of Rectangle = %.2f\n" ,area);
    printf("Perimeter of Rectangle = %.2f\n" ,perimeter);
    return 0;
}