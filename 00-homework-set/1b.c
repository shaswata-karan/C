#include <stdio.h>
// Take a number(n) from user & output its cube(n*n*n).
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Output: %d", n * n * n);
    return 0;
}