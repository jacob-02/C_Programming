//In this we can take input from any place other than the keyboard or the terminal

#include <stdio.h>
#include <ncurses.h>

int main()
{/*
    char ch;
    while ((ch = getc(stdin)) != EOF)
    {
        putc(ch, stdout);
    }
    */

   /*
    char ch;
    ch = getc(stdin);
    putc(ch, printf("Hello"));
    */

   char flag;
    /* Our first simple C basic program */
    printf("Hello World! ");
    printf("Do you want to continue Y or N");
    flag = getche(); // It waits for keyboard input.
    if (flag == 'Y')
    {
       printf("You have entered Yes");
    }
    else
    {
       printf("You have entered No");
    }
    return 0;
}
