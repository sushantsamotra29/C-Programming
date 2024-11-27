#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;  // The first two terms are 0 and 1
        } else {
            next = first + second;  // Calculate the next term
            first = second;         // Update first to the previous second
            second = next;          // Update second to the current next
        }
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
