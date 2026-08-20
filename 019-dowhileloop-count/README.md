# 019 - Do-While Loop

This program demonstrates the use of a `do-while` loop. The variable `cnt` is initially set to `1000`, and the program prints its value before checking the loop condition.

Since a `do-while` loop executes its statements **at least once**, the program prints `1000` even though the condition `cnt <= 100` is false after the first iteration.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- Variables
- `do-while` loop
- Increment operator (`++`)
- Loop condition

## Syntax

The general syntax of a `do-while` loop is:

```c
do
{
    // statements
}
while(condition);
```

Unlike a `while` loop, the condition is checked **after** the statements are executed. Therefore, a `do-while` loop always executes at least once.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
1000
```