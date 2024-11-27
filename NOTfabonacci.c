//In Fabonacci series 3rd number is a sum of previous 2 numbers  eg:  0 1 1 2 3 5 8 13 21
#include<stdio.h>
int main()
{
    system("cls");
    int a,b,N,c;
    printf("Enter Two Numbers : ");
    scanf("%d%d" ,&a,&b);
    for(int i=3 ; i<=N;i++)
    {
        c=a+b;
        a=b;
        b=N;
    }
    printf("Fabonacci Series = %d\n",N);
    return 0;
}
