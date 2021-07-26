#include <stdio.h>
int n = 100;

int main()
{
    while (n > 0)
    {
        if (n % 11 == 0)
            printf("\n PESU for n = %d", n);
        if (n % 51 == 0)
        {
            break;
        }
        n = n - 1;
    }
}