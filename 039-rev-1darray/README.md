# 039 - Reverse an Array

This program demonstrates how to create an array, take user-defined input, and reverse the elements of the array. Two variables, `start` and `end`, are used to access elements from opposite ends of the array. The elements are swapped using a temporary variable until the middle of the array is reached.

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* `scanf()`
* Variables
* Arrays
* Array indexing
* User-defined array size
* `for` loop
* `while` loop
* Swapping elements
* Temporary variable
* Increment and decrement operators (`++` and `--`)

## Syntax

An array can be declared using:

```c
data_type array_name[size];
```

In this program, an integer array of maximum size 20 is declared:

```c
int arr[20];
```

The starting and ending positions are initialized as:

```c
start = 0;
end = n - 1;
```

The `while` loop continues until the starting position reaches the ending position:

```c
while(start < end)
```

Two array elements can be swapped using a temporary variable:

```c
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
```

The positions are then moved towards the center:

```c
start++;
end--;
```

The elements are accessed using their index:

```c
arr[i]
```

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
Enter number of elements: 5
Enter elements:
10
20
30
40
50
Reversed array:
50 40 30 20 10
```
