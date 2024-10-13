# C - Datatypes

This C program demonstrates various fundamental data types, their size, and the associated format specifiers for printing them using `printf`. Below is a breakdown of the code and explanations of each data type used.

## Code Overview

```c
#include <stdbool.h>
#include <stdio.h>

int main() {
    // Datatypes

    char a = 'C'; // Single Character %c
    char b[] = "Pinkz"; // Array of characters %s

    float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true; // 1 byte (true/1 or false/0) %d

    char f = 120; // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short h = 32767; // 2 bytes (-32768 to +32767) %d
    unsigned short i = 32767; // 2 bytes (0 to +65535) %d

    int j = 2147483647; // 4 bytes (-2147483648 to +2147483647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4294967295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a); // char
    printf("%s\n", b); // character array
    printf("%f\n", c); // float
    printf("%lf\n", d); // double
    printf("%d\n", e); // bool
    printf("%d %c\n", f, f); // char as a numeric value
    printf("%d %c\n", g, g); // unsigned char
    printf("%d\n", h); // short
    printf("%d\n", i); // unsigned short
    printf("%d\n", j); // int
    printf("%u\n", k); // unsigned int
    printf("%lld\n", l); // long long int
    printf("%llu\n", m); // unsigned long long int
    return 0;
}
```

## Data Types and Format Specifiers

| Data Type                   | Size (Bytes) | Range                               | Format Specifier |
|-----------------------------|--------------|-------------------------------------|------------------|
| `char`                      | 1            | -128 to 127                         | `%c`             |
| `char[]` (String)          | 2048     | N/A                                 | `%s`             |
| `float`                     | 4            | ~ -3.4E38 to 3.4E38                | `%f`             |
| `double`                    | 8            | ~ -1.7E308 to 1.7E308              | `%lf`            |
| `bool`                      | 1            | true (1) / false (0)               | `%d`             |
| `signed char`               | 1            | -128 to 127                         | `%d` or `%c`     |
| `unsigned char`             | 1            | 0 to 255                            | `%d` or `%c`     |
| `short`                     | 2            | -32,768 to 32,767                   | `%d`             |
| `unsigned short`            | 2            | 0 to 65,535                         | `%d`             |
| `int`                       | 4            | -2,147,483,648 to 2,147,483,647    | `%d`             |
| `unsigned int`              | 4            | 0 to 4,294,967,295                  | `%u`             |
| `long long int`             | 8            | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | `%lld`          |
| `unsigned long long int`    | 8            | 0 to 18,446,744,073,709,551,615    | `%llu`           |

## Explanation of Key Parts

1. **Header Files**:
   - `#include <stdbool.h>`: Allows the use of the `bool` data type.
   - `#include <stdio.h>`: Provides functionality for input and output functions like `printf`.

2. **Variable Declarations**: 
   - Each variable is declared with its respective data type, initialized with a value, and a comment that indicates the format specifier used for printing.

3. **Printing Values**:
   - The `printf` function is used to display the values of each variable, utilizing the format specifiers corresponding to their data types.

## Conclusion

This program provides a comprehensive overview of the basic data types available in C, including their sizes, ranges, and how to format their output correctly. Understanding these types is essential for effective programming in C.
