#include <stdio.h>

int main() {
    int n, num, max;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! The number of terms must be greater than zero.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &max);  // Initialize max with the first number

    for (int i = 1; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);
    return 0;
}
