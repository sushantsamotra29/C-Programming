#include <stdio.h>

int main() {
    int a, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &a);

    while (a != 0) {
        sum += a % 10;  // Add the last digit of a to sum
        a /= 10;        // Remove the last digit from a
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
