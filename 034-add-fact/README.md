# 034 - Sum of Factorials from 1 to 5

This program demonstrates the use of a `for` loop to calculate the factorial of each number from `1` to `5` and find the sum of all the calculated factorials.

The calculation performed is:

```text
1! + 2! + 3! + 4! + 5!
= 1 + 2 + 6 + 24 + 120
= 153
```

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `for` loop
- Factorial
- Multiplication operator (`*`)
- Addition operator (`+`)
- Accumulator variables

## Syntax

The general syntax of a `for` loop is:

```c
for(initialization; condition; increment/decrement)
{
    // statements
}
```

The factorial is calculated by repeatedly multiplying `f` by the current value of `i`:

```c
f = f * i;
```

The calculated factorial is then added to `sum`:

```c
sum = sum + f;
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
sum=153
```