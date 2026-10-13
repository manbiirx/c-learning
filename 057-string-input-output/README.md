# 057 - String Input, Output, and the Null Terminator

This program demonstrates that a C string is stored in a character array and ends with the null character (`'\0'`). It uses `fgets()` to accept a line of text, including spaces, and then displays the characters until the null terminator is reached.

## Concepts

* `#include <stdio.h>`
* `#include <string.h>`
* Character arrays
* Strings
* `fgets()`
* `printf()`
* Null character (`'\0'`)
* Array indexing
* Looping through a string
* `strcspn()` to remove the newline from input

## Syntax

A string is a sequence of characters followed by the null character:

```c
char text[] = "Hello";
```

Conceptually, the array contains:

```text
H e l l o \0
```

The loop checks each character until it reaches `'\0'`:

```c
for (i = 0; text[i] != '\0'; i++)
{
    printf("%c ", text[i]);
}
```

`fgets()` is used instead of `gets()` because it limits how many characters are read into the array.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Enter a line of text: Hello World
You entered: Hello World
Characters in the string: H e l l o   W o r l d
Null terminator is at index 11.
```
