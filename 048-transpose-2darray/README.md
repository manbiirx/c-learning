# 048 - Transpose of a 2D Array

This program demonstrates how to create a two-dimensional array, take user input for the number of rows and columns, display the original array, and find its transpose. The transpose of an array is obtained by converting its rows into columns and its columns into rows. Nested `for` loops are used to display the elements in transposed form.

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
* Matrix representation
* Transpose of a matrix
* Row-column interchange

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
        scanf("%d", &a[i][j]);
    }
}
```

The original array is displayed using the normal row and column indices:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
```

To display the transpose, the row and column indices are interchanged:

```c
for(i=0; i<col; i++)
{
    for(j=0; j<row; j++)
    {
        printf("%d ", a[j][i]);
    }
    printf("\n");
}
```

Here, `a[j][i]` is used instead of `a[i][j]`:

```c
a[j][i]
```

This converts the rows of the original array into columns and the columns into rows.

For example, the array:

```text
1 2 3
4 5 6
```

becomes:

```text
1 4
2 5
3 6
```

The dimensions also change from `row × col` to `col × row` when displaying the transpose.

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
Enter no. of rows: 2
Enter no. of columns: 3
Enter elements:
1
2
3
4
5
6
Original array:
1 2 3
4 5 6
Transpose of array:
1 4
2 5
3 6
```
