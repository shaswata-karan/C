#include <stdio.h>
//  Write a program to print the smallest number of two.
int main()
{
    int n1,n2;
    printf("Enter num1: ");
    scanf("%d", &n1);
    printf("Enter num2: ");
    scanf("%d", &n2);

    if (n1>n2) {
        printf("%d is smaller", n2);
    }

    else if (n2>n1) {
        printf("%d is smaller", n1);
    }

    else
    {
        printf("Try again");
    }

    return 0;
}