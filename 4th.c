#include <stdio.h>

int main() {
    int a, f = 1;

    printf("Enter Number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        f *= i;
    }

    printf("Factorial of %d is %d",a, f);
    return 0;
}
