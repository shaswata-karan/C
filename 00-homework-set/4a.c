#include<stdio.h>
/*
Print pattern using nested loop:
*****
*****
*****
*/
int main() {
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}