# 055 - Difference Between `malloc()` and `calloc()`

This program demonstrates the main difference between `malloc()` and `calloc()`. Both functions allocate memory dynamically, but `calloc()` initializes the allocated memory to zero. The program explicitly assigns values to the `malloc()` array before reading it, because the contents returned by `malloc()` are not initialized.

## Concepts

* `#include <stdio.h>`
* `#include <stdlib.h>`
* Pointers
* Dynamic memory allocation
* `malloc()`
* `calloc()`
* `sizeof()`
* Checking for `NULL`
* `free()`

## Syntax

`malloc()` takes the total number of bytes to allocate:

```c
a = malloc((size_t)n * sizeof(int));
```

`calloc()` takes the number of elements and the size of each element:

```c
b = calloc((size_t)n, sizeof(int));
```

The allocated storage from `calloc()` is zero-initialized. The contents from `malloc()` are indeterminate until values are assigned, so this program fills that array before displaying it.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Values stored in the malloc array: 10 20 30 40 50
Initial values in the calloc array: 0 0 0 0 0
```

## Key Difference

* `malloc(size)` allocates memory without initializing its contents.
* `calloc(count, size)` allocates memory and initializes all allocated bytes to zero.
* Both should be checked for allocation failure and eventually paired with `free()`.
