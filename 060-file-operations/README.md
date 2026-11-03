# 060 (P15) - File Handling Operations in C

## Aim
To write a C program to perform file handling operations such as creating, writing, reading, and closing a file.

## Concepts Used
- **File Handling:** Used to store data permanently in a file.
- **FILE Pointer:** A pointer used to access and work with files.
- **fopen():** Opens or creates a file.
- **fprintf():** Writes data into a file.
- **fscanf():** Reads data from a file.
- **fclose():** Closes the opened file.

## Program
```c
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];

    // Creating and opening a file
    fp = fopen("student.txt", "w");

    // Writing data into the file
    fprintf(fp, "Manbiir");

    // Closing the file
    fclose(fp);

    // Opening the file for reading
    fp = fopen("student.txt", "r");

    // Reading data from the file
    fscanf(fp, "%s", name);

    printf("Data read from file: %s", name);

    // Closing the file
    fclose(fp);

    return 0;
}
```

## Output
```text
Data read from file: Manbiir
```

## Explanation
1. The `stdio.h` header file is included to use file handling functions.
2. A file pointer `fp` is declared using `FILE`.
3. The `fopen()` function opens a file named `student.txt` in write mode (`"w"`).
4. The `fprintf()` function writes the name into the file.
5. The `fclose()` function closes the file after writing.
6. The file is opened again using `fopen()` in read mode (`"r"`).
7. The `fscanf()` function reads the data from the file and stores it in the `name` variable.
8. The `printf()` function displays the data on the screen.
9. Finally, `fclose()` closes the file.

## Result
The C program was successfully executed to demonstrate file handling operations such as creating, writing, reading, and closing a file.