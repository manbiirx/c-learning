# 044 - Sum of Elements in a 2D Array

This program demonstrates how to create a two-dimensional array, take user input for the number of rows and columns, store elements in the array, and calculate the sum of all elements. Nested `for` loops are used to access each element and add it to the `sum` variable.

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
* User input
* Sum of array elements
* Accumulator variable

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

Another set of nested `for` loops is used to calculate the sum of all elements:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        sum += a[i][j];
    }
}
```

The `sum` variable acts as an accumulator. Each array element is added to it:

```c
sum += a[i][j];
```

Finally, the total sum is displayed using:

```c
printf("sum of elements: %d",sum);
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
sum of elements: 450
```
