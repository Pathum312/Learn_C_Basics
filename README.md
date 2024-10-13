# C - Arithmetic Operators

This document provides an overview of the basic arithmetic operators available in the C programming language, demonstrating their usage with example code.

## Overview

Arithmetic operators perform basic mathematical operations on numeric data types. Below are the common arithmetic operators in C:

1. **Addition (`+`)**
2. **Subtraction (`-`)**
3. **Multiplication (`*`)**
4. **Division (`/`)**
5. **Modulus (`%`)**
6. **Increment (`++`)**
7. **Decrement (`--`)**

## Explanation of Operators
```c
int x = 5;
int y = 2;
int z;
```

### 1. Addition (`+`)
- **Description**: Adds two operands.
- **Example**: `z = x + y;` results in `z` being `7` when `x` is `5` and `y` is `2`.
- **Code**:
  ```c
  z = x + y;
  printf("%d + %d = %d\n", x, y, z);
  ```

### 2. Subtraction (`-`)
- **Description**: Subtracts the second operand from the first.
- **Example**: `z = x - y;` results in `z` being `3`.
- **Code**:
  ```c
  z = x - y;
  printf("%d - %d = %d\n", x, y, z);
  ```

### 3. Multiplication (`*`)
- **Description**: Multiplies two operands.
- **Example**: `z = x * y;` results in `z` being `10`.
- **Code**:
  ```c
  z = x * y;
  printf("%d * %d = %d\n", x, y, z);
  ```

### 4. Division (`/`)
- **Description**: Divides the first operand by the second.
- **Note**: To avoid integer division, at least one operand must be a float or double.
- **Example**: `float ans = x / (float)y;` results in `ans` being `2.5`.
- **Code**:
  ```c
  float ans = x / (float)y;
  printf("%d / %d = %.1f\n", x, y, ans);
  ```

### 5. Modulus (`%`)
- **Description**: Returns the remainder of the division of the first operand by the second.
- **Example**: `z = x % y;` results in `z` being `1`.
- **Code**:
  ```c
  z = x % y;
  printf("%d mod %d = %d\n", x, y, z);
  ```

### 6. Increment (`++`)
- **Description**: Increases an integer's value by one.
- **Example**: `x++;` changes `x` from `5` to `6`.
- **Code**:
  ```c
  x++;
  printf("x++ = %d\n", x);
  ```

### 7. Decrement (`--`)
- **Description**: Decreases an integer's value by one.
- **Example**: `y--;` changes `y` from `2` to `1`.
- **Code**:
  ```c
  y--;
  printf("y-- = %d\n", y);
  ```

## Conclusion

Understanding these arithmetic operators is fundamental for performing calculations and manipulating data in C programming. Use this guide to implement and utilize these operators effectively in your code.
