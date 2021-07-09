#include <stdio.h>
#include <limits.h>

enum sample
{
    abc = INT_MAX
};

int main()
{
    printf("%d\n", abc);
}