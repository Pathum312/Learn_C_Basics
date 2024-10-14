#include <stdio.h>
#include <string.h>

int main() {
    // User Inputs

    char name[25]; // 25 Bytes
    int age;

    printf("\nWhat is your name? "); // Name prompt
    // scanf("%s", &name); Doesn't include the whitespaces entered
    fgets(name, 25, stdin); // Gets the entire string input including the whitespaces
    name[strlen(name) - 1] = '\0'; // Formats the string input

    printf("\nWhat is your age? "); // Age prompt
    scanf("%d", &age);

    printf("\nHello %s.", name);
    printf("\nYou are %d years old.", age);

    return 0;
}