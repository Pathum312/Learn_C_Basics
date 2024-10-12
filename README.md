Sure! Here’s a README format for your C code:

---

# C Variables Example

This C program demonstrates the declaration, initialization, and usage of various data types including integers, floats, characters, and strings. It also shows how to use the `printf` function to output formatted information to the console.

## Code Overview

```c
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

    printf("Hello %s\n", name); // Use %s for strings/array of characters
    printf("You are %d years old.\n", age); // Use %d for decimals
    printf("Your average grade is %c.\n", grade); // Use %c for character
    printf("Your gpa is %f.\n", gpa); // Use %f for floats
    return 0;
}
```

## Variable Types

### 1. Integer (`int`)
- **Declaration**: 
  ```c
  int x;
  ```
  - Declares an integer variable `x`.
  
- **Initialization**: 
  ```c
  x = 123;
  ```
  - Assigns the value `123` to `x`.
  
- **Declaration + Initialization**: 
  ```c
  int y = 321;
  ```
  - Declares and initializes `y` with the value `321`.

### 2. Float (`float`)
- **Declaration + Initialization**: 
  ```c
  float gpa = 3.7;
  ```
  - Declares and initializes a floating-point variable `gpa` with the value `3.7`.

### 3. Character (`char`)
- **Declaration + Initialization**: 
  ```c
  char grade = 'A';
  ```
  - Declares and initializes a character variable `grade` with the character `'A'`.

### 4. String (Array of Characters)
- **Declaration + Initialization**: 
  ```c
  char name[] = "Pinkz";
  ```
  - Declares and initializes an array of characters (string) called `name` with the value `"Pinkz"`.

## Output Using `printf`

The program uses `printf` to display messages. Here's how it works:

1. **String Output**:
   ```c
   printf("Hello %s\n", name);
   ```
   - Outputs "Hello Pinkz".

2. **Integer Output**:
   ```c
   printf("You are %d years old.\n", age);
   ```
   - Outputs "You are 22 years old."

3. **Character Output**:
   ```c
   printf("Your average grade is %c.\n", grade);
   ```
   - Outputs "Your average grade is A."

4. **Float Output**:
   ```c
   printf("Your gpa is %f.\n", gpa);
   ```
   - Outputs "Your gpa is 3.700000" (default float precision).

## Conclusion

This program illustrates how to declare and initialize different variable types in C, along with formatted output using `printf`. Understanding these concepts is essential for programming in C.
