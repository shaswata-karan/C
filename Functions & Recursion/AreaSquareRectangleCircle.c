// Write functions to calculate area of a square, a circle & a rectangle.
#include<stdio.h>

 void square(float s);
 void circle(float r);
 void rectangle(float a, float b);

int main()
{
    float n,r,a,b;
    printf("enter n : ");
    scanf("%f", &n);
    printf("enter r : ");
    scanf("%f", &r);
    printf("enter a : ");
    scanf("%f", &a);
    printf("enter b : ");
    scanf("%f", &b);

    square(n);
    circle(r);
    rectangle(a,b);
    return 0;
}

void square(float n)
{
    printf("Area of square is: %f\n", n*n);
}

void circle(float r)
{
    printf("Area of circle is: %f\n", 3.14*r*r);
}

void rectangle(float a, float b)
{
    printf("Area of rectangle is: %f\n", a*b);
}