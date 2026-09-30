## 1. Introduction to Pointers

A **pointer** is a variable that stores the memory address of another variable as its value. Instead of holding a direct data value (like `10` or `'A'`), it points to the exact location in the computer's memory where that data is stored.

* A pointer is created using the `*` (asterisk) operator.
* A pointer must be of the same data type as the variable it points to (e.g., an `int` pointer must point to an `int` variable).

**Basic Syntax:**

```c
int myAge = 32;       // An integer variable
int *ptr = &myAge;    // A pointer variable 'ptr' storing the address of 'myAge'

printf("%d\n", myAge);  // Prints the value (32)
printf("%p\n", &myAge); // Prints the memory address of myAge (e.g., 0x7ffeb...)
printf("%p\n", ptr);    // Prints the memory address stored in ptr (matches the above)

```

> **Exam Tip:** `%p` is the format specifier used to print memory addresses (pointers) in hexadecimal format.

---

## 2. The `&` and `*` Operators (Dereferencing)

Understanding pointers comes down to mastering two operators:

* **`&` (Address-of operator):** Returns the memory address of a variable.
* **`*` (Dereference / Value-at operator):** Accesses the actual value stored at the memory address the pointer is pointing to.

**Sample Program:**

```c
#include <stdio.h>

int main() 
{
    int a = 100;
    int *ptr = &a;
    
    printf("Value of a: %d\n", a);                  // Outputs: 100
    printf("Address of a: %p\n", &a);               // Outputs address of 'a'
    printf("Address stored in ptr: %p\n", ptr);     // Outputs same address as above
    
    // Dereferencing: getting the value using the pointer
    printf("Value pointed to by ptr: %d\n", *ptr);  // Outputs: 100
    
    return 0;
}

```

---

## 3. Pointer Arithmetic & Arrays

Pointer arithmetic means changing the value of a pointer to make it point to a different element in memory. When you add `1` to a pointer, it doesn't just add 1 to the memory address; it adds the **size of the data type** (e.g., +4 bytes for an `int`).

In C, the name of an array acts as a pointer to its first element (`&num[0]`).

**Sample Program (Using Arithmetic and Loops for Efficiency):**

```c
#include <stdio.h>

int main() 
{
    int num[4] = {25, 50, 75, 100};
    int *p = num; // Points to num[0]. (Equivalent to: int *p = &num[0];)
    
    // Manual pointer arithmetic
    printf("First element: %d\n", *p);       // 25
    printf("Second element: %d\n", *(p+1));  // 50
    printf("Third element: %d\n", *(p+2));   // 75
    printf("Fourth element: %d\n", *(p+3));  // 100
    
    printf("\n--- Using a Loop & Increment Operator ---\n");
    
    // Efficient traversal using increment operator (p++)
    for(int i = 0; i < 4; i++) 
    {
        printf("Element %d: %d\n", i, *p);
        p++; // Moves the pointer forward by 1 integer (4 bytes) in memory
    }
    
    return 0;
}

```

---

## 4. Pointer to Pointer (Double Pointer)

A pointer to a pointer is a variable that stores the memory address of *another pointer*.

* A single pointer uses one `*` (e.g., `int *p`).
* A double pointer uses two `**` (e.g., `int **ptr2`).

**Sample Program:**

```c
#include <stdio.h>

int main() 
{
    int var = 3000;
    int *ptr = &var;       // Pointer to int
    int **ptr2 = &ptr;     // Pointer to pointer
    
    printf("Value of var directly: %d\n", var);           // 3000
    printf("Value of var via ptr (*ptr): %d\n", *ptr);    // 3000
    printf("Value of var via ptr2 (**ptr2): %d\n", **ptr2); // 3000
    
    printf("\nMemory Addresses:\n");
    printf("Address of var: %p\n", &var);
    printf("Address stored in ptr: %p\n", ptr);
    printf("Address of ptr itself: %p\n", &ptr);
    printf("Address stored in ptr2: %p\n", ptr2);
    
    return 0;
}

```

---

## 5. Bonus Sem-1 Essentials to Remember

* **NULL Pointers:** If you declare a pointer but don't have an address to assign to it right away, always assign it to `NULL`. This prevents it from pointing to a random memory location (a "wild pointer").
```c
int *ptr = NULL; 

```


* **Pointer Size:** On most modern 64-bit systems, a pointer takes **8 bytes** of memory, regardless of what data type it points to (because memory addresses are all the same size). On 32-bit systems, they take **4 bytes**.