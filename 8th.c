//Sum of the Elements of the array
#include<stdio.h>
int main()
{
    system("cls");
    int n,sum=0;
    printf("Enter the size of an Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sum of Array Elements are : ");
    for(int i=0; i<n;i++) 
    {
        sum = sum+arr[i];
    }
    printf("%d ",sum);
        return 0;
}                  
/*  better approach using one loop
//Sum of the Elements of the array
#include<stdio.h>
int main()
{
    system("cls");
    int n,sum=0;
    printf("Enter the size of an Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("Sum of Array Elements are : %d",sum);
        return 0;
}             
*/