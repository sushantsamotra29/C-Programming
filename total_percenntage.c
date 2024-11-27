#include<stdio.h>
int main()
{
    float m,n,x,y,z;
    printf("Enter the value of Five subjects");
    scanf("%f%f%f%f%f" ,&m ,&n ,&x ,&y ,&z);
    printf("Total Marks = %.2f\nPercentage = %.2f" ,m+n+x+y+z,(m+n+x+y+z)*0.2);
    return 0;
}