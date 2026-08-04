# 016 - Menu-Driven Calculator Using `switch`

This program demonstrates the use of a `switch` statement to create a simple menu-driven calculator. The user enters two numbers, selects an arithmetic operation from the menu, and the program performs the chosen operation.

The supported operations are:

1. Addition
2. Subtraction
3. Multiplication
4. Division

If an invalid option is entered, the program displays an error message.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Variables
- Integer and floating-point data types (`int`, `float`)
- `switch`
- `case`
- `break`
- `default`
- Arithmetic operators (`+`, `-`, `*`, `/`)

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
This is a menu driven program to calculate addition/ subtraction/ multiplication/ divison
Enter the first number: 12
Enter the second number: 4
1 = addition
2 = subtraction
3 = multiplication
4 = division
Enter your choice: 3
48.000000
```

### Another Example

```text
This is a menu driven program to calculate addition/ subtraction/ multiplication/ divison
Enter the first number: 25
Enter the second number: 5
1 = addition
2 = subtraction
3 = multiplication
4 = division
Enter your choice: 4
5.000000
```