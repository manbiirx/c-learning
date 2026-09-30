# 052 - Swap Two Numbers Using Pointers (Call by Reference)

This program demonstrates how to swap the values of two variables using pointers and a custom function. By passing the memory addresses of the variables to the `swap()` function—a method known as "call by reference"—the function can directly modify the original variables in memory, allowing the swapped values to persist and reflect in the `main()` function.

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* `scanf()`
* Variables
* Pointers
* Dereferencing operator (`*`)
* Address-of operator (`&`)
* Function definition and calling
* Call by Reference (Pass by Reference)
* User input

## Syntax

A function designed to accept pointers uses the `*` symbol in its parameter list:

```c
void swap(int *x, int *y)

```

Inside the function, the dereferencing operator (`*`) is used to access and modify the actual values stored at the memory addresses. A temporary variable is used to hold one value so it isn't lost during the swap:

```c
temp = *x;
*x = *y;
*y = temp;

```

When calling a function that expects pointers, the address-of operator (`&`) is used to pass the exact memory locations of the variables:

```c
swap(&a, &b);

```

Because the function operates directly on the memory addresses of `a` and `b`, the changes are permanent. If the variables had been passed by value (without pointers and `&`), the function would only swap local copies, and the original variables in `main()` would remain unchanged.

## Run

```bash
gcc main.c -o main
./main

```

## Output

```text
Enter two numbers: 15 42
Before swapping:
a = 15, b = 42
After swapping:
a = 42, b = 15

```