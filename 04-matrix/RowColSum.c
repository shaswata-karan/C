#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumRow,sumCol;
    printf("Enter the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix is:\n");
    for(i=0;i<3;i++)
    {
        sumRow=sumCol=0;
        for(j=0;j<2;j++)
        {
         sumRow=sumRow+a[i][j];
         sumCol=sumCol+a[j][i];
        }
        printf("\n sumRow=%d, sumCol=%d",sumRow,sumCol);
    }
}