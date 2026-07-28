# 007 - Increment and Decrement Operator Combinations

This program demonstrates the use of pre-increment (`++a`), post-increment (`a++`), and post-decrement (`a--`) operators in different arithmetic expressions. It takes two integer inputs from the user, evaluates three expressions, and displays their results.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Variables
- Pre-increment operator (`++a`)
- Post-increment operator (`a++`)
- Post-decrement operator (`a--`)
- Arithmetic expressions
- Undefined behavior

## Run

```bash
gcc main.c -o main
./main
```

## Sample Output

```text
Combinations that will be used:
 (a++) + (++a)
 (++a) + (--a) + (++b)
 (++a) + (++a) + (a--)
Enter the number (a):5
Enter the number (b):10
Value of first combination :13
Value of second combination :25
Value of third combination :27
```
