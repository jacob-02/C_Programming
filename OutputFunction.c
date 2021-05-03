/*
Input Output Functions
    formatted
    unformatted

printf => formatted output function
    defined <stdio.h>
    int printf(const char *format, ...);
    variable number of arguments
    format string
    "%format specifier [flags][width][precisiion]"

%c => char
%d => integer
%f => float
%lf => double

If you try to run the float format specifier using integer value, then the value 0 it will be printed

*/

#include <stdio.h>
int main()
{
    printf("%s %s %s %s", "one", "two", "three", "four");
    printf("%s %s %s %s", "one", "two", "three");
    printf("%.2f\n", 2.567);
    printf("%d", 2.5);
}