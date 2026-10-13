# 054 - Dynamic Array Using `malloc()` and `free()`

This program demonstrates dynamic memory allocation. The user chooses the number of integers while the program is running, and `malloc()` allocates enough memory for them. After the array is used, `free()` releases the allocated memory.

## Concepts

* `#include <stdio.h>`
* `#include <stdlib.h>`
* `main()`
* `printf()` and `scanf()`
* Pointers
* `malloc()`
* `sizeof()`
* Checking for allocation failure (`NULL`)
* Dynamic arrays
* `free()`

## Syntax

The expression below allocates enough memory for `n` integers:

```c
arr = malloc((size_t)n * sizeof(int));
```

`sizeof(int)` gives the size of one integer, so multiplying it by `n` requests space for `n` integers. Always check whether allocation succeeded before using the pointer:

```c
if (arr == NULL)
{
    printf("Memory allocation failed.\\n");
    return 1;
}
```

After using the memory, release it:

```c
free(arr);
arr = NULL;
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Enter number of elements: 4
Enter 4 integers:
10 20 30 40
Array elements: 10 20 30 40
```
