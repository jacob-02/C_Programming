#include <stdio.h>
#include "palindrome.h"

int palindrome(int n)
{
    int temp = 0, new = n;

    while (n > 0)
    {
        temp = temp * 10 + n % 10;
        n = n / 10;
    }
    return (temp == new);
}