# 037 - Sum of Array Elements

This program demonstrates how to create an array with a user-defined size and calculate the sum of all its elements. The user first enters the number of elements, then enters each element of the array. A `for` loop is used to calculate the total sum.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Variables
- Arrays
- Array indexing
- User-defined array size
- `for` loop
- Addition assignment operator (`+=`)
- Accumulator variable

## Syntax

An array can be declared using:

```c
data_type array_name[size];
```

In this program, the size is entered by the user:

```c
int arr[size];
```

The elements are accessed using their index:

```c
arr[i]
```

The `+=` operator is used to add each element to `sum`:

```c
sum += arr[i];
```

This is equivalent to:

```c
sum = sum + arr[i];
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Enter the number of elements in the array: 5
Enter 5 elements:
10
20
30
40
50
Sum of all elements in the array = 150
```