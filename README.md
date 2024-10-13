# C - Format Specifiers

## General Format
The general syntax for a format specifier is:
```
%[flags][width][.precision][length]specifier
```

## Common Specifiers

- **%c**: Character
  - Displays a single character.

- **%s**: String
  - Displays a string (array of characters).

- **%d**: Integer
  - Displays a signed decimal integer.

- **%f**: Float
  - Displays a floating-point number.

- **%lf**: Double
  - Displays a double-precision floating-point number.

## Formatting Options

- **.n**: Decimal Precision
  - Specifies the number of digits to be displayed after the decimal point.
  - Example: `%.2f` displays a float with 2 decimal places.

- **width**: Minimum Field Width
  - Specifies the minimum number of characters to be printed. If the value has fewer characters, it will be padded.
  - Example: `%5d` ensures the integer occupies at least 5 spaces.

- **-**: Left Align
  - By default, output is right-aligned. Adding a `-` sign will left-align the output.
  - Example: `%-8.2f` will left-align the float value within a field of 8 characters.

## Code Explanation

```c
#include <stdbool.h>
#include <stdio.h>

int main() {
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1);
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    return 0;
}
```

### Breakdown of the Code

- **Includes**:
  - The code includes `<stdbool.h>` for boolean support (though not used here) and `<stdio.h>` for standard input/output functions.

- **Main Function**:
  - Defines three floating-point variables (`item1`, `item2`, `item3`) representing prices.

- **Output with `printf`**:
  - Each item is printed using the format `Item X: $%-8.2f`, where:
    - `%-8.2f` means:
      - `-`: Left-align the output.
      - `8`: Minimum field width of 8 characters.
      - `.2`: Display 2 decimal places.

### Example Output

The output for the provided code will look like this:

```
Item 1: $5.75   
Item 2: $10.00  
Item 3: $100.99 
```
