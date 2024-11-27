//COUNT NUMBER OF DIGITS IN A GIVEN NUMBER USING BUILT-IN FUNCTION
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter NUmber");
    scanf("%d" ,&num);
    int digits = (int)log10(num)+1;//here +1 is added as log10 gives count -1 int he output
    printf("NUmber of digits in %d is %d" ,num, digits);    
    return  0;
}