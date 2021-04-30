# C_Programming

UNIT 1

Errors in C:

    Compile Time Errors,
    
    Link Time Errors,
    
    Run Time Errors,
    
    Logical Errors.

Compile Time Errors: 

    Object File doesn't get created in Compile time errors
    
    Example:
        #include <stdio.h>

        int main()
        {
            printf("Hello world\n")
            printf("Adding a commit\n");
        }

Link Time Errors:

    Happens when the compiler is linking the program to the modules called like stdio.h

    Example:
        #include <stdio.h>

        int main()
        {
            Printf("Hello world\n");
            printf("Adding a commit\n");
        }

Run Time Errors:

    Happens when the code runs. There are no Linking or Compiler errors. The code has a inherent problems in common knowledge

    Example:
        #include <stdio.h>

        int main()
        {
            printf("Hello world\n");
            printf("%d", 12/0);
            printf("Adding a commit\n");
        }

Logical Errors:

    Happens when the expected outcome is not available
    
    Example:

        // Wanting to print Hello People

        #include <stdio.h>

        int main()
        {
            printf("Hello world\n");
            printf("Adding a commit\n");
        }

Program Development Life Cycle:

gcc -save-temps first.c -> This gives the Assembly level file and the Machine Level file

Editing:

    Writing a program
    Save the file : file_name.c

Preprocessing:

    Macro Substitution - #define stuff and all that 
    Comments Removed
    Expansion of the files

Compilation:

    Source code will be converted to machine level language. The file will be of the type .o . The .s file is the assembly level langauage.

Linking:

    Links the file to the files that are included into the code to get the function that is needed to run the code.
    Function Calls and Function Definition
    A ./a.out command is used to run the a.out file that is created for Linux. In Windows a.exe file is created


Loading:

    To be announced

Output:

    Intermediate file
    Assembly level file
    These 2 together are called as Translation Unit

Program Structure:

    It is case sensitive

    C is free format source code =  That is indentation doesn't matter

    Variable name given to the location

    name
    value
    type
        set of values
        set of operations
    location
    scope
    lifetime
    qualifiers
    storage class
