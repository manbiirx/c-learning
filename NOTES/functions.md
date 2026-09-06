FUNCTIONS IN C

1. TYPES OF FUNCTIONS

Functions are mainly classified into:

1. Standard / Built-in Functions
   - Functions already provided by C libraries.
   - Examples:
     printf()
     scanf()
     getch()
     clrscr()

2. User-Defined Functions
   - Functions created by the programmer according to the requirement.


2. CLASSIFICATION BASED ON RETURN TYPE

Functions can be classified based on their return type:

1. With Return Type
   - Returns a value.
   - Examples: int, float, char, etc.

2. Without Return Type
   - Uses void.
   - Does not return any value.


3. CLASSIFICATION BASED ON ARGUMENTS

Functions can also be classified based on arguments:

1. With Arguments
   - Values are passed to the function while calling it.

2. Without Arguments
   - No values are passed to the function while calling it.

Examples of functions without arguments:
   getch()
   clrscr()


4. FOUR TYPES OF USER-DEFINED FUNCTIONS

Combining return type and arguments, there are four types:

1. Function without return type and without arguments
2. Function without return type and with arguments
3. Function with return type and with arguments
4. Function with return type and without arguments


5. VARIABLES

Variables can be classified based on their scope:

1. Local Variables
   - Declared inside a function or block.
   - Their scope is limited to that particular function or block.

   Example:
   void add()
   {
       int a, b;
   }

   Here, a and b are local variables.


2. Global Variables
   - Declared outside all functions.
   - Can generally be accessed by multiple functions.

   Example:
   int a = 10;

   void display()
   {
       printf("%d", a);
   }


6. PARTS OF A FUNCTION

A user-defined function generally has three important parts:

1. Function Declaration / Prototype
   - Tells the compiler about the function before it is used.

   Example:
   void add();


2. Function Definition
   - Contains the actual statements that perform the required task.

   Example:
   void add()
   {
       int a, b, c;
       a = 10;
       b = 20;
       c = a + b;
       printf("%d", c);
   }


3. Function Calling
   - Used to execute the function.

   Example:
   add();


--------------------------------------------------
1. FUNCTION WITHOUT RETURN TYPE AND WITHOUT ARGUMENTS
--------------------------------------------------

Syntax:

void functionname();

void functionname()
{
    statements;
}

Function Call:

functionname();


Example:

#include <stdio.h>

void add();

int main()
{
    add();

    return 0;
}

void add()
{
    int a, b, c;

    a = 10;
    b = 20;
    c = a + b;

    printf("%d", c);
}


Explanation:

- void add(); is the function declaration.
- add(); is the function call.
- void add() is the function definition.
- The function does not receive any arguments.
- The function does not return any value.


--------------------------------------------------
2. FUNCTION WITHOUT RETURN TYPE AND WITH ARGUMENTS
--------------------------------------------------

Syntax:

void functionname(datatype argument1, datatype argument2);

void functionname(datatype argument1, datatype argument2)
{
    statements;
}

Function Call:

functionname(value1, value2);


Example:

#include <stdio.h>

void add(int a, int b);

int main()
{
    add(10, 20);

    return 0;
}

void add(int a, int b)
{
    int c;

    c = a + b;

    printf("%d", c);
}


Explanation:

- int a and int b are the parameters/arguments.
- add(10, 20) passes 10 and 20 to the function.
- The function does not return a value because its return type is void.


--------------------------------------------------
3. FUNCTION WITH RETURN TYPE AND WITH ARGUMENTS
--------------------------------------------------

Syntax:

datatype functionname(datatype argument1, datatype argument2);

datatype functionname(datatype argument1, datatype argument2)
{
    statements;

    return value;
}

Function Call:

variable = functionname(value1, value2);


Example:

#include <stdio.h>

int add(int a, int b);

int main()
{
    int c;

    c = add(10, 20);

    printf("%d", c);

    return 0;
}

int add(int a, int b)
{
    int c;

    c = a + b;

    return c;
}


Explanation:

- int add(int a, int b); is the function declaration.
- add(10, 20) passes values to the function.
- The function calculates the sum.
- return c sends the value back to main().
- The returned value is stored in variable c.


--------------------------------------------------
4. FUNCTION WITH RETURN TYPE AND WITHOUT ARGUMENTS
--------------------------------------------------

Syntax:

datatype functionname();

datatype functionname()
{
    statements;

    return value;
}

Function Call:

variable = functionname();


Example:

#include <stdio.h>

int add();

int main()
{
    int c;

    c = add();

    printf("%d", c);

    return 0;
}

int add()
{
    int a, b, c;

    a = 10;
    b = 20;
    c = a + b;

    return c;
}


Explanation:

- The function does not receive any arguments.
- The function has a return type of int.
- The function calculates the sum.
- return c sends the result back to main().
- The returned value is stored in variable c.


SUMMARY

1. Without Return Type + Without Arguments
   void functionname();

2. Without Return Type + With Arguments
   void functionname(datatype argument1, datatype argument2);

3. With Return Type + With Arguments
   datatype functionname(datatype argument1, datatype argument2);

4. With Return Type + Without Arguments
   datatype functionname();