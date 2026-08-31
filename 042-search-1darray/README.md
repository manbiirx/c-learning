# 042 - Search for an Element in an Array

This program demonstrates how to create an array, take user input, and search for a specific element in the array. A `for` loop compares each element with the number entered by the user. A `found` variable is used to check whether the element exists, while `position` stores the index of the found element.

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* `scanf()`
* Variables
* Arrays
* Array indexing
* `for` loop
* `if-else` statement
* Comparison operator (`==`)
* Flag variable
* Searching an array
* Position/index of an element

## Syntax

An array can be declared using:

```c
data_type array_name[size];
```

In this program, an integer array of 5 elements is declared:

```c
int a[5];
```

The elements are accessed using their index:

```c
a[i]
```

The `for` loop is used to search through all the elements:

```c
for(i=0; i<5; i++)
{
    if(a[i] == n)
    {
        position = i;
        found = 1;
    }
}
```

The `==` operator checks whether an array element is equal to the number being searched:

```c
a[i] == n
```

The `found` variable acts as a flag to indicate whether the element was found:

```c
if(found == 1)
```

If the element is found, its position is displayed:

```c
printf("no. %d found at position=%d", a[position], position);
```

## Run

```bash
gcc main.c -o main

./main
```

## Output

```text
Enter Elements: 10
20
30
40
50
The array is:10 20 30 40 50
Enter no. to be searched: 30
no. 30 found at position=2
```
