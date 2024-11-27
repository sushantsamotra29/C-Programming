//WAP to read and display the elements of 2D Array
#include<stdio.h>
int main()
{
    int rowSize,colSize;
    printf("Enter the row and column size of 2D Array : \n");
    scanf("%d%d",&rowSize, &colSize);
    int arr[rowSize][colSize];
    printf("Enter 2D Array Elements : ");
    for(int i=0;i<rowSize;i++) // here i stores the index values of rows
    {
        for(int j=0;j<colSize;j++)// here i stores the index values of rows
        {
            scanf("%d",&arr[i][j]);
        }
    }
        printf("Elements of 2D array are : \n");
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        return 0;
}