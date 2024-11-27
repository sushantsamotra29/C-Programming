//SORING using inserion sort
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
//LOGIC OF the inserion Sort
for(int i=1;i<n;i++)
{
    int val = arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>val)
    {
        arr[j+1]=arr[j];
        j--;
    }
    if(i != (j+1))
        arr[j+1]=val;
}
printf("After Sorting element are : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
        return 0;
}
/*
    5 8 7 9 6 3 
    5 7 8 9 6 3
    5 6 7 8 9 3
    3 5 6 7 8 9
starts from 1st and sees the smallest value and then start shifting towards left
and starts checking whether the number is greater than that digit number or not.

*/