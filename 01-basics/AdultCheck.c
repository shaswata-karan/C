/*
#include <stdio.h>
//Check if person is adult or not
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 12) {
        printf("Child");
    }

    else if (age > 12 && age < 18) {
        printf("Teenager");
    }

    else if (age >= 18)
    {
        printf("Adult");
    }

    else
    {
        printf("Invalid Input");
    }

    return 0;
}
*/

#include <stdio.h>
//Ternary operation
int main() {
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    age >= 18 ? printf("adult \n") : printf("not adult \n");

    return 0;
}