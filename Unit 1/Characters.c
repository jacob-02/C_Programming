// Single character input and output
// It is like a small integer in C
// It occupies a single byte

#include <stdio.h>
//#include <stdio_ext.h>

int main()
{
    char ch, b;
    printf("Enter the character\n");
    scanf("%c", &ch);
    printf("%c", ch);
}