/*#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder;  // Append the last digit
        num /= 10;                        // Remove the last digit
    }

    // Check if original and reversed are the same
    if (original == reversed)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}*//*
#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;  // Get the last digit

        // Check if the digit is even
        if (remainder % 2 == 0) {
            sum += remainder;  // Add to sum if even
        }

        num /= 10;  // Remove the last digit
    }

    printf("Sum of even digits: %d\n", sum);

    return 0;
}
*//*
#include <stdio.h>

int main() {
    int num, remainder, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case when num is 0
    if (num == 0) {
        product = 0;
    } else {
        // Calculate the product of digits
        while (num != 0) {
            remainder = num % 10;  // Get the last digit
            product *= remainder;   // Multiply the digit to product
            num /= 10;              // Remove the last digit
        }
    }

    printf("The product of the digits is: %d\n", product);

    return 0;
}*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Series: ");
    
    for (int i = 1; i <= n; i++) {
        sum += i;  // Add each term to the sum
        printf("%d", i);  // Print each term
        
        if (i < n) {
            printf(" + ");  // Print plus sign between terms
        }
    }

    printf("\nSum of the series: %d\n", sum);

    return 0;
}

