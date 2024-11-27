#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("Number is even", number);
    } else {
        printf("Number is odd", number);
    }
    
    return 0;
}
