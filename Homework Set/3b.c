#include<stdio.h>
// Write a program to check if the given number is a natural number.
int main() {
    int n,num=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n>=1)
    {
        printf("Natural number");
    }
    else {
        printf("Not a natural number");
    }
    return 0;
}