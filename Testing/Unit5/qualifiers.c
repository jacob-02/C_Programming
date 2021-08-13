#include <stdio.h>
int main()
{
    unsigned int a = 11;
    unsigned int b = -9; // observe this
    int c = 10;           // change this to -10 and check
    signed int d = -10;
    printf("%u %u %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}