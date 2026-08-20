# 021 - For Loop to Display Numbers from 100 to 1

This program demonstrates the use of a `for` loop to display the numbers from `100` down to `1`. The loop starts with `cnt` equal to `100` and decreases its value by `1` after each iteration.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `for` loop
- Decrement operator (`--`)
- Loop condition

## Syntax

The general syntax of a `for` loop is:

```c
for(initialization; condition; increment/decrement)
{
    // statements
}
```

In this program, the decrement operator (`--`) is used to reduce the value of `cnt` by `1` after every iteration.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
100
99
98
97
96
...
5
4
3
2
1
```