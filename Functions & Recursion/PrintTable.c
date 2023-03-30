// Write a program which will a number as input through function and print it's table.
#include <stdio.h>

void printTable(int n);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printTable(n); //argument

    return 0;
}

void printTable(int n) { //parameter/formal parameter
    for (int i = 1; i < 10; i++)
    {
        printf("%d\n", i*n);
    }
}