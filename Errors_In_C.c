/*

Errors in C
    Compile Time Errors
    Link Time Errors
    Run Time Errors
    Logical Errors

Compile Time Errors
    Object File doesn't get created in Compile time errors
    
    Example:
        #include <stdio.h>

        int main()
        {
            printf("Hello world\n")
            printf("Adding a commit\n");
        }

Link Time Errors
    Happens when the compiler is linking the program to the modules called like stdio.h

    Example:
        #include <stdio.h>

        int main()
        {
            Printf("Hello world\n");
            printf("Adding a commit\n");
        }

Run Time Errors
    Happens when the code runs. There are no Linking or Compiler errors. The code has a inherent problems in common knowledge

    Example:
        #include <stdio.h>

        int main()
        {
            printf("Hello world\n");
            printf("%d", 12/0);
            printf("Adding a commit\n");
        }

Logical Errors
    Happens when the expected outcome is not available
    
    Example:

        // Wanting to print Hello People

        #include <stdio.h>

        int main()
        {
            printf("Hello world\n");
            printf("Adding a commit\n");
        }

*/

#include <stdio.h>

int main()
{
    printf("Standard C Version=%d", __STDC_VERSION__);
}