# 024 - Display Squares of First 10 Natural Numbers

This program demonstrates the use of a `for` loop to display the first 10 natural numbers along with their squares. The program starts from `1`, calculates the square of each number using `num * num`, and continues until `10` is reached.

The calculation performed is:

```text
1² = 1
2² = 4
3² = 9
...
10² = 100
```

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* Variables
* `for` loop
* Increment operator (`++`)
* Multiplication operator (`*`)
* Square of a number

## Syntax

The multiplication operator is used to calculate the square:

```c
num * num
```

In this program, the `for` loop is written as:

```c
for(num = 1; num <= 10;)
{
    printf("%d ", num);
    printf("Square:%d", num * num);
    printf("\n");
    num++;
}
```

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
1 Square:1
2 Square:4
3 Square:9
4 Square:16
5 Square:25
6 Square:36
7 Square:49
8 Square:64
9 Square:81
10 Square:100
```
