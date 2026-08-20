# 033 - Print Alphabet Triangle Pattern

This program demonstrates the use of **nested `for` loops** and ASCII character values to print an alphabet triangle pattern. The outer loop controls the rows, while the inner loop prints characters from `A` up to the current character.

The ASCII values used are:

```text
65 = A
66 = B
67 = C
68 = D
```

The pattern printed is:

```text
A
AB
ABC
ABCD
```

## Concepts

* `#include <stdio.h>`
* `main(void)`
* `printf()`
* Variables
* `for` loop
* Nested `for` loop
* Character data type
* ASCII values
* Character format specifier (`%c`)
* Pattern printing

## Syntax

The `%c` format specifier is used to print a character:

```c
printf("%c", j);
```

In this program, the outer loop runs from ASCII value `65` to `68`:

```c
for(i = 65; i <= 68; i++)
{
    // row
}
```

The inner loop starts from `65` and continues up to the current value of `i`:

```c
for(j = 65; j <= i; j++)
{
    printf("%c", j);
}
```

As `i` increases, one additional character is printed in each row.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
A
AB
ABC
ABCD
```
