#include <stdio.h>
int main()
{
    int nw = 0;
    int nc = 0;
    int nl = 0;
    char ch;
    int inword = 0; // not in a word so far
    while ((ch = getchar()) != EOF)
    {
        ++nc;
        if (ch == '\n')
        {
            ++nl;
        }
        if (inword && (ch == ' ' || ch == '\t' || ch == '\n'))
        {
            inword = 0;
            ++nw;
        }
        else if (!(ch == ' ' || ch == '\t' || ch == '\n'))
        { //avoid recomputation of white space concept
            inword = 1;
        }
    }
    printf("number of words %d number of lines %d number of characters %d\n", nw, nl, nc);
    return 0;
}