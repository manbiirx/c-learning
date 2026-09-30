# 016 - Menu-Driven Calculator Using `switch` and `goto`

This program demonstrates the use of a `switch` statement to create a simple menu-driven calculator and a `goto` statement for unconditional control transfer. The user enters two numbers, selects an arithmetic operation from the menu, and the program performs the chosen operation. The user can also choose to perform another calculation using `goto`.

The supported operations are:

1\. Addition

2\. Subtraction

3\. Multiplication

4\. Division

If an invalid option is entered, the program displays an error message. The program also prevents division by zero.

## Concepts

\- `#include <stdio.h>`

\- `main()`

\- `printf()`

\- `scanf()`

\- Variables

\- Character, integer and floating-point data types (`char`, `int`, `float`)

\- `switch`

\- `case`

\- `break`

\- `default`

\- `goto`

\- Labels

\- Conditional statements (`if`, `else`)

\- Arithmetic operators (`+`, `-`, `*`, `/`)

## Run

```bash
gcc main.c -o main

./main

This is a menu driven program to calculate addition/ subtraction/ multiplication/ division

Enter the first number: 12

Enter the second number: 4

1 = addition

2 = subtraction

3 = multiplication

4 = division

Enter your choice: 3

Result = 48.000000

Do you want to calculate again? (y/n): y

This is a menu driven program to calculate addition/ subtraction/ multiplication/ division

Enter the first number: 25

Enter the second number: 5

1 = addition

2 = subtraction

3 = multiplication

4 = division

Enter your choice: 4

Result = 5.000000

Do you want to calculate again? (y/n): n

Program ended.