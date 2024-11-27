//WAP to read and display the elements of 2D Array[Matrix]
#include<stdio.h>
int main()
{
    int arr[4][3];
    printf("Elements of 2D Array are : \n");
    for(int i=0;i<4;i++) // here i stores the index values of rows
    {
        for(int j=0;j<3;j++)// here i stores the index values of rows
        {
            scanf("%d",&arr[i][j]);
        }
    }
        printf("Elements of 2D array are : ");
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        return 0;
}