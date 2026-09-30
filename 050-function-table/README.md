# 050 - Multiplication Table Using Custom Header

This program demonstrates how to generate and print the multiplication table of a given number by utilizing a custom header file. It takes an integer input from the user and passes it to a `table()` function defined externally in `../headers.h`. This approach highlights code modularity by keeping the main execution block clean and delegating the core logic (such as loops for printing the table) to an external file.

## Concepts

* `#include <stdio.h>`
* `#include ""` (Custom header inclusion)
* `main()`
* `printf()`
* `scanf()`
* Variables
* Function calling (void functions)
* User input
* Code modularity
* Relative file paths

## Syntax

Like standard libraries, custom header files are included at the top of the program, but using double quotes instead of angle brackets:

```c
#include "../headers.h"

```

The `../` indicates that the `headers.h` file is located in the parent directory of the current working file.

The `table()` function is called by passing the user input `n` as an argument:

```c
table(n);

```

Unlike functions that return a calculated value, `table()` is likely a `void` function that handles the printing process directly within its own definition.

For example, if the user enters `5`, the `table(5)` function will iterate from 1 to 10 and print the multiples directly to the console without needing to pass a value back to `main()`.

## Run

```bash
gcc main.c -o main
./main

```

## Output

```text
Enter a number: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

```