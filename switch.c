//WAP to take a number as an input and print the day name corresponding to that day number
#include<stdio.h>
int main()
{
    int dayno;
    printf("Enter day Number : ");
    scanf("%d" ,&dayno);
    switch(dayno)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Day NUmber");
    }
    return 0;
}