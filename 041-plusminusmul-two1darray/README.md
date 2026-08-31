# 041 - Arithmetic Operations on Two Arrays

This program demonstrates how to create two arrays, take user-defined input, and perform arithmetic operations on corresponding elements of the arrays. The program calculates addition, subtraction, and multiplication for each pair of elements and displays the results in a table.

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
* Arithmetic operators (`+`, `-`, `*`)
* Corresponding array elements
* Formatted output (`\t`)

## Syntax

Arrays can be declared using:

```c
data_type array_name[size];
```

In this program, two integer arrays are declared:

```c
int a[100], b[100];
```

The elements are accessed using their index:

```c
a[i]
b[i]
```

A `for` loop is used to enter elements into each array:

```c
for(i=0; i<n; i++)
{
    scanf("%d", &a[i]);
}
```

Arithmetic operations can be performed on corresponding elements of two arrays:

```c
a[i] + b[i]
a[i] - b[i]
a[i] * b[i]
```

The `\t` escape sequence is used to create spacing between columns:

```c
printf("%d\t%d\t%d\n", a[i]+b[i], a[i]-b[i], a[i]*b[i]);
```

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
Enter number of elements: 3
Enter elements for array A:
10
20
30
Enter 3 elements for array B:
2
4
5

Plus	Minus	Multiply
12	8	20
24	16	80
35	25	150
```
