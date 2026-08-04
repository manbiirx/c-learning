# 015 - OTP Validation Using the Ternary Operator

This program demonstrates the use of the conditional (ternary) operator (`?:`) to validate a One-Time Password (OTP). It compares the user-entered OTP with a predefined value (`1234`) and displays whether the OTP is valid or invalid.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Variables
- Conditional (ternary) operator (`?:`)
- Comparison operator (`==`)

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
This program will check the validity of your OTP.
Enter your OTP: 1234
The OTP is valid
```

### Other Example

```text
This program will check the validity of your OTP.
Enter your OTP: 5678
The OTP is invalid
```