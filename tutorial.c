#include <stdio.h>
#include <math.h>

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    // Ternary Operators - if/else statement shortcut
    // (condition) ? value if true : value if false

    int max = findMax(3, 4);
    printf("%d", max);

    return 0;
}