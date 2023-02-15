#include <stdio.h>
//  Write a program to print the average of 3 numbers.
int main()
{
    float n1,n2,n3;
    printf("Enter num1: ");
    scanf("%f", &n1);
    printf("Enter num2: ");
    scanf("%f", &n2);
    printf("Enter num3: ");
    scanf("%f", &n3);

    float avg = (n1+n2+n3)/3;
    printf("Average is: %f", avg);
    return 0;
}