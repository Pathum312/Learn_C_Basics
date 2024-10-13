# C - Constants

## What is a Constant in C?

In C programming, a **constant** is a fixed value that cannot be altered during the execution of a program. Constants are used to represent values that remain unchanged throughout the program, making the code more readable and easier to maintain.

### Key Features of Constants

- **Immutability**: Once a constant is defined, its value cannot be modified. This helps prevent accidental changes that could lead to bugs or unintended behavior in the program.
  
- **Readability**: Using constants improves code clarity by providing meaningful names for fixed values. This makes it easier for anyone reading the code to understand its purpose.

- **Maintainability**: If a constant value needs to change (e.g., updating the value of π), it only needs to be updated in one place, reducing the risk of errors.

### Example of a Constant in C

```c
const float PI = 3.14159;
```

In this example:

- `const` is a keyword that declares `PI` as a constant.
- `float` specifies the data type, indicating that `PI` is a floating-point number.
- The value `3.14159` is assigned to `PI`, representing an approximation of the mathematical constant π.

### Benefits of Using Constants

1. **Safety**: Since the value cannot be changed, it reduces the risk of unintended modifications.
2. **Clarity**: Constants provide descriptive names for values, making the code more understandable.
3. **Ease of Updates**: Changes to constant values can be made in a single location, simplifying maintenance.
