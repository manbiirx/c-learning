# 020 - While Loop Until `y` is Pressed

This program demonstrates the use of a `while` loop to repeatedly display a message until the user enters `y`. The program takes a character input from the user after each iteration and stops when `y` is entered.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Character variable (`char`)
- `while` loop
- Character comparison
- Loop condition

## Syntax

The general syntax of a `while` loop is:

```c
while(condition)
{
    // statements
}
```

The loop continues executing as long as the condition is true. In this program, the loop continues while `ch` is not equal to `y`.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Welcome to C Programming
Press y to stop: n
Welcome to C Programming
Press y to stop: n
Welcome to C Programming
Press y to stop: y
```

> **Note:** The variable `ch` should be initialized before the `while` loop, such as `char ch = 'n';`, to avoid undefined behavior.