# 029 - Print an Inverted Star Pattern

This program demonstrates the use of **nested `for` loops** to print an inverted right-angled triangle pattern using stars. The outer loop starts from `5` and decreases to `1`, while the inner loop prints the required number of stars in each row.

The pattern printed is:

```text
*****
****
***
**
*
```

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* Variables
* `for` loop
* Nested `for` loop
* Decrement operator (`--`)
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

In this program, the outer loop starts from `5` and decreases by `1` after each row:

```c
for(i = 5; i >= 1; i--)
{
    // row
}
```

The inner loop prints stars based on the current value of `i`:

```c
for(j = 1; j <= i; j++)
{
    printf("*");
}
```

As `i` decreases, the number of stars printed in each row also decreases.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
*****
****
***
**
*
```
