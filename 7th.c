//WAP to find the sum of all the elements of an array.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the size of an Array : ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Array Elements are : ");
    for(int i=n-1; i>=0;i--)     // or the expression can be i>-1
    {
        printf("%d ",marks[i]);
    }
        return 0;
}                  