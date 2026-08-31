# 036 - Array Input and Display

This program demonstrates the use of an array to store and display five integer values. The program takes five values from the user, stores them in an array, and then displays the stored values using `for` loops.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Variables
- Arrays
- Array indexing
- `for` loop
- Input and output

## Array

An array is a collection that can store **data values of the same type** in contiguous memory locations.

Arrays work on the concept of **indexing**. In C, indexing starts from `0`.

For example:

```c
int a[5];
```

The elements are accessed as:

```text
a[0]  a[1]  a[2]  a[3]  a[4]
```

## Types of Arrays

1. One-dimensional array
2. Two-dimensional array
3. Multidimensional array

For example:

```c
int m[3][3][3];
```

Here:

- First `[]` → Number of matrices
- Second `[]` → Number of rows
- Third `[]` → Number of columns

## Operations on Arrays

Arrays can be used for:

1. Retrieval / viewing of elements
2. Arithmetic operations
3. Searching
4. Sorting
5. Reversing

## Syntax

The general syntax for declaring an array is:

```c
data_type array_name[size];
```

Example:

```c
int a[5];
```

Array elements can be accessed using their index:

```c
a[i]
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
10
20
30
40
50
1020304050
```