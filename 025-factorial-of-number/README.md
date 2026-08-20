# 025 - Factorial of a Number

This program demonstrates the use of a `for` loop to calculate the factorial of a number entered by the user. The program starts with `fact = 1` and repeatedly multiplies `fact` by `num` while decreasing `num` until it reaches `1`.

The calculation performed for `5` is:

```text
5 × 4 × 3 × 2 × 1 = 120
```

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* `scanf()`
* Variables
* `for` loop
* Decrement operator (`--`)
* Multiplication operator (`*`)
* Factorial
* Accumulator variable

## Syntax

The general syntax of a `for` loop is:

```c
for(initialization; condition; increment/decrement)
{
    // statements
}
```

In this program, the initialization part is left empty because `num` has already been entered by the user:

```c
for(; num >= 1; num--)
{
    fact = fact * num;
}
```

The factorial is calculated using:

```c
fact = fact * num;
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Enter Number: 5
Factorial = 120
```
