# 047 - Search for an Element in a 2D Array

This program demonstrates how to create a two-dimensional array, take user input for the number of rows and columns, and search for a specific element in the array. Nested `for` loops are used to compare each element with the number entered by the user. `positionRow` and `positionCol` store the row and column positions of the found element.

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
* `if-else` statement
* Comparison operator (`==`)
* Searching a 2D array
* Row and column position
* Flag values

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

The row and column positions are initially set to `-1`:

```c
int positionRow = -1, positionCol = -1;
```

The nested `for` loops are used to search through all the elements:

```c
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
    {
        if(a[i][j] == n)
        {
            positionRow = i;
            positionCol = j;
        }
    }
}
```

The `==` operator checks whether an array element is equal to the number being searched:

```c
a[i][j] == n
```

If the element is found, its row and column positions are stored:

```c
positionRow = i;
positionCol = j;
```

The program checks whether `positionRow` is still `-1` to determine if the element was found:

```c
if(positionRow != -1)
```

If the element is found, its position is displayed:

```c
printf("No. %d found at position [%d][%d]", n, positionRow, positionCol);
```

Otherwise, the program displays:

```c
printf("No. not found");
```

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
Enter no. of rows: 3
Enter no. of columns: 3
Enter elements:
10
20
30
40
50
60
70
80
90
Enter no. to be searched: 60
No. 60 found at position [1][2]
```
