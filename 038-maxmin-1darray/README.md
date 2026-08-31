# 038 - Find Maximum and Minimum in an Array

This program demonstrates how to create an array, take user-defined input, and find the maximum and minimum elements in the array. The first element is initially assigned as both the maximum and minimum, then a `for` loop compares the remaining elements to update these values.

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* `scanf()`
* Variables
* Arrays
* Array indexing
* `for` loop
* `if` statement
* Maximum and minimum values
* Comparison operators (`>` and `<`)

## Syntax

An array can be declared using:

```c
data_type array_name[size];
```

In this program, an integer array of maximum size 20 is declared:

```c
int arr[20];
```

The first element is initially assigned as both the maximum and minimum:

```c
max = arr[0];
min = arr[0];
```

The elements are accessed using their index:

```c
arr[i]
```

The `if` statement is used to compare each element with the current maximum and minimum:

```c
if (arr[i] > max)
{
    max = arr[i];
}
```

```c
if (arr[i] < min)
{
    min = arr[i];
}
```

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
Enter number of elements: 5
Enter numbers:
10
50
20
5
30
Maximum element = 50
Minimum element = 5
```
