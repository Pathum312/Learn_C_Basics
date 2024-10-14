#include <stdio.h>

int main() {
    // Switch Statements

    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
        case 'A':
            printf("Pefect!");
            break;
        case 'B':
            printf("Very Good!");
            break;
        case 'C':
            printf("Okay!");
            break;
        case 'D':
            printf("Better than F!");
            break;
        case 'F':
            printf("FAILED!");
            break;
        default:
            printf("Only enter valid grades!");
            break;
    }

    return 0;
}