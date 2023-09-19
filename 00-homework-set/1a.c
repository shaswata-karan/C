#include<stdio.h>
// Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
int main() {
    int a,b;
    printf("Enter the sides of the rectangle: \n");
    scanf("%d \n", &a);
    scanf("%d", &b);
    printf("perimeter of the rectangle: %d", 2*a*b);
    return 0;
}