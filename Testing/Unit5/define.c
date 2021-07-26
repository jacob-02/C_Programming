#include <stdio.h>
#define mul(x, y) x*y
#define MAX 10
#define MIN 5
#define TEMP MAX+MIN

int main()
{
    printf("%d\n", mul(MAX + 1, MIN - 1));
    // #define MAX 20; This is an error as the value of MAX is being redefined
    printf("%d\n", mul((MAX + 1), MIN - 1));
    printf("%d\n", TEMP);
}