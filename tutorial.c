#include <stdio.h>
#include <math.h>

double square(int value) {
    return pow(value, 2);
}

void print_hello() {
    printf("\nHello!!!\n");
}

int main() {
    // Functions

    double A = square(8);
    printf("Answer: %.1lf", A);

    print_hello();

    return 0;
}