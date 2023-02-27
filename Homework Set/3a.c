#include <stdio.h>
//   Write a program to check if a given number is Armstrong number or not.
int main() {
    int n,r,sum=0,temp;
    printf("Enter a number to check Armstrong or not: ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (temp==sum)
    {
        printf("Armstrong Number");
    }
    else {
        printf("Not Armstrong Number");
    }
    return 0;
}