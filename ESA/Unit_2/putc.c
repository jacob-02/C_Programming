#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character\n");
    c = getc(stdin);
    printf("The entered character is \n");
    putc(c, stdout);
    printf("\n");
}