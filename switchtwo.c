//WAP to print the area of circle, square and rectangle on the basis of user choice
#include<stdio.h>
int main()
{
    int choice;
    float area,r,s,l,b;
printf("1. Are of circle\n");
printf("2. Area of Square\n");
printf("3. Are of rectangle\n");
printf("Enter your choice : ");
scanf("%d" ,&choice);
switch(choice)
{
    case1:
        printf("Enter radius");
        scanf("%f" ,&r);
        printf("Area of Circle = %f" ,area=3.14*r*r);
        break;
    case2:
        printf("Enter side");
        scanf("%f" ,&s);
        printf("Area of Square = %f" ,area=s*s);
        break;
    case3:
        printf("Enter length and breadth");
        scanf("%f" ,&l,&b);
        printf("Area of Rectangle = %f" ,area=l*b);
        break;
    default:
        printf("Invalid Choice !!!!!");
}
return 0;   
}