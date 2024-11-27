#include <stdio.h>

int main() {
    int choice;
    float radius, side, length, width, area;
    printf("1.Area of Circle\n2.Area of Rectangle\n3.Area of Square\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius; // Area formula: πr²
            printf("Area of the circle is: %.2f\n", area);
            break;

        case 2: // Rectangle
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width; // Area formula: length * width
            printf("Area of the rectangle is: %.2f\n", area);
            break;
                        
        case 3: // Square
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side; // Area formula: side²
            printf("Area of the square is: %.2f\n", area);
            break;


        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
    }

    return 0;
}