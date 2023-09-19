// Use library functions to calculate the square of a number given by user.
#include <stdio.h>
#include<math.h>

void calcSquare(int n);

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    calcSquare(n);
    return 0;
}

void calcSquare(int n)
{
    printf("Square is: %f", pow(n,2));
}