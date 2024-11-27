//checking whether we are getting out of loop using break or if loop condition is false
#include<stdio.h>
int main()
{
    int n, x=0;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%5==0 && i%7==0)
        {
            x=1;    // varibales used to check only the for the checking whether coming  out of loop using break or not are called
            break;       // called flat variables.
        }
        printf("%d ", i);
    }
    return 0;
}