#include<stdio.h>
#include<math.h>
int main() {
    system("cls");
    float x1 ,x2 ,y1 ,y2, distance;
    printf("Enter x-coordinate of First point = ");
    scanf("%f" ,&x1);
    printf("Enter y-coordinate of First point = ");
    scanf("%f" ,&y1);
    printf("Enter x-coordinate of Second point = ");
    scanf("%f" ,&x2);
    printf("Enter y-coordinate of Second point = ");
    scanf("%f" ,&y2);
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 -y1) * (y2 -y1));
    printf("Euclidean Distance = %.2f" ,distance);
    return 0;
}