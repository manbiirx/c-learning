# 030 - Print a Right-Angled Star Pattern

This program demonstrates the use of **nested `for` loops** to print a right-angled triangle pattern using stars. The outer loop controls the number of rows, while the inner loop prints stars based on the current row number.

The pattern printed is:

```text
*
**
***
****
*****
```

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* Variables
* `for` loop
* Nested `for` loop
* Increment operator (`++`)
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

In this program, the outer loop runs from `1` to `5`:

```c
for(i = 1; i <= 5; i++)
{
    // row
}
```

The inner loop prints stars from `1` up to the current value of `i`:

```c
for(j = 1; j <= i; j++)
{
    printf("*");
}
```

As `i` increases, the number of stars printed in each row also increases.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
*
**
***
****
*****
```
