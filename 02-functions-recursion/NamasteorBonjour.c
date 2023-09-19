// Write a function that prints Namaste if user is Indian & Bonjour if the user is French.
#include<stdio.h>

void namaste();
void bonjour();

int main() {
    printf("Enter your nationality: i for indian and f for french: ");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i') {
        namaste();
    }
    else {
        bonjour();
    }
    return 0;
}

void namaste() {
    printf("Namaste\n");
}

void bonjour() {
    printf("Bonjour\n");
}