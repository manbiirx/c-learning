# 022 - Multiples of 19 Using a For Loop

This program demonstrates the use of a `for` loop to display the multiples of `19` from `19` to `190`. The loop starts at `19` and increases the value by `19` after each iteration.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `for` loop
- Increment operator (`+=`)
- Loop condition

## Syntax

The general syntax of a `for` loop is:

```c
for(initialization; condition; increment/decrement)
{
    // statements
}
```

The `+=` operator can be used to increase a variable by a specific value:

```c
num += 19;
```

This is equivalent to:

```c
num = num + 19;
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
19
38
57
76
95
114
133
152
171
190
```