#include <stdio.h>

struct test
{
    char a;
    double b;
    int c;
};

int main()
{
    printf("%ld\n", sizeof(struct test));
}

// Data structure allignment - data allignment, data structuring
// Padding happens only when a smaller data type is initialised before a larger data types