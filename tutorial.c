#include <stdio.h>

int main() {
    /*
    Augmented Assignment Operators -
        Used to replace a statement, where an operator takes a
        variable as one of its arguments and,
        then assigns the result back to the same variable.
        example:
            x = x + 1
            x+ = 1
    */

    int x = 10;

    x = x + 2; // + Statement
    x += 2; // Augmented + statment
    printf("%d\n", x);

    x = x - 2; // - Statement
    x -= 2; // Augmented - statment
    printf("%d\n", x);

    x = x * 2; // * Statement
    x *= 2; // Augmented * statment
    printf("%d\n", x);

    x = x / 2; // / Statement
    x /= 2; // Augmented / statment
    printf("%d\n", x);

    x = x % 2; // % Statement
    x %= 2; // Augmented % statment
    printf("%d\n", x);

    return 0;
}