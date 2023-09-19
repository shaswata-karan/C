#include <stdio.h>
//  Write a program to check if given character is digit or not .
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("It's a digit");
    }

    else {
        printf("Not a digit");
    }
    
    return 0;
}