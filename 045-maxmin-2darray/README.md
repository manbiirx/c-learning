# 045 - Find Maximum and Minimum in a 2D Array

This program demonstrates how to create a two-dimensional array, take user input for the number of rows and columns, and find the maximum and minimum elements in the array. The first element of the array is initially assigned as both the maximum and minimum, and nested `for` loops compare the remaining elements to update these values.

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* `scanf()`
* Variables
* Two-dimensional arrays
* Array indexing
* Nested `for` loops
* Rows and columns
* `if` statement
* Comparison operators (`>` and `<`)
* Maximum and minimum values
* User input

## Syntax

A two-dimensional array can be declared using:

```c
data_type array_name[rows][columns];
```

In this program, an integer 2D array with a maximum size of 10 × 10 is declared:

```c
int a[10][10];
```

The elements are accessed using two indices:

```c
a[i][j]
```

The first element of the array is initially assigned as both the maximum and minimum:

```c
max = a[0][0];
min = a[0][0];
```

The nested `for` loops are used to compare every element of the array:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        if(a[i][j]>max)
            max = a[i][j];

        if(a[i][j]<min)
            min = a[i][j];
    }
}
```

The `>` operator checks whether an element is greater than the current maximum:

```c
if(a[i][j] > max)
    max = a[i][j];
```

The `<` operator checks whether an element is smaller than the current minimum:

```c
if(a[i][j] < min)
    min = a[i][j];
```

Finally, the maximum and minimum elements are displayed:

```c
printf("maximum element: %d",max);
printf("minimum element: %d",min);
```

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
enter no. of rows3
enter no. of columns3
enter elements:
10
25
5
40
15
60
30
80
20
maximum element: 80
minimum element: 5
```
