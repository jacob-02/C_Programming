#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40};
    int n = sizeof(a)/sizeof(a[0]);
    printf("The product of the first and last numbers = %d", product(a[0], a[n-1]));
}

int product(int a, int b)
{
    return a*b;
}