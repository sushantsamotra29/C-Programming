//Wap to sum of all elements of main diagonal in square matrix in 2D array
#include<stdio.h>
int main()
{
    int rowSize,colSize,sum=0;
    printf("Enter the Size of Square matrix of 2D Array : \n");
    scanf("%d%d",&rowSize, &colSize);
    int arr[rowSize][colSize];
    printf("Enter 2D Array Elements : ");
    for(int i=0;i<rowSize;i++) 
    {
        for(int j=0;j<colSize;j++)bb
        {
            scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<rowSize;i++)
        {
            sum = sum + arr[i][i];
        }
        printf("Sum of Main Diagonal Elements is : %d  \n",sum);
    }