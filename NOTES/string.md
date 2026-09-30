## 1. Characters vs. Strings

In C, there is no built-in "string" data type. Instead, strings are stored as **arrays of characters**.

* **Single Character:** Stores exactly one character. Enclosed in single quotes (`' '`). Uses the `%c` format specifier.
```c
char name = 'x'; 

```


* **String (Character Array):** Stores a sequence of characters. Can be initialized character-by-character or with double quotes (`" "`). Uses the `%s` format specifier.
```c
// Initializing character by character
char lname[10] = {'x', 'a', 's', 'd', '\0'}; 

// Easier way (compiler adds '\0' automatically)
char fname[10] = "xasd"; 

```



> **Exam Tip:** **The Null Terminator (`'\0'`)** is absolutely necessary at the end of a character array for it to be treated as a string. It tells the compiler where the string ends. Without it, functions like `printf("%s")` will keep printing random memory (garbage values) until they accidentally hit a `\0`.

---

## 2. Looping Through a String

Because strings end with a `'\0'`, you don't always need to know the exact length of the array to loop through it. You can just loop until you hit the null terminator.

**Sample Program:**

```c
#include <stdio.h>

int main() 
{
    char greeting[] = "Hello World";
    int i = 0;
    
    // Loop continues as long as the current character is NOT '\0'
    while(greeting[i] != '\0') 
    {
        printf("Character at index %d is: %c\n", i, greeting[i]);
        i++;
    }
    
    return 0;
}

```

---

## 3. String Input & Output Functions

C provides multiple ways to read and print strings. Knowing the difference is crucial for handling spaces correctly.

### Input Functions

1. **`scanf()`:**
* **Syntax:** `scanf("%s", str);` (Notice: no `&` is needed for strings).
* **Drawback:** It treats a space as a terminating character. If you type "John Doe", `scanf` will only store "John".


2. **`gets()`:**
* **Syntax:** `gets(str);`
* **Advantage:** Reads multi-word strings including spaces until you press Enter.
* **Drawback:** It is **unsafe** and deprecated because it doesn't check array size, leading to "buffer overflows" (crashing the program if you type too much).


3. **`fgets()`:**
* **Syntax:** `fgets(str, sizeof(str), stdin);`
* **Advantage:** The safest and most standard way. It reads spaces and prevents buffer overflow by strictly limiting how many characters it reads.



### Output Functions

1. **`printf()`:** Standard formatted output. Does not add a newline automatically.
* *Syntax:* `printf("%s\n", str);`


2. **`puts()`:** Prints the string and **automatically adds a newline** (`\n`) at the end.
* *Syntax:* `puts(str);`


3. **`fputs()`:** Prints the string exactly as it is, without adding an automatic newline (often paired with `fgets`).
* *Syntax:* `fputs(str, stdout);`



---

## 4. Understanding Different String Declarations

This is a very common exam and interview topic. Here is the difference between various `char` declarations:

| Declaration | What it is | Explanation |
| --- | --- | --- |
| `char name[10];` | **A Single String (1D Array)** | An array that can hold one string of up to 9 characters (plus the `\0`). <br>

<br>*Example:* `"Indore"` |
| `char name[10][20];` | **Array of Strings (2D Array)** | A 2D grid. It can hold exactly **10 distinct strings**, and each string can be up to **19 characters** long. It reserves exact memory blocks, even if strings are shorter (wastes memory). |
| `char *name[10];` | **Array of Pointers** | An array of 10 pointers, where each pointer points to the first character of a string. This is **memory efficient** for varying string lengths (like `"Hi"`, `"Supercalifragilistic"`), because it only allocates the exact memory needed for each string. |
| `char **name;` | **Pointer to a Pointer** | Used to create **dynamically allocated arrays of strings**. You'll see this heavily in command-line arguments: `int main(int argc, char **argv)`. It points to the first element of an array of string pointers. |

**Code Example of Array of Strings vs. Array of Pointers:**

```c
#include <stdio.h>

int main() 
{
    // 2D Array: Wastes memory if strings are small (10x20 = 200 bytes total reserved)
    char cities[3][20] = {"Indore", "Bhopal", "Mumbai"};
    
    // Array of Pointers: Memory efficient (Only allocates exactly what's needed)
    char *fruits[3] = {"Apple", "Banana", "Kiwi"};
    
    printf("City: %s\n", cities[0]);
    printf("Fruit: %s\n", fruits[0]);
    
    return 0;
}

```