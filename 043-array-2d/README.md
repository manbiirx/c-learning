# 043 - Create and Display a 2D Array

This program demonstrates how to create a two-dimensional array, take user input for the number of rows and columns, store elements in the array, and display the elements in matrix form. Nested `for` loops are used to access and display each element of the 2D array.

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
* Matrix representation
* User input
* Displaying array elements

## Syntax

A two-dimensional array can be declared using:

```c
data_type array_name[rows][columns];
```

In this program, an integer 2D array is declared with a maximum size of 10 × 10:

```c
int a[10][10];
```

The elements are accessed using two indices:

```c
a[i][j]
```

The first index represents the row, while the second index represents the column.

The nested `for` loops are used to take input for all elements:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
```

Another set of nested `for` loops is used to display the elements:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
```

The `printf("\n")` statement moves to the next line after displaying all elements of a row:

```c
printf("\n");
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
20
30
40
50
60
70
80
90
the elements are:
10 20 30
40 50 60
70 80 90
```
