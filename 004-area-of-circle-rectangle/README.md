# 004 - Area of a Circle and Rectangle

This program demonstrates how to calculate the area of a circle and a rectangle using user-provided inputs. It first calculates the area of a circle using the formula **π × r × r**, then calculates the area of a rectangle using the formula **length × breadth**.

> **Note:** The program stores the circle's area in an integer variable (`A`), so the decimal part of the result is truncated. For more accurate results, use a `float` or `double` variable instead.

## Concepts

- `#include <stdio.h>`
- `main()`
- `printf()`
- `scanf()`
- Variables
- Arithmetic operators (`*`)
- Formula for the area of a circle
- Formula for the area of a rectangle

## Run

```bash
gcc main.c -o main
./main
```

## Output

```text
This program will find area of the circle and rectangle.
Enter radius of circle r: 5
Area =78
Enter the length of rectangle: 8
Enter the breadth of rectangle: 6
Area =48
```