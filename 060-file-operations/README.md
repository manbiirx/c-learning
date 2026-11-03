# 060 (P15) - File Handling Operations in C

## Aim
To write a C program to perform file handling operations such as creating, writing, reading, and closing a file with NULL pointer checking.

## Concepts Used
- **File Handling:** Used to store data permanently in a file.
- **FILE Pointer:** A pointer used to access and work with files.
- **fopen():** Opens or creates a file.
- **NULL:** Represents an invalid or empty pointer. It is used to check whether a file has opened successfully.
- **fprintf():** Writes data into a file.
- **fscanf():** Reads data from a file.
- **fclose():** Closes an opened file.

## Program
```c
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened for writing");
        return 1;
    }
    else
    {
        fprintf(fp, "Manbiir");
        fclose(fp);
    }

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened for reading");
        return 1;
    }
    else
    {
        fscanf(fp, "%s", name);
        printf("Data read from file: %s", name);
        fclose(fp);
    }

    return 0;
}
```

## Output
```text
Data read from file: Manbiir
```

## Explanation
1. The `stdio.h` header file is included to use input-output and file handling functions.
2. A file pointer `fp` is declared using `FILE`.
3. A character array `name[50]` is created to store the data read from the file.
4. The `fopen()` function opens a file named `student.txt` in write mode (`"w"`).
5. The `if (fp == NULL)` condition checks whether the file was opened successfully. If it fails, an error message is displayed and the program terminates.
6. The `fprintf()` function writes the text "Manbiir" into the file.
7. The `fclose()` function closes the file after writing.
8. The file is opened again in read mode (`"r"`) using `fopen()`.
9. Again, `if (fp == NULL)` checks whether the file opened successfully for reading.
10. The `fscanf()` function reads the data from the file and stores it in the `name` variable.
11. The `printf()` function displays the data read from the file.
12. Finally, `fclose()` closes the file and `return 0` indicates successful program execution.

## Result
The C program was successfully executed to demonstrate file handling operations such as creating, writing, reading, and closing a file with NULL pointer checking.