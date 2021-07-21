#include <stdio.h>
int incr(int x)
{
    return x + 1;
}
int less_15(int x)
{
    return x < 15;
}
int total(int res, int x)
{
    return res + x;
}
int reduce(int n, int *b, int (*p)(int, int))
{
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        res = p(res, b[i]);
    }
    return res;
}
void map(int *a, int n, int *b, int (*p)(int))
{
    for (int i = 0; i < n; ++i)
    {
        *(b + i) = p(*(a + i)); //b[i] = p(a[i])
    }
}
void filter(int n, int *b, int (*p)(int))
{
    for (int i = 0; i < n; ++i)
    {
        b[i] = p(b[i]);
    }
}
int main()
{
    int a[] = {12, 24, 32, 11, 45, 3, 1};
    int n = sizeof(a) / sizeof(*a);
    int b[100];
    map(a, n, b, incr);
    for (int i = 0; i < n; ++i)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");

    filter(n, b, less_15);
    for (int i = 0; i < n; ++i)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");

    int result = reduce(n, b, total);
    printf("%d\n", result);

    return 0;
}
