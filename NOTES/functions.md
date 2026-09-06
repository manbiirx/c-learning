functions:
1. standard/ built in
2. user defined
further classified:
1. with return type (int,float...)
2. without return type (void)
further classified:
1. with arguement
2. without arguement (getch,clrscr)

functions:
1. function without return type withour arguement
2. funciton withour retrun type with arguement
3. functions with return type with arguement
4. functions with return type without arguement

arguements:
1. local (limited to single block)
2. global

parts of a functions:
1. function prototype/signature/declaration
2. function definition(creation)
3. function calling (use)

syntax of first type:
1. function without return type without arguement-
    void functionname ();
    void functionname 
    {
        statements;
    }
    void main(;)
eg:
    #include <stdio.h>
    void add();
    void main
    {
        add();
        return;
    }
    void add()
    {
        int a,b,c;
        a=10;
        b=20;
        c=a+b
        printf("%d",c)
    }
2. function without return type with arguement-
    datatype functionname()
    {
        statements
        return value;
    }
    void main ()
    {
        variable=functionname
    }
eg:
    #include <stdio.h>
    int add()
    int void main()
    {
        int c;
        c=add();
        printf("%d",c)
        return 0;
    }
    int add()
    {
        int a,b,c;
        a=10;
        b=20;
        c=a+b
        printf("%d",c)
    }
3. fucntions without retrun type with arguement-
    void functionname(datatype1 arguement1, datatype2 arguement2)
    void functionname(datatype1 arguement1, datatype2 arguement2)
    {
        statements
    }
    void main
    {
        functionname(value1,value2);
    }
eg:
    #include <stdio.h>
    void add(int a, int b)
    int/void main()
    {
        add(10,20); add(a,b);
        return 0;
    }
    int add(int a, int b)
    {
        int a,b,c;
        a=10;
        b=20;
        c=a+b
        printf("%d",c)
    } 
4. functions with return type with arguement-
    datatype functionname(datatype1 arguement1, datatype2 arguement2)
    datatype functionname(datatype1 arguement1, datatype2 arguement2)
    {
        statements
    }
    void main()
    {
        functionname(value1,value2);
    }
eg:
    #include <stdio.h>
    int add(int a, int b)
    int/void main()
    {
        int add(10,20); add(a,b);
        printf("%d",c)
        return 0;
    }
    int add(int a, int b)
    {
        int c;
        c=a+b
        return c;
    } 