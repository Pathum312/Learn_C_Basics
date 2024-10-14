#include <stdio.h>
#include <math.h>

int main() {
    // IF Statments

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age > 18) {
        printf("\nYou have just signed up!");
    }
    else if (age < 0) {
        printf("\nYou cannot sign up, you are not born yet!");
    }
    else {
        printf("\nYou cannot sign up for another %d years!", 18 - age);
    }

    return 0;
}