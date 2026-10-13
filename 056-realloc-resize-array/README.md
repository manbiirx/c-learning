# 056 - Resize a Dynamic Array Using `realloc()`

This program demonstrates how `realloc()` changes the size of previously allocated memory. It first allocates space for three integers, stores values, then resizes the allocation to hold five integers. The new elements are initialized before they are printed.

## Concepts

* `#include <stdio.h>`
* `#include <stdlib.h>`
* Pointers
* `malloc()`
* `realloc()`
* `sizeof()`
* Checking for allocation failure
* Preserving existing array elements
* Initializing newly added elements
* `free()`

## Syntax

```c
temp = realloc(arr, (size_t)newSize * sizeof(int));
```

`realloc()` may move the allocation to a different memory location. For that reason, the program stores the result in a temporary pointer first. If resizing fails, the original pointer remains valid:

```c
temp = realloc(arr, (size_t)newSize * sizeof(int));

if (temp != NULL)
{
    arr = temp;
}
```

When an allocation grows, the new portion is not automatically initialized. This program assigns values to the new elements before reading them.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Before resizing: 10 20 30
After resizing: 10 20 30 40 50
```
