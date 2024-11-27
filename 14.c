//Declaration and initilisation of an array
#include<stdio.h>
int main()
{
    int arr[4][3]={{17,34,23},{67,23,19},{81,37,42},{52,39,40}};
    printf("Elements of 2D Array are : \n");
    for(int i=0;i<4;i++) // here i stores the index values of rows
    {
        for(int j=0;j<3;j++)// here i stores the index values of rows
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
        return 0;
}