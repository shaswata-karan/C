/*
#include<stdio.h>
//Enter value to check which it is
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    switch (n) {
    case 1:
        printf("monday");
        break;

    case 2:
        printf("tuesday");
        break;

    case 3:
        printf("wednesday");
        break;

    case 4:
        printf("thursday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("saturday");
        break;

    case 7:
        printf("sunday");
        break;

    default:
        printf("invalid input");
        break;
    }
    return 0;
}
*/

#include <stdio.h>
// Enter value to check which it is
int main()
{
    char day;
    printf("Enter character: ");
    scanf("%c", &day);

    switch (day)
    {
    case 'm':
        printf("monday");
        break;

    case 't':
        printf("tuesday");
        break;

    case 'w':
        printf("wednesday");
        break;

    case 'T':
        printf("thursday");
        break;

    case 'f':
        printf("friday");
        break;

    case 's':
        printf("saturday");
        break;

    case 'S':
        printf("sunday");
        break;

    default:
        printf("invalid character input");
        break;
    }
    return 0;
}
