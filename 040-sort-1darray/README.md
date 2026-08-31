# 040 - Sort an Array in Ascending Order

This program demonstrates how to create an array, take user-defined input, and sort the elements of the array in ascending order. Two `for` loops are used to compare the elements, and a temporary variable is used to swap them whenever an element is greater than the element being compared.

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* `scanf()`
* Variables
* Arrays
* Array indexing
* User-defined array size
* Nested `for` loops
* `if` statement
* Comparison operator (`>`)
* Swapping elements
* Temporary variable

## Syntax

An array can be declared using:

```c
data_type array_name[size];
```

In this program, an integer array of maximum size 20 is declared:

```c
int arr[20];
```

The elements are accessed using their index:

```c
arr[i]
```

Nested `for` loops are used to compare the elements:

```c
for(i=0; i<n-1; i++)
{
    for(j=i+1; j<n; j++)
    {
        // comparison
    }
}
```

The `if` statement checks whether the current element is greater than the next element:

```c
if(arr[i] > arr[j])
```

If the condition is true, the elements are swapped using a temporary variable:

```c
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
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
50
20
40
10
30
Sorted array in ascending order:
10 20 30 40 50
```
