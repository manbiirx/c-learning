# 059 - Call by Value vs Pointer-Based Modification

This program compares call by value with modifying a variable through a pointer. In call by value, the function receives a copy, so changing its parameter does not change the original variable. In the second function, the address of the original variable is passed, allowing the function to change the value stored there.

Strictly speaking, C passes all function arguments by value. The common classroom phrase "call by reference" in C usually means passing a pointer (the address) by value and using it to modify the original object.

## Concepts

* `#include <stdio.h>`
* Functions
* Function definition and calling
* Parameters and arguments
* Call by value
* Pointers
* Address-of operator (`&`)
* Dereferencing operator (`*`)
* Passing an address to a function
* Modifying the original variable

## Syntax

Call by value passes the variable's value:

```c
changeByValue(number);
```

The parameter `x` is a separate local copy. Changing it does not affect `number`.

To modify the original variable, pass its address and accept a pointer:

```c
changeUsingPointer(&number);

void changeUsingPointer(int *x)
{
    *x = 100;
}
```

Here, `&number` passes the address, and `*x = 100` updates the value stored at that address.

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
Original number = 10
Inside changeByValue: x = 100
After call by value = 10
Inside changeUsingPointer: *x = 100
After passing address to pointer function = 100
```
