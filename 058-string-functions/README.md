# 058 - String Handling Functions in C

This program demonstrates four common string functions from `<string.h>`: `strlen()`, `strcpy()`, `strcat()`, and `strcmp()`. It finds a string's length, copies a string, joins two strings, and compares the original strings.

## Concepts

* `#include <stdio.h>`
* `#include <string.h>`
* Character arrays and strings
* `strlen()` — find string length
* `strcpy()` — copy a string
* `strcat()` — concatenate strings
* `strcmp()` — compare strings
* String input with field width limits
* Null terminator (`'\0'`)

## Syntax

```c
strlen(first);
strcpy(copy, first);
strcat(first, second);
strcmp(copy, second);
```

The destination comes first in `strcpy()` and `strcat()`. The destination array must have enough space for the copied or combined string, including its null terminator.

`strcmp()` returns `0` when the strings are equal and a non-zero value when they differ. It does not necessarily return only `-1` or `1`.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Enter first word/string: Hello
Enter second word/string: World
Length of first string = 5
Copied string = Hello
Concatenated string = HelloWorld
The original first string and second string are different.
```

## Function Summary

* `strlen(s)` counts characters before `'\0'`.
* `strcpy(destination, source)` copies the source string.
* `strcat(destination, source)` appends the source string to the destination.
* `strcmp(a, b)` compares two strings; `0` means equal.
