# 028 - Print a 5×5 Star Pattern

This program demonstrates the use of **nested `for` loops** to print a square pattern of stars. The outer loop controls the number of rows, while the inner loop controls the number of stars printed in each row.

The program prints:

```text
*****
*****
*****
*****
*****
```

## Concepts

* `#include <stdio.h>`
* `main()`
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

In this program, the outer loop runs `5` times to create the rows:

```c
for(i = 1; i <= 5; i++)
{
    // row
}
```

The inner loop also runs `5` times to print five stars in each row:

```c
for(j = 1; j <= 5; j++)
{
    printf("*");
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
*****
*****
*****
*****
*****
```
