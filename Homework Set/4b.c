#include <stdio.h>
// Write a program to check if a number is prime or not.
int main() {

    int n,i,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
    }
    if (flag==1) {
        printf("Not a prime number");
    }
    else {
        printf("Prime number");
    }
    return 0;
}