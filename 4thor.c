#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int greatestCase;
    if (num1 >= num2 && num1 >= num3) {
        greatestCase = 1; 
    } else if (num2 >= num1 && num2 >= num3) {
        greatestCase = 2; 
    } else {
        greatestCase = 3; 
    }

    switch (greatestCase) {
        case 1:
            printf("The greatest number is: %d\n", num1);
            break;
        case 2:
            printf("The greatest number is: %d\n", num2);
            break;
        case 3:
            printf("The greatest number is: %d\n", num3);
            break;
    }

    return 0;
}