# 023 - Sum of First 10 Natural Numbers

This program demonstrates the use of a `for` loop to calculate the sum of the first 10 natural numbers. The program starts from `1`, adds each number to `sum`, and continues until `10` is reached.

The calculation performed is:

```text
1 + 2 + 3 + ... + 10 = 55
```

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `for` loop
- Increment operator (`++`)
- Addition operator (`+`)
- Accumulator variable

## Syntax

The general syntax of a `for` loop is:

```c
for(initialization; condition; increment/decrement)
{
    // statements
}
```

In this program, the increment is written inside the loop body:

```c
for(num = 1; num <= 10;)
{
    sum = sum + num;
    num++;
}
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Sum = 55
```