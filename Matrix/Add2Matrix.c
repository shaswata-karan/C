#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("Enter matrix1:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }

    printf("Enter matrix2:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
         scanf("%d",&b[i][j]);
        }
    }

        printf("\nmatrix1 is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nmatrix2 is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("Addition of 2 Matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}