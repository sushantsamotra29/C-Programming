#include<stdio.h>
int main() {
    int number, digit, temp, count;

    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) 
    {
        number = -number;
    }
    printf("Digit Frequency:\n");
    for (int d = 0; d <= 9; d++) {
        temp = number;  
        count = 0;
        while (temp > 0) 
        {
            digit = temp % 10;  
            if (digit == d) 
            {
                count++;        
            }
            temp /= 10;        
        }
        if (count > 0) 
        {
            printf("Frequency of %d: %d\n", d, count);
        }
    }
        return 0;
}