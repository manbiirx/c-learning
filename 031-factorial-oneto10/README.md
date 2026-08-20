# 031 - Factorials from 1 to 10 Using Nested Loops

This program demonstrates the use of **nested `for` loops** to calculate and display the factorial of every number from `1` to `10`. The outer loop selects each number, while the inner loop calculates its factorial by multiplying the numbers from `1` up to the selected number.

The factorials calculated are:

```text
1! = 1
2! = 2
3! = 6
...
10! = 3628800
```

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* Variables
* `for` loop
* Nested `for` loop
* Multiplication operator (`*`)
* Factorial
* Accumulator variable

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

In this program, the outer loop selects numbers from `1` to `10`:

```c
for(i = 1; i <= 10; i++)
{
    fact = 1;

    for(j = 1; j <= i; j++)
    {
        fact = fact * j;
    }

    printf("%d! = %d\n", i, fact);
}
```

The inner loop calculates the factorial of the current value of `i`:

```c
fact = fact * j;
```

The value of `fact` is reset to `1` for each new number before calculating its factorial.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
```
