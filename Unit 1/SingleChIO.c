//In this we can take input from any place other than the keyboard or the terminal

#include <stdio.h>

int main()
{
    char ch;
    ch = getc(stdin);
    putc(ch, stdout);
}