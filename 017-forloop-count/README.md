# 017 - For Loop Variations

These three programs demonstrate different ways of using a `for` loop to display the numbers from `1` to `100`. All three programs produce the same output, but they differ in how the initialization, condition, and increment parts of the `for` loop are written.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `for` loop
- Loop initialization
- Loop condition
- Increment operator (`++`)

## Syntax

The general syntax of a `for` loop is:

```c
for(initialization; condition; increment)
{
    // statements
}
```

The three programs demonstrate that the initialization and increment parts can also be placed outside the `for` loop:

```c
for(; condition; increment)
```

```c
for(; condition;)
{
    // statements
    increment;
}
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

All three programs produce the same output:

```text
1
2
3
4
5
...
98
99
100
```