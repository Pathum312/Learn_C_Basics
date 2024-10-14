#include <stdio.h>

int findMax(int, int); // Function prototype

int main()
{
    /*
    Function Prototype

    What is it?
        Function decalaration, without a body, before the main.
        Ensures that calls to a function are made with the correct arguments.

    Notes:
        Many C compilers, do not check for parameter matching.
        Missing arguments will results in weird behaviour.
        A function prototype causes the complier to flag an error if the arguments are missing.

    Advantages:
        1. Easier to navigate a program with main at the top.
        2. Helps with debugging.
        3. Commonly used in header files.
    */

    int max = findMax(3, 4);
    printf("%d", max);

    return 0;
}

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}