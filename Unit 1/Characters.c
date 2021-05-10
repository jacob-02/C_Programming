// Single character input and output
// It is like a small integer in C
// It occupies a single byte

#include <stdio.h>
//#include <stdio_ext.h>

int main()
{
    char ch;
    while ((ch =getchar()) != '\n')
    {
        putchar(ch);
    }
    printf("\n");
    
}