#include<stdio.h>
// write a function to print "Hello!"
// function declaration
void printHello();

// function call
int main () {
    printHello();
    printHello();
    printHello();
    return 0;
}

// function definition
void printHello() {
    printf("Hello!\n");
}