#include <stdio.h>

int main()
{
    char*p = "PESU";
    printf("%s\n", p);
    p++;
    printf("%s", p);
    p--;
    printf("%s\n", p);
    p[1] = 'e';
    printf("%s", p);
    printf("Size of the string is %d", sizeof(p));
}