# 032 - Print ABCD Pattern

This program demonstrates the use of **nested `for` loops** to print a repeated `ABCD` pattern. The outer loop controls the number of rows, while the inner loop prints `ABCD` four times in each row.

The pattern printed is:

```text
ABCDABCDABCDABCD
ABCDABCDABCDABCD
ABCDABCDABCDABCD
ABCDABCDABCDABCD
```

## Concepts

* `#include <stdio.h>`
* `main(void)`
* `printf()`
* Variables
* `for` loop
* Nested `for` loop
* Pattern printing
* Rows and columns

## Syntax

The general syntax of a nested `for` loop is:

```c
for(initialization; condition; increment/decrement)
{
    for(initialization; condition; increment/decrement)
    {
        // statements
    }
}
```

In this program, the outer loop runs `4` times to create four rows:

```c
for(i = 1; i <= 4; i++)
{
    // row
}
```

The inner loop also runs `4` times and prints `ABCD` during each iteration:

```c
for(j = 1; j <= 4; j++)
{
    printf("ABCD");
}
```

The `printf("\n")` statement moves the cursor to the next line after each row is completed.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
ABCDABCDABCDABCD
ABCDABCDABCDABCD
ABCDABCDABCDABCD
ABCDABCDABCDABCD
```
