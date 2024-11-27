
#include<stdio.h>
int main()               
{
    system("cls");
    int n;
    printf("ENter array size : ");
    scanf("%d",&n);
    int marks[n];    //these type of array cannot be intitialized in the same line
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("Array Elements are : ");
    for(int i=0; i<n;i++)
    {
        printf("%d ",marks[i]);
    }
        return 0;
}                  