#include <stdio.h>

int main()
{
    struct xx
    {
        int x;

        struct
        {
            char s;
            struct xx *p;
        };

        // struct yy *q;
    };
}