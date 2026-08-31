# 035 - Nested For Loop with Factorial

This program demonstrates the use of **nested `for` loops** to calculate factorial values. The outer loop runs from `1` to `5`, while the inner loop calculates the factorial by multiplying the values from `1` to the current value of `i`.

The calculated value is then used to update `sum`.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `for` loop
- Nested `for` loop
- Factorial
- Multiplication operator (`*`)
- Division operator (`/`)
- Addition operator (`+`)

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

In this program, the inner loop runs up to the current value of `i`:

```c
for(j=1; j<=i; j++)
{
    f=f*j;
}
```

The factorial value is then used in:

```c
sum=sum+(i/f);
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
sum=0
```