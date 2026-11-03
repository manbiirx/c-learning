# 061 - Count Characters and Spaces in a File

This program creates a file named `data.txt` and writes user-entered text into it. It then opens the file in read mode and reads it character by character using `fgetc()`. The program counts the total number of characters and the total number of spaces present in the file.

**## Concepts**

* `#include <stdio.h>`
* File handling in C
* File pointer (`FILE *fp`)
* `fopen()` – opening a file
* `fclose()` – closing a file
* File opening modes (`"w"` and `"r"`)
* `getchar()` – reading characters from the keyboard
* `fputc()` – writing a character into a file
* `fgetc()` – reading a character from a file
* `EOF` – end of file
* `while` loop
* Conditional statements (`if`)
* Counting characters and spaces

**## Syntax**

To create and open a file in write mode:

```c
fp = fopen("data.txt", "w");
```

To read characters from the keyboard until Enter is pressed:

```c
while ((ch = getchar()) != '\n')
{
    fputc(ch, fp);
}
```

To read the file character by character:

```c
while ((ch = fgetc(fp)) != EOF)
{
    characters++;

    if (ch == ' ')
    {
        spaces++;
    }
}
```

Here, `fgetc()` reads one character at a time, and `EOF` indicates the end of the file. The `characters` variable counts all characters, while `spaces` counts only blank spaces.

**## Run**

```bash
gcc main.c -o main
./main
```

**## Output**

```text
Enter text: Hello World C Programming

Total characters = 25
Total spaces = 3
```

