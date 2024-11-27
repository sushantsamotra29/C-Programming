//COPY the data of the one array to the another        [for this we need two array of same size]
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the size of an Array : ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    //logic to copy data form one array to another
    for(int i=0; i<n;i++) 
    {
        arr2[i]=arr1[1];
    }
    printf("Elements of array-1 are : \n");
    for (int i=0; i<n;i++)
    {
        printf("%d",arr1[i]);
    }
    printf("Elements of Array 2 ",);
    for(int i=0;i<n;i++)
    {
        
    }
        return 0;
}