#include <stdio.h>

int main() {
    // Arithmetic Operators

    int x = 5;
    int y = 2;
    int z;

    // + (Addition)
    z = x + y;
    printf("%d + %d = %d\n", x, y, z);

    // - (Substraction)
    z = x - y;
    printf("%d - %d = %d\n", x, y, z);

    // * (Multiplication)
    z = x * y;
    printf("%d * %d = %d\n", x, y, z);

    // / (Division)
    float ans = x / (float)y;
    printf("%d / %d = %.1f\n", x, y, ans);

    // % (Modules)
    z = x % y;
    printf("%d mod %d = %d\n", x, y, z);

    // ++ Increment
    x++;
    printf("x++ = %d\n", x);

    // -- Decrement
    y--;
    printf("y-- = %d\n", y);

    return 0;
}