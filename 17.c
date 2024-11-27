//Wap to sum of all elements of 2D array
#include<stdio.h>
int main()
{
    int rowSize,colSize,sum;
    printf("Enter the row and column size of 2D Array : \n");
    scanf("%d%d",&rowSize, &colSize);
    int arr[rowSize][colSize];
    printf("Enter 2D Array Elements : ");
    for(int i=0;i<rowSize;i++) // here i stores the index values of rows
    {
        for(int j=0;j<colSize;j++)// here i stores the index values of rows
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    /* Can be done like this too
        int sum=0;
        for(int i=0;i<rowSize;i++)
        {
            for(int j=0;j<colSize;j++)
            {
                sum +=arr[i][j];
            }
            printf("\n");
    */
    printf("Sum of all elements are %d",sum);
        return 0;
}