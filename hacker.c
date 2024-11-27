#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    char operator;
    double num1,num2,result;
    printf("Enter operator : ");
    scanf(" %c", &operator);
    printf("Enter Two Numbers : ");
    scanf("%lf%lf", &num1,&num2);
     switch(operator)
    {
        case '+':
            result = num1+num2;
            break;
        case '-':
            result = num1-num2;
            break;
        case '*':
            result = num1*num2;
            break;
        case '/':
            result = num1/num2;
            break;
        default:
            printf("Invalid Operator \n");
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
    return 0;
}
