# 046 - Perform Arithmetic Operations on Two 2D Arrays

This program demonstrates how to create two two-dimensional arrays, take user input for both arrays, and perform addition, subtraction, and multiplication on their corresponding elements. Nested `for` loops are used to access each element of both arrays and perform the arithmetic operations.

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
* Addition
* Subtraction
* Multiplication
* Arithmetic operators (`+`, `-`, `*`)

## Syntax

Two-dimensional arrays can be declared using:

```c
data_type array_name[rows][columns];
```

In this program, two integer 2D arrays are declared with a maximum size of 10 × 10:

```c
int a[10][10];
int b[10][10];
```

The elements of the arrays are accessed using two indices:

```c
a[i][j]
b[i][j]
```

The nested `for` loops are used to take input for the first array:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
```

The same method is used to take input for the second array:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        scanf("%d",&b[i][j]);
    }
}
```

Corresponding elements of both arrays are used to perform addition, subtraction, and multiplication:

```c
a[i][j] + b[i][j]
a[i][j] - b[i][j]
a[i][j] * b[i][j]
```

The results are displayed using `printf()`:

```c
printf("%d\t%d\t%d\n",
       a[i][j]+b[i][j],
       a[i][j]-b[i][j],
       a[i][j]*b[i][j]);
```

Here, `\t` is used to create spacing between the output columns.

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
enter no. of rows for both arrays2
enter no. of columns for both arrays2
enter elements for first array:
10
20
30
40
enter elements for second array:
5
10
15
20

Plus    Minus   Multiply
15      5       50
30      10      200
45      15      450
60      20      800
```
