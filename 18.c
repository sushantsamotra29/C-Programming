//Wap to sum of all elements of each rows and columns in 2D array
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
            }
        }
    //logic to perform sum of each row of Matrix [2D Array]
    for(int i=0;i<rowSize;i++)
    {
        int sum = 0;
        for(int j=0;j<colSize;j++)
        {
            sum+=arr[i][j];
        }
        printf("Sum of %d row = %d\n",i+1,sum);
    }
    //logic to perform sum of each column of Matrix [2D Array]
    for(int i=0;i<colSize;i++)
    {
        int sum = 0;
        for(int j=0;j<rowSize;j++)
        {
            sum+=arr[j][i];
        }
        printf("Sum of %d column = %d\n",i+1,sum);
    }
    return 0;
}