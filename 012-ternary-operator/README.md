# 012 - Voting Eligibility Using the Ternary Operator

This program demonstrates the use of the conditional (ternary) operator (`?:`) to determine whether a person is eligible to vote based on their age. If the entered age is **18 or above**, the program displays that the user is eligible to vote; otherwise, it displays that the user is ineligible.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Variables
- Conditional (ternary) operator (`?:`)
- Comparison operator (`>=`)

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
This program will determine if you are eligible for voting
Enter your age: 20
You are eligible for voting
```

### Other Example

```text
This program will determine if you are eligible for voting
Enter your age: 16
You are ineligible for voting
```