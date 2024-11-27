#include<stdio.h>
int main()
{
    int i=2, n,flag=0;
    printf("Enter NUmber");
    scanf("%d" ,&n);
    while(i<=n/2)
    {
        if(n%i==0)
        {
        flag =1;
        break;
        }    
    i++;
}
if(flag == 0)
    printf("Number is Prime");
else
    printf("Number is not Prime");
    return 0;
} 