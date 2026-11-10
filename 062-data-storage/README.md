# 062 - Student Data Storage Application in C

This program creates a file named `students.txt` and stores student records entered by the user. It uses a structure named `Student` to store the roll number, name, and marks of each student. The program uses a file pointer and `fprintf()` to write multiple student records into the file. It opens the file in append mode (`"a"`) so that new records are added without deleting previously stored data.

## Concepts

- `#include <stdio.h>`
- Structures in C (`struct Student`)
- Structure variables
- File handling in C
- File pointer (`FILE *fp`)
- `fopen()` – opening or creating a file
- `fclose()` – closing a file
- File opening mode (`"a"`)
- `fprintf()` – writing formatted data into a file
- `scanf()` – accepting user input
- `printf()` – displaying output
- `for` loop
- Conditional statements (`if`)
- Storing multiple records in a file

## Syntax

To declare a structure:

```c
struct Student
{
    int roll;
    char name[50];
    float marks;
};
```

To create and open a file in append mode:

```c
fp = fopen("students.txt", "a");
```

To check whether the file opened successfully:

```c
if(fp == NULL)
{
    printf("File cannot be opened");
    return 1;
}
```

To write student details into the file:

```c
fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
```

To close the file:

```c
fclose(fp);
```

Here, `fprintf()` writes the student details into the file in a formatted manner. The append mode (`"a"`) allows new records to be added while preserving existing records.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Enter number of students: 2

Enter details of student 1
Enter Roll Number: 101
Enter Name: Manbiir
Enter Marks: 85.5

Enter details of student 2
Enter Roll Number: 102
Enter Name: Rahul
Enter Marks: 90

Student records saved successfully!
```

**File created: `students.txt`**

```text
101 Manbiir 85.50
102 Rahul 90.00
```