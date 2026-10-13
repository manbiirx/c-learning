# 053 - Pointer Basics (Address-of and Dereferencing)

This program demonstrates how a pointer stores the memory address of a variable. It uses the address-of operator (`&`) to obtain the variable's address and the dereferencing operator (`*`) to read and modify the value stored at that address.

## Concepts

* `#include <stdio.h>`
* `main()`
* `printf()`
* Variables
* Pointer declaration
* Address-of operator (`&`)
* Dereferencing / indirection operator (`*`)
* Memory addresses
* Modifying a variable through a pointer

## Syntax

A pointer is declared by placing `*` before its name. The pointer's type should match the type of value it points to:

```c
int number = 10;
int *ptr = &number;
```

Here, `&number` gives the address of `number`, and that address is stored in `ptr`. Using `*ptr` accesses the value at that address:

```c
printf("%d", *ptr);
*ptr = 25;
```

The assignment through `*ptr` changes the original variable, so `number` becomes `25`.

## Run

```bash
gcc main.c -o main
./main
```

## Output

The memory address will vary each time the program runs.

```text
Original value of number = 10
Address of number = [memory address]
Address stored in ptr = [same memory address]
Value accessed through ptr = 10
Value after modifying through ptr = 25
```
