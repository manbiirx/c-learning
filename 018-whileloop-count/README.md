# 018 - While Loop to Display Numbers from 1 to 100

This program demonstrates the use of a `while` loop to display the numbers from `1` to `100`. The loop continues as long as the value of `cnt` is less than or equal to `100`, and the value is increased by `1` after each iteration.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `while` loop
- Increment operator (`++`)
- Loop condition

## Syntax

The general syntax of a `while` loop is:

```c
while(condition)
{
    // statements
}
```

The condition is checked before each iteration. If the condition is `true`, the statements inside the loop are executed.

## Run

```bash
gcc main.c -o main
./main
```

## Output

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