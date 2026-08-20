# 026 - Display Even Numbers from 1 to 50

This program demonstrates the use of a `for` loop to display all even numbers from `2` to `50`. The variable `no` starts at `2` and is increased by `2` after every iteration.

The numbers displayed are:

```text
2, 4, 6, 8, ... , 48, 50
```

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* Variables
* `for` loop
* Increment operator (`+=`)
* Even numbers

## Syntax

The general syntax of a `for` loop is:

```c
for(initialization; condition; increment/decrement)
{
    // statements
}
```

In this program, the initialization is done before the loop:

```c
no = 2;
```

The `for` loop then increases the number by `2` each time:

```c
for(; no <= 50; no += 2)
{
    printf("%d\n", no);
}
```

Since the value increases by `2`, only even numbers are displayed.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
48
50
```
