# 049 - Factorial Using Custom Header

This program demonstrates how to calculate the factorial of a given number by utilizing a custom header file. It takes an integer input from the user, passes it to a `factorial()` function defined externally in `../headers.h`, and displays the returned result. Using custom headers promotes code modularity and reusability by separating function definitions from the main program logic.

## Concepts

* `#include <stdio.h>`
* `#include ""` (Custom header inclusion)
* `main()`
* `printf()`
* `scanf()`
* Variables
* Function calling
* Return values
* User input
* Code modularity
* Relative file paths

## Syntax

Standard C library headers are included using angle brackets, while custom header files are included using double quotes:

```c
#include "../headers.h"

```

In this program, `../` indicates that the `headers.h` file is located in the parent directory of the current working file.

The `factorial()` function, which contains the logic to compute the factorial, is called by passing the user input `n` as an argument:

```c
result = factorial(n);

```

The returned integer value is stored in the `result` variable.

The final calculated value is then displayed to the user using standard output:

```c
printf("Factorial = %d", result);

```

For example, if the user enters `5`, the `factorial(5)` function will calculate `5 * 4 * 3 * 2 * 1` and return `120`, which is then printed to the console.

## Run

```bash
gcc main.c -o main
./main

```

## Output

```text
Enter a number: 5
Factorial = 120

```