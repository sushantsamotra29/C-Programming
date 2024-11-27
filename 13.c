//WAP to print 2nd largest number in an array
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int  i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
//LOGIC to find 2nd largest element begin here
int  max1 = arr[0];
int max2 = 0;
for(int i=1;i<n;i++)
{
    if(arr[i]>max1)
    {
        max2 = max1;
        max1=arr[i];
    }
    else if(arr[i]>max2 && arr[i]<max1)
    max2=arr[i];
}
printf("2nd Largest element in an array is %d",max2);
return 0;
}