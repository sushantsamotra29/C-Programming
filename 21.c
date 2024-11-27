//Sum of two matrices
#include<stdio.h>
int main()
{
    int r,c;
    printf("ENter Row And Column size of matrix : ");
    scanf("%d %d",&r,&c);
    int matrix1[r][c],matrix2[r][c],result[r][c];
    printf("Enter elements of matrix 1: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
     printf("Enter elements of matrix 2: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    //matrix addition logic
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("Sum of Matrices = %d ",result[i][j]);
        }
        printf("\n");
    }
}
