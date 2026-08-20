# 027 - Multiplication Table from 1 to 10

This program demonstrates the use of **nested `for` loops** to generate a multiplication table from `1` to `10`. The outer loop controls the first number, while the inner loop multiplies it by numbers from `1` to `10`.

The calculation performed is:

```text
1 × 1 = 1    1 × 2 = 2    ...    1 × 10 = 10
2 × 1 = 2    2 × 2 = 4    ...    2 × 10 = 20
...
10 × 1 = 10  10 × 2 = 20  ...    10 × 10 = 100
```

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* Variables
* `for` loop
* Nested `for` loop
* Multiplication operator (`*`)
* Table generation

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

In this program, the outer loop controls the rows and the inner loop controls the columns:

```c
for(i = 1; i <= 10; i++)
{
    for(j = 1; j <= 10; j++)
    {
        table = i * j;
        printf("%d", table);
    }

    printf("\n");
}
```

The multiplication is performed using:

```c
table = i * j;
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
1 2 3 4 5 6 7 8 9 10
2 4 6 8 10 12 14 16 18 20
3 6 9 12 15 18 21 24 27 30
4 8 12 16 20 24 28 32 36 40
5 10 15 20 25 30 35 40 45 50
6 12 18 24 30 36 42 48 54 60
7 14 21 28 35 42 49 56 63 70
8 16 24 32 40 48 56 64 72 80
9 18 27 36 45 54 63 72 81 90
10 20 30 40 50 60 70 80 90 100
```
