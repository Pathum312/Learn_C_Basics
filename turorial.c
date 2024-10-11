#include <stdio.h>

int main() {
    // Variables

    int x; // Declaration
    x = 123; // Initialization
    int y = 321; // Declaration + Initialization

    int age = 22; // Integer
    float gpa = 3.7; // Float
    char grade = 'A'; // Single Character
    char name[] = "Pinkz"; // Array of characters = String

    printf("Hello %s\n", name); // Use %s for strings/array of charcters
    printf("You are %d years old.\n", age); // Use %d for decimals
    printf("Your average grade is %c.\n", grade); // Use %c for character
    printf("Your gpa is %f.\n", gpa); // Use %f for floats
    return 0;
}