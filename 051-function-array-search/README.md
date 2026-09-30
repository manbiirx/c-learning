# 051 - Array Search Using Custom Header

This program demonstrates how to search for a specific element within a one-dimensional array by utilizing a custom header file. It takes five integer inputs from the user to populate an array, asks for a target number to find, and passes the array, its size, and the target number to a `search()` function defined externally in `../headers.h`. This showcases how to pass arrays as arguments to functions while maintaining code modularity.

## Concepts

* `#include <stdio.h>`
* `#include ""` (Custom header inclusion)
* `main()`
* `printf()`
* `scanf()`
* Variables
* One-dimensional arrays
* Array indexing
* `for` loops
* Passing arrays to functions
* Function calling
* User input
* Code modularity

## Syntax

Like standard libraries, custom header files are included using double quotes:

```c
#include "../headers.h"

```

A one-dimensional array of size 5 is declared to store the user's input:

```c
int arr[5];

```

A `for` loop is used to iterate through the array and store user inputs at each index `i`:

```c
for(i = 0; i < 5; i++)
{
    scanf("%d", &arr[i]);
}

```

The custom `search()` function is called by passing the array name `arr`, the size of the array `5`, and the target number `num`:

```c
search(arr, 5, num);

```

When passing an array to a function, only the array's name is used (which acts as a pointer to its first element). The external function in `headers.h` will contain the loop and conditional logic required to scan the array elements and print whether the target number was found.

## Run

```bash
gcc main.c -o main
./main

```

## Output

```text
Enter 5 numbers:
12
45
78
23
56
Enter number to find: 78
Number 78 found at index 2

```